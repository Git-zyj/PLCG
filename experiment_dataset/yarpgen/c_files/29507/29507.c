/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = ((((min((var_16 & 1), (!var_17)))) - 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((~((1479068929 ? (arr_3 [i_0] [i_1] [i_1]) : -693934616))))) ? var_18 : ((((~0) - (var_9 - var_14))))));

                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_3] [i_2 + 3] [i_1] [i_0] [i_1] = ((((arr_9 [i_0] [i_0] [i_2] [i_3]) ? (arr_10 [i_0] [i_2 - 2] [i_2 - 2] [i_3]) : -1479068930)));
                        var_21 = -21281;
                    }
                    var_22 = (min((max(1313186603, (arr_10 [i_2] [i_2 + 3] [i_2] [i_2 + 1]))), ((((arr_8 [i_2 + 1] [i_2 + 1] [i_0] [i_0]) ? (!-111) : var_17)))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, var_17));
                                arr_21 [i_0] [3] [i_0] = (!var_1);
                            }
                        }
                    }
                    arr_22 [i_0] = ((1313186603 - (arr_19 [4] [i_1] [i_1] [i_0] [i_4 + 1])));
                }
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
