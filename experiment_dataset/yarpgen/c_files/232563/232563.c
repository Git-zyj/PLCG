/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((3811367248 / 2852011478344870169), 3008447410253734606));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((((arr_3 [i_0] [7]) ? var_9 : ((min(-26650, var_7)))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_12 += (((26661 ? 1 : -26650)));
                                var_13 = (max(var_13, var_3));
                                arr_14 [i_1] [i_1 + 3] [1] [i_1] [i_1] [i_1] [5] = ((~(((!((min(15868, -26650))))))));
                                arr_15 [1] [i_3] [i_1] [1] [i_1] [i_0] [1] = 1;
                            }
                            var_14 = (max(var_14, (((min((min(var_0, -32), ((max(1, var_9))))))))));
                            arr_16 [i_0 + 3] [1] [i_0] [i_0] [i_0] = (-122 != 1);
                        }
                    }
                }
                var_15 = (!134);
            }
        }
    }
    #pragma endscop
}
