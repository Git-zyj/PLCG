/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (min((min(255, 41)), ((((var_12 + 65535) > ((((arr_2 [i_1]) ? (arr_5 [i_0]) : var_9))))))));
                arr_6 [i_1] [i_0] = (((1 & (min((arr_3 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_10 [i_2] [i_2] [i_1] [i_0] = (arr_7 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_3] [i_3] [i_4] [i_3] [i_1] = (((max((arr_13 [i_1] [i_3]), (arr_12 [i_0] [i_3] [i_3] [i_4]))) << 1));
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] = (((-(~-13953))));
                                var_17 ^= (((((-(arr_8 [i_0] [i_0] [i_0 - 2] [i_0])))) && 0));
                                arr_17 [i_3] [i_3] [i_2] [i_1] [i_1] [i_3] = (min((3134378549947081806 | -1), 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                var_19 += (((-(((arr_20 [i_5]) ? 0 : 1)))));
                var_20 = ((-(arr_21 [i_5] [i_6])));
                arr_22 [i_5] [i_5] [i_5] = 11;
            }
        }
    }
    #pragma endscop
}
