/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_11 = (min(var_11, (!72057456598974464)));
                    var_12 = ((var_8 <= (arr_5 [i_0] [i_0] [i_0])));
                    var_13 = (min(var_13, -2085814620134191453));
                    arr_8 [i_1 + 2] [i_1] [i_0] [i_1] &= ((((var_3 ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))) <= (var_1 / 4682194024814970688)));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1 - 1] [i_1] [i_3 - 2] [i_4] [i_5] = (1904259076 < -4682194024814970688);
                                arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_0;
                                var_14 = var_1;
                                var_15 *= (arr_2 [i_4] [i_1]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_5] = (arr_15 [i_5] [i_4 + 2] [i_3 + 1] [i_1 + 1] [i_0]);
                            }
                        }
                    }
                    var_16 = ((-1904259083 ? 532676608 : ((-(arr_15 [i_0] [i_0] [i_1] [i_1] [i_3])))));
                }
                arr_21 [i_1] = (78 <= 156981645);
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
