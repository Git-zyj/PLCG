/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((8954 ? var_7 : ((8965 ? 1987775271 : 56574)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_15 = 8938;
                                var_16 = (max(var_16, (arr_6 [i_0] [i_0] [i_0] [i_0])));
                                var_17 -= (max(((var_1 ? (~-1073741824) : (((arr_2 [i_0]) | 2939205321)))), ((1265082525 * (56586 / var_10)))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] [i_3] = (var_5 <= var_2);
                            }
                            var_18 = (max(var_18, 3029884791));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_5] |= ((((var_6 ? (arr_0 [i_0]) : var_4)) + ((var_13 ? (arr_0 [i_0]) : (arr_8 [i_0] [i_1] [i_5])))));
                            var_19 = (32410 > 8941);
                            var_20 = (max(var_20, ((max((((((2939205337 ? 1 : var_8))) ? var_3 : var_13)), ((max(2307192024, -1063964478))))))));
                            var_21 = (((((56581 ? (!var_10) : (arr_15 [i_5] [i_1] [i_1] [i_6])))) ? ((((max(var_12, 1)) ^ 2939205362))) : (max(-var_4, var_11))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
