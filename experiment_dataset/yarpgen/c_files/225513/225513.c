/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min(var_15, var_1));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = ((((~(arr_10 [i_0 + 1] [i_2 - 1] [2] [i_3 - 1]))) * (((((min((arr_6 [i_1] [i_3]), (arr_5 [22] [i_0])))) >= (((arr_4 [i_0] [i_1] [i_0]) - (arr_1 [i_0] [i_0 + 1]))))))));
                            var_17 ^= ((((((~(arr_2 [22] [i_1] [5])))) ? ((var_8 ? var_3 : (arr_0 [i_0]))) : (~var_9))));
                        }
                    }
                }
                var_18 = (min(var_18, (min((arr_8 [i_0 - 3] [i_0] [i_0 - 3] [i_0]), ((var_12 ? (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_1]) : (arr_8 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_1])))))));
                var_19 &= ((((var_11 <= ((((!(arr_2 [i_0] [i_0] [i_1]))))))) || ((((((255 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_7 [i_1])))) ? (~var_5) : 0)))));
            }
        }
    }
    var_20 = ((112 ? 1 : var_4));
    var_21 = ((((((var_0 & var_4) ? ((max(var_6, var_7))) : (~var_0)))) ? (((~((var_14 ? var_13 : var_7))))) : (((((1 ? -114 : 1))) ? (var_11 | var_3) : ((var_6 ? var_0 : var_13))))));
    #pragma endscop
}
