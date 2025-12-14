/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((((((max((arr_5 [i_0] [i_1] [i_2 + 2] [i_1]), (arr_2 [16] [16] [i_1]))) ^ (arr_4 [i_2 - 3])))) ? var_1 : var_3));
                    arr_7 [i_0] = -1202498704;
                    var_17 = (((arr_5 [i_2] [i_2] [i_2 - 2] [i_2 - 1]) <= (arr_5 [i_2] [i_2] [i_2 - 4] [i_2 - 4])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (max((((~var_10) + (min(1202498704, 2147483637)))), ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))))));
                                var_19 = (max(var_5, (max((max(var_14, (arr_10 [i_0] [i_1] [i_2] [1] [0]))), (((-(arr_4 [5]))))))));
                                var_20 *= (min((min((127 ^ var_0), (((3092468598 == (arr_2 [i_0] [i_0] [i_0])))))), ((((arr_9 [i_1] [i_2] [i_3] [i_4]) ? (arr_9 [i_0] [i_1] [i_3] [i_4 + 2]) : (arr_9 [i_0] [i_2 - 2] [i_3] [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 7769392645703927665;
    #pragma endscop
}
