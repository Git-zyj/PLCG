/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(63239, (max(var_7, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((var_7 ? (arr_5 [i_0] [i_1] [i_0 - 2]) : (((((1 ? -1 : 14))) ? (min((arr_5 [i_0] [i_0] [i_0]), -1)) : 0))));
                arr_7 [i_1] |= var_8;
                arr_8 [i_0] [i_1] = ((1 ? var_1 : ((((((arr_2 [i_0 + 1] [11]) != (arr_1 [3] [i_0])))) * (arr_4 [i_0 + 1] [i_0 + 1])))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_13 [i_0] [i_0] [i_1 - 1] [i_2] = ((var_9 << ((-1 ? var_6 : (arr_2 [i_1 + 1] [i_1 - 2])))));
                    arr_14 [i_0] [i_1] [i_2] = ((((((arr_1 [i_0 - 1] [i_1 + 1]) * (arr_2 [i_2] [i_0 - 1])))) && (((119 ? 1 : (arr_2 [i_0] [i_0 - 2]))))));
                    arr_15 [i_0 - 2] = 29099;
                    arr_16 [5] [i_2] [i_2] = ((~(max(((var_5 ? -9223372036854775796 : 136)), -1))));
                    arr_17 [i_0] [i_1] [i_2] = ((((arr_11 [i_1 + 1] [i_1 - 2]) ^ var_5)));
                }
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_26 [i_5] [i_1 - 3] [8] [i_4] [i_0 - 2] = -23;
                                arr_27 [1] [i_1] [i_5] [i_4] [i_5] = (!var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = min(-1, (((var_5 + (!29107)))));
    #pragma endscop
}
