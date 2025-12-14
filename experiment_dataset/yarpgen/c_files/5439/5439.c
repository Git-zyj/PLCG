/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((((~var_15) < var_4))) + var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((3491438662 && ((min((183 - 61192), (var_6 - var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = ((var_15 != (((min(var_6, 803528629))))));
                            var_19 = (((max((arr_6 [i_1] [i_1 - 1]), var_9)) | var_7));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_20 = (min(var_20, 16871183755966321973));
                    var_21 = (min(var_21, ((max(((max((min(55834, var_2)), -1))), ((max(1128484035, 65518))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_22 = 1750691444;
                                var_23 = ((min(1750691463, (arr_5 [i_1 - 1] [i_1 - 1]))));
                            }
                        }
                    }
                    var_24 = (min(var_24, var_3));
                }
            }
        }
    }
    #pragma endscop
}
