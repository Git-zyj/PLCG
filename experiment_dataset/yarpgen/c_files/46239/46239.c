/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0] [i_0] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 1] [i_1] [i_3] |= (((min((arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 3]), 16153957405169182209)) + ((min(-var_11, 1)))));
                            arr_11 [i_3] [i_2] [i_1 + 3] [i_0 - 1] = (max((!var_12), var_5));
                            arr_12 [i_0] [i_1] [i_2] = (max((((arr_8 [i_0 - 1]) ? (arr_5 [i_0 - 1] [i_1 - 2] [i_1]) : (arr_2 [i_0 - 1] [i_0 - 1] [i_3]))), ((max((~var_12), (arr_7 [i_0] [i_1] [i_2] [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (((~0) ? (((!var_6) & var_18)) : (!var_10)));
    var_20 = var_11;
    var_21 &= (((((!((min(var_9, 1)))))) - (((!(!var_4))))));
    #pragma endscop
}
