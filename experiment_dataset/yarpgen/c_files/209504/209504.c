/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((((119 + 115) && (140 > -18883))) ? var_5 : var_4));
                var_15 = (((3120423588 ? -12 : 137)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = max(((-26203 ? (((-(arr_4 [i_0])))) : (max(5297872204602681626, -1022829941)))), (arr_5 [i_0]));
                    var_17 = ((0 ? ((1022829944 ? 1152921470247108608 : 1)) : 2271855854174356677));
                    arr_7 [i_0] [i_0] [i_0] = (max((((+((var_4 ? (arr_6 [i_0] [i_0] [i_0]) : var_9))))), (max((arr_3 [i_0] [i_0]), 26197))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] [i_0] = ((((((~var_12) ? 4830 : ((var_13 ? var_1 : -6615370928551915750))))) ? ((var_7 * (var_13 < var_4))) : ((min(4331, ((((arr_8 [i_0] [i_1]) && var_10))))))));
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = (((1 ^ 3970442580) ? var_7 : (((var_12 + 19061) ? ((var_4 ? 105 : var_8)) : (((arr_5 [i_0]) + 0))))));
                                var_18 = (((((max(1, 7582))) ? (((var_12 ? 255 : var_12))) : (max(var_8, 7354287456184135368)))) & ((((max((arr_4 [i_0]), -4461523900581024924))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = ((((max((arr_13 [i_0] [i_0]), (arr_13 [i_0] [i_2])))) ? (((arr_1 [i_0] [i_1]) / (~0))) : var_1));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_19 ^= (((((((-26226 ? -20426 : 255) + 2147483647)) << ((((max(1, -26203))) - 1))))));
                                var_20 &= ((((min(28816, var_7))) ? var_5 : (arr_5 [i_0])));
                                var_21 = (max(var_21, ((max(((max((((var_6 ? -54 : var_3))), ((var_11 ? var_6 : var_9))))), (((((1 ? var_8 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_9 [i_0] [i_0]) : ((max(var_4, (arr_10 [i_0] [i_1] [i_1] [i_6] [i_7])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 ^= var_2;
    #pragma endscop
}
