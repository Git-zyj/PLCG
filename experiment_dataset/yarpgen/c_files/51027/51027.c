/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = 1121705510;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = ((max(1, (arr_6 [i_2] [i_1] [4] [i_2] [i_3]))) << (((62833 ? 1 : 62818))));
                            var_20 = (min((((!(12639113757944132453 || 1)))), 9));
                            var_21 = (arr_5 [i_0] [i_2]);
                            var_22 = ((!((((arr_4 [i_0] [i_3 - 2] [i_3 - 2] [5]) ^ (min((arr_1 [1]), (arr_2 [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((max(1651900915, var_11))) ? (~553067706) : (((min(var_15, 879430230))))));
    #pragma endscop
}
