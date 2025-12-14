/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1 - 1] [i_0] [i_0] = (arr_1 [i_1]);
                arr_5 [i_0] [i_1 + 4] = ((((((arr_3 [i_0] [i_1 + 4]) ? (arr_3 [i_0] [i_1 + 4]) : (arr_3 [i_0] [i_1 + 3])))) < (arr_2 [i_0] [i_0] [i_1])));
                arr_6 [i_1] [i_0] [i_0] = 65535;
                arr_7 [i_1] = (((-(((arr_0 [11]) + var_10)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_2] = 1855608251;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_15 = (((~var_14) ? (((arr_10 [i_4] [i_5]) ? (arr_10 [i_4] [i_4]) : (arr_11 [i_2] [i_3] [i_4]))) : ((((arr_13 [i_4]) ? 5721 : ((max((arr_1 [16]), 1))))))));
                            arr_21 [i_2] [i_2] [i_4] [i_5] [i_4] [i_3] = ((-(arr_12 [i_2] [i_2])));
                        }
                    }
                }
                arr_22 [0] [0] [i_2] = ((+(((((min((arr_14 [i_2] [i_3]), 5721))) || ((!(arr_0 [i_2]))))))));

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_16 = (((((5721 ? ((((arr_10 [i_2] [i_6]) ? 5721 : (arr_13 [i_2])))) : var_7))) ? ((+((468628574 ? (arr_19 [i_2] [i_3] [i_6] [i_3]) : var_4)))) : ((((min((arr_20 [i_3] [i_3] [i_3] [i_3]), (arr_13 [8]))))))));
                    arr_25 [i_2] [i_2] [i_2] [i_2] = var_5;
                    arr_26 [i_2] [i_3] [i_6] = (((((min((arr_19 [i_2] [i_3] [i_6] [i_6]), 18228836066656530881)) & (arr_11 [i_2] [i_6] [i_2]))) | (min(15919247366107482415, (arr_13 [i_2])))));
                }
                var_17 = ((-(((-5721 | (arr_16 [i_2] [i_2] [i_2] [i_2]))))));
            }
        }
    }
    var_18 = 3;
    var_19 = (-(~-230725556));
    var_20 = var_8;
    #pragma endscop
}
