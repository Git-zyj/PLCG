/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_4, 51);
    var_16 += max(23303, -52);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] &= (max((min(-52, 4411344967159400233)), ((((~(arr_4 [i_1] [i_1]))) * (var_11 == -2438576368405296354)))));
                            arr_11 [i_0 - 1] [i_0] [i_0] = (min((!var_10), 45));
                        }
                    }
                }
                var_17 = (!-var_13);
                var_18 = ((-(((!((min(37, -2438576368405296354))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_19 = (((~-36) + ((-(((var_8 || (arr_4 [i_0] [i_1]))))))));
                            var_20 = (((((min(var_2, 70)))) / (max((4411344967159400208 * var_8), var_3))));
                            var_21 = (min(((min(var_3, var_6))), (((arr_4 [i_0] [i_4 + 1]) | var_13))));
                        }
                    }
                }
                var_22 += ((~((((max((arr_8 [i_1] [i_1] [i_1]), var_13)) > (((-(arr_2 [i_0] [i_0])))))))));
            }
        }
    }
    var_23 = (~-6498405944339062502);
    var_24 = (max(var_24, (((var_9 / (min((var_12 / var_14), -var_3)))))));
    #pragma endscop
}
