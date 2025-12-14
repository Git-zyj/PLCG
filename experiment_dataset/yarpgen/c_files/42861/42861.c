/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [2] [1] [2] = (!7213945423891509024);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [0] = max(-11137, (max((arr_4 [i_3 - 2] [i_3 - 1]), (arr_4 [i_3 + 1] [i_3 - 1]))));
                                arr_15 [i_1] = (-116 & 12706717507789305964);
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] = min(((((var_9 ? -16641 : -72)))), (((arr_4 [i_0] [i_1]) ? (((arr_7 [i_0] [i_0] [i_0] [10]) + (arr_2 [i_0] [i_2]))) : var_11)));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_13 ^= ((((!(52 ^ var_9))) ? (arr_10 [i_0] [i_0] [i_0]) : (((arr_8 [i_0] [i_1] [i_1]) ? (arr_8 [i_0] [i_1] [i_5]) : (arr_8 [i_0] [i_0] [i_0])))));
                    var_14 ^= (arr_8 [i_0] [i_1] [3]);
                    arr_19 [8] = (-127 - 1);
                    arr_20 [i_0] [i_5] = 12706717507789305953;
                }
                var_15 *= (((max((max((arr_3 [i_0] [i_1]), 6183011212259241297)), (((var_1 ? (arr_6 [i_0] [i_0] [i_0]) : 12401))))) >= ((((!(arr_11 [i_1])))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_27 [i_1] = (((((!((max(11122, (arr_7 [10] [i_1] [i_1] [i_7]))))))) != ((-7709 ? -31889 : -31901))));
                            arr_28 [i_0] = max(4, -31889);
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, var_9));
    #pragma endscop
}
