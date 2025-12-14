/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 &= (((arr_3 [17] [i_1] [1]) ? 1 : ((min(-18018, (arr_3 [i_0] [i_1] [i_2]))))));
                    var_17 &= (min((arr_5 [i_1] [i_1] [i_1] [i_1]), (((arr_1 [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = 1;
                                var_19 = ((arr_0 [i_1] [i_4 + 1]) ? (((-(arr_8 [i_0])))) : (~4294967295));
                                var_20 = ((878065958 ? 55 : ((-var_12 / (((arr_4 [i_0] [i_0] [i_0]) * 1633564156))))));
                                var_21 = ((~(((!var_10) % (max((arr_9 [i_4] [i_3] [i_0] [5] [i_0]), 4294967278))))));
                            }
                        }
                    }
                    var_22 = ((-((~(((arr_9 [i_0] [i_0] [i_1] [i_1] [1]) ? 1 : (arr_2 [i_2])))))));
                }
            }
        }
    }
    var_23 = -18018;
    #pragma endscop
}
