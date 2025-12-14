/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 ^= (arr_7 [i_2 - 1] [i_0 + 3]);
                                var_12 = (770359461 < -2073735018051204440);
                                var_13 = (min(var_13, (arr_5 [i_1])));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = (((((var_4 ? var_3 : (arr_6 [i_0])))) ? 17653 : (arr_6 [i_0])));
                    arr_14 [i_0] [i_1] [i_1] [2] = (!49530);
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_14 = ((34359738367 ? -85 : 17));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_23 [0] [0] [i_6] [i_6] [i_6] [i_0] = var_4;
                                var_15 = (((((arr_8 [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? var_7 : (arr_5 [i_0]))) << (!4497)));
                                var_16 = (min(32217, (arr_0 [i_0])));
                            }
                        }
                    }
                    arr_24 [i_5] [i_5] [i_0] = ((-(max(((-127 ? var_6 : (arr_18 [i_0] [i_0] [i_5] [i_5] [i_5]))), ((var_5 % (arr_9 [12] [i_0] [i_1] [i_1] [i_0] [i_0])))))));
                    arr_25 [i_0] [i_5] = (~4294967295);
                    var_17 = ((((max(7, 4179625221753905177))) ? (max(((max(-1085136971, -32209))), (((arr_22 [i_1] [i_1] [i_0]) | 18446744073709551615)))) : (((-(arr_12 [i_0 - 1] [i_0 - 2] [i_1 + 1] [i_0 - 1] [i_1 - 2]))))));
                }
                arr_26 [i_0] [i_1 - 1] = ((-5198 ? 2073735018051204420 : 7));
            }
        }
    }
    var_18 = ((((~((var_9 ? var_7 : var_0))))) ? var_3 : ((max(var_3, 1180350247))));
    #pragma endscop
}
