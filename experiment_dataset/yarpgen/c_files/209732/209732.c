/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = ((((((((~2147483647) + 2147483647)) + 2147483647)) << (((arr_6 [i_1]) << (var_5 - 2786598666313515668))))));
                            arr_9 [i_1] [i_1] [i_1] = 7442718441376142286;
                        }
                    }
                }
                var_18 = (arr_4 [i_1] [i_1] [i_1]);
                arr_10 [i_1] [7] [i_1] = ((((((((arr_4 [i_1] [i_1] [i_1]) + 9223372036854775807)) << ((((((~(arr_2 [i_0] [i_1] [i_1]))) + 2585638783930032118)) - 57))))) ? (((((var_16 ? 1975412701695145073 : (arr_4 [i_1] [i_1] [i_0])))) ? (arr_7 [i_1] [11] [i_1] [11] [i_0]) : var_9)) : (-2147483647 - 1)));
                arr_11 [i_0] [i_1] [i_1] = arr_1 [i_0];
                var_19 = (min((((!((min(2147483647, (arr_6 [i_0]))))))), (arr_5 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_20 = (((((-((-740 ? var_10 : var_4))))) ? (((((max(1, var_1))) & -var_12))) : (((!var_2) ? (~var_4) : (max(var_8, var_4))))));
    var_21 = ((var_0 ? ((var_3 ? var_3 : (var_15 + var_1))) : var_13));
    #pragma endscop
}
