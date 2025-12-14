/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_2] = (((-(!65535))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = 153308459382309851;
                                var_15 -= (((((arr_9 [i_4] [i_2] [i_2] [i_1] [i_0]) % (arr_14 [i_0] [i_2] [i_2] [i_3] [i_1]))) < (arr_1 [i_4])));
                                arr_15 [i_0] [i_2] = ((((~(arr_5 [i_2]))) / (arr_5 [i_2])));
                                arr_16 [i_4] [i_2] [i_2] [i_2] [i_0] = (((~(arr_1 [i_1]))));
                                arr_17 [i_4] [i_3] [i_2] [i_2] [18] [i_0] = ((~((-(~255)))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_2] [i_2] = ((~(((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_16 = ((((-(((arr_0 [i_0]) ? (arr_8 [5] [17] [i_1] [i_2]) : 13816630433499709287)))) % ((((arr_2 [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_1]) : (max((arr_1 [i_2]), (arr_6 [i_2] [i_2] [i_1] [i_0]))))))));
                }
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
