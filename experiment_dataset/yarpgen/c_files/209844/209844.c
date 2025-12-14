/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(((0 ? 2 : var_2)), -121)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 |= ((((((-(arr_0 [8] [8])))) - (max((arr_0 [i_2] [i_0]), var_8)))));
                    var_19 = (arr_2 [13]);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (!0);
                        arr_9 [i_2] = (arr_7 [i_0] [i_0] [i_2] [i_3]);
                        arr_10 [i_0] [i_2] [i_2] [i_3] = 288160007407534080;
                        arr_11 [12] [i_2] [i_2] [i_2] [i_0] = ((-((65515 ? (arr_5 [i_2] [i_1] [i_2] [10]) : (571454409 ^ var_2)))));
                        var_21 = ((((((var_4 ? var_10 : (arr_7 [i_0] [i_0] [i_2] [i_3]))) ^ (((~(arr_5 [i_2] [i_1] [i_1] [i_2])))))) + (((+((max((arr_2 [i_1]), 65535))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
