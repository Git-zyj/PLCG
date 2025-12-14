/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (((var_3 - (arr_3 [i_0] [19]))));
                var_12 ^= (((((!(arr_4 [i_0])))) != 1));
                arr_7 [i_1] [19] = (97 - 226);

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_13 ^= ((-(max((arr_5 [i_0] [i_1] [3]), ((128 ? var_5 : var_6))))));
                    var_14 ^= 93;
                    arr_12 [19] [i_2] [i_0] = ((((-(226 >= var_0))) != (((!((((arr_0 [8]) & -113))))))));
                    var_15 = (arr_6 [i_2]);
                }
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, (arr_13 [1] [i_1] [13])));
                                var_17 = (max(var_17, ((min(((~(var_8 / 6))), var_8)))));
                                arr_22 [i_0] [i_1] [i_4] [19] [3] [i_0] [i_5] = (var_8 >= var_2);
                            }
                        }
                    }
                    arr_23 [9] [9] [i_1] [21] &= (--158);
                    arr_24 [i_0] [i_0] [i_0] = max((arr_10 [6] [6] [i_1] [i_3]), 192);
                }
                arr_25 [i_1] = (!128);
            }
        }
    }
    var_18 &= (~var_6);
    #pragma endscop
}
