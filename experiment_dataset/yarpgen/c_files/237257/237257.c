/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (((((((max(var_2, 17455))) * -var_9))) / ((max(-102, 4294967275)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (((((~((65533 >> (964367450260093822 - 964367450260093811)))))) ? (((((arr_0 [i_0] [i_4]) > var_1)) ? ((var_6 ? 7 : (arr_0 [15] [i_4]))) : 1)) : ((((((((!(arr_0 [i_0] [16]))))) >= (((arr_0 [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_3] [i_3] [i_4]) : -178542757))))))));
                                var_12 = (((max((arr_8 [i_2] [i_2] [i_3] [i_2] [i_2]), ((max((arr_3 [i_0] [i_0] [i_0]), var_2))))) | (arr_5 [i_0] [i_0])));
                            }
                        }
                    }
                    var_13 = (((arr_3 [i_2 - 1] [i_2 + 1] [i_2 - 1]) && (((arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) && (arr_3 [9] [i_2 - 1] [i_2 + 1])))));
                }
            }
        }
        var_14 = ((((((964367450260093822 > (arr_1 [i_0] [i_0]))) ? (max(var_8, -964367450260093823)) : (~var_3))) ^ ((((-(arr_5 [3] [3]))) ^ (arr_1 [i_0] [0])))));
    }
    var_15 = -var_2;
    #pragma endscop
}
