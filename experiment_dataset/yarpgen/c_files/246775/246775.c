/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_19 = ((!(-3868044699679695271 / -5298)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 *= ((((var_2 / ((var_13 ? var_6 : var_14))))) ? ((5 + (((arr_1 [i_3] [i_1]) + var_4)))) : (((((2147483647 ? -749096673049849219 : -125)) / var_0))));
                                var_21 = (min(var_21, (((var_8 ? var_8 : var_11)))));
                                var_22 = ((max(2147483647, (min(4507584407167428892, 2912812779)))));
                                var_23 += (~var_3);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_24 = ((var_6 < var_11) ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1] [i_5] [i_0 - 2] [i_1]));
                    var_25 ^= (!var_17);
                }
                var_26 = arr_6 [i_1] [i_1] [i_0 - 2] [i_0];
                var_27 = ((-((2962456328 << ((((var_12 << (var_8 + 8523212637669957408))) - 3623878654))))));
            }
        }
    }
    var_28 = 63;
    var_29 = (max(var_29, (((-3680986964 == (var_5 | var_12))))));
    #pragma endscop
}
