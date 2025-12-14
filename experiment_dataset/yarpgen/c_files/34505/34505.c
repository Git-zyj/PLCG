/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max((min((arr_4 [i_1 + 1] [i_1] [i_0]), 4728820113418589319)), (!var_4)));
                var_13 = ((~((~((4087272773 ? 0 : -6745765218112582928))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_14 = (arr_6 [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_15 = ((-(((arr_12 [i_2] [i_5 - 1]) / -4728820113418589320))));
                                var_16 -= -7165944387101101972;
                                var_17 *= (min(((max(((-(arr_16 [i_2] [i_3] [i_4] [i_2]))), 25286))), (max((arr_0 [i_2]), (arr_17 [i_2] [i_5 + 1] [i_4] [i_5] [i_6])))));
                            }
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                var_18 = 1566675448046044818;
                                arr_21 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = (((-(arr_11 [i_2] [i_3] [i_5 - 1] [i_2]))));
                                arr_22 [i_2] [i_5] [i_5] [i_5] [i_3] [i_2] = ((-(!33)));
                            }
                            var_19 *= ((((-(arr_13 [i_5 - 1])))) ? (((min((arr_13 [i_5 - 1]), (arr_13 [i_5 - 1]))))) : ((-(arr_2 [i_5 + 1]))));
                            arr_23 [i_5] = (var_9 ? (((~((-4728820113418589337 | (arr_5 [i_3])))))) : (max(((var_4 ? 25286 : (arr_6 [i_2]))), (((-(arr_5 [i_2])))))));
                        }
                    }
                }
                var_20 = (-1729324870 | 0);

                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_21 = ((~(max((arr_24 [i_2] [i_3] [i_8 + 1] [i_3]), -1729324876))));
                                arr_33 [i_2] [i_3] [i_8] [i_9] [i_10] |= (arr_6 [i_9]);
                            }
                        }
                    }
                    arr_34 [i_2] = ((~((((arr_30 [i_2] [i_3] [i_8] [i_8] [i_8 + 3]) > ((126 & (arr_30 [i_2] [i_2] [i_3] [i_8] [i_8 + 1]))))))));
                    arr_35 [i_2] [i_3] [i_8 + 2] = ((-(((((-(arr_9 [i_3] [i_8])))) * (arr_31 [i_8 - 2])))));
                }
                arr_36 [i_2] = 7040131279481662689;
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
