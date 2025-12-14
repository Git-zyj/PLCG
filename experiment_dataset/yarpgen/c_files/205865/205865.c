/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_2 >> (45 - 18))))));
    var_17 -= ((-29490 || (((var_4 ? var_11 : ((5356870653854650074 ? var_10 : var_0)))))));
    var_18 -= ((var_4 >> ((var_0 & (~var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= (max((!195), 1686358312427349199));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((arr_12 [4] [3] [i_2] [i_0] [i_0]) <= (arr_11 [i_0] [i_1] [4] [3]))))));
                                arr_14 [i_0] [i_4] [i_2] [i_0] = (799405268346169907 != 1233891794);
                                arr_15 [i_0] [i_2] [i_2] [i_2] [i_2] [2] &= (arr_2 [3] [3]);
                                arr_16 [i_1] [i_4] [3] = -1233891795;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
