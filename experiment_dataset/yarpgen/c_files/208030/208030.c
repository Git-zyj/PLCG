/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -13;
    var_13 = ((var_9 ? 31 : var_5));
    var_14 = var_3;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 &= ((((((arr_1 [i_0 - 1]) << (((arr_1 [i_0 - 2]) - 11779599717010167480))))) ? (((arr_1 [i_0 - 1]) - (arr_1 [i_0 + 1]))) : ((((!(arr_1 [i_0 + 1])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (--4183732406997712585);
                        var_16 -= (((arr_8 [i_1 + 1] [i_1] [i_0 + 1] [i_3 + 1]) ? (max((arr_8 [i_1 + 1] [i_1 + 1] [i_0 - 2] [i_3 + 1]), (arr_7 [i_1 - 1]))) : (arr_8 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_3 + 1])));
                        arr_12 [0] [i_1] [i_2] = ((var_4 && (((~(min(-4183732406997712565, (arr_9 [1] [i_1] [i_3 - 1] [i_1]))))))));
                        arr_13 [i_2] [i_2] = 1;
                        arr_14 [i_0] = (min((((arr_4 [i_0 - 1] [i_1]) * (!var_9))), ((((((~(arr_10 [i_0] [i_0])))) && var_9)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
