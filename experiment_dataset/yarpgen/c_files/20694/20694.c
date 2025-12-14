/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((max(((max((arr_2 [i_0] [i_0]), -110))), (max(1386652299, 20778)))), var_11));
        arr_4 [6] = ((((max((arr_2 [i_0 + 1] [i_0 + 1]), var_9))) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (((arr_2 [i_0 + 2] [i_0 + 2]) ? -51 : (arr_2 [i_0 + 2] [i_0 - 1])))));
    }
    var_19 = (min(var_19, (((((min((max(-51, var_18)), var_5))) >= 40739)))));
    var_20 = (8412143895883628405 / var_6);
    var_21 = (max(var_21, (((((max(var_8, var_15))) ? var_9 : ((-(min(-8412143895883628405, 230877964679380784)))))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_2] |= (arr_9 [i_2]);
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [16] [9] [9] [1] [i_2] [i_1] = (((max((arr_6 [i_4]), (((arr_13 [i_1] [13] [19] [11] [i_1] [15]) & var_7)))) << (((arr_5 [19]) - 5757))));
                                arr_18 [i_5] [1] [6] [i_2] [i_1] = (((arr_12 [i_5]) * ((((((min((arr_6 [i_2]), (arr_6 [i_4])))) && 3021354060600400662))))));
                                arr_19 [0] [i_2] [i_2] [i_2] [i_2] = (max(230877964679380784, ((max((arr_6 [i_2]), (arr_16 [i_3] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
