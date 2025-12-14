/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_14 ? ((max(var_6, var_14))) : (255 * var_8)))) < var_5));
    var_18 = ((((max((var_1 * var_11), var_1))) ? (!8) : (~244)));
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1 - 1] [i_2] [i_3] [i_1] = -71223575;
                                var_20 = (min(var_20, (!242)));
                                var_21 = (((var_9 ? -6 : (min(var_1, (arr_2 [i_0] [i_4]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] [i_2] [i_2] &= (arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_22 = ((2009686281 ? ((max(1, var_16))) : (1 * 237)));
                                var_23 = 9;
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] = (min((min((1 > 24181), 15)), ((max(1, 1)))));
                                arr_20 [i_1] = arr_16 [i_6] [i_1] [i_1] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
