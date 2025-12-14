/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_19 = ((var_7 ? 0 : ((((var_0 != (arr_4 [17] [13] [i_3])))))));
                        var_20 = (0 ^ 29);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_2] = ((0 - (arr_2 [i_0] [i_1] [i_0])));
                        var_21 = (var_3 - 21);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((--2130) ? (max(23, (var_11 / -1249))) : ((max(-27, var_16)))));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_23 = 29;
                            var_24 = (((max((((!(arr_1 [i_1] [i_0])))), (arr_5 [i_1] [i_2 + 3] [i_1])))) && (((var_7 ? ((var_14 ? 0 : 2130)) : (((max(116, var_8))))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_1] [13] [i_7] [i_0] = ((-((((arr_15 [i_0] [i_1] [i_2] [i_7] [i_2 + 4]) != var_8)))));
                        var_25 = (((((((~var_15) + 2147483647)) >> (((arr_6 [i_2 + 4] [i_2 + 1] [i_2 + 1]) + 750979242)))) != (1032597542 + -1190303661)));
                    }
                    arr_21 [i_0] [i_1] [i_2] = var_16;
                }
            }
        }
    }
    var_26 = (max(var_26, (((!(~var_3))))));
    var_27 |= var_17;
    #pragma endscop
}
