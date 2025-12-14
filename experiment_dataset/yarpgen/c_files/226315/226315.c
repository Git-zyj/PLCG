/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                var_16 = ((43 ? 524287 : 35724));
                arr_9 [i_0 + 1] [i_1] [i_0 + 1] = (15374 <= 23);
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_0] = 210;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_17 = (1 != 18306);
                            var_18 |= 1488204876;
                            var_19 = var_12;
                            var_20 = (524272 >= 12189694105290684387);
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {
                        var_21 = (max(var_21, (-15375 * 12618)));
                        var_22 += var_2;
                    }
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (((160032538 ? 55 : var_5)))));
        var_24 = ((-(!var_4)));
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_25 = (max((((12127 <= (~var_12)))), (max(-121, -524268))));
        var_26 = -40;
        var_27 -= (((~2835870195) ? (min(var_9, 46)) : (~18)));
        var_28 = (min((((((65 ? 0 : 8624272268882520085))) ? ((1 ? 4294443024 : 1)) : 117440512)), ((((1 && 4475) < -1)))));
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                {
                    var_29 -= ((0 && 154) ? ((max((min(1995181297, 1486401864)), (min(4417, var_15))))) : (((var_5 < 95) * var_9)));
                    arr_41 [i_11] = ((33554430 >= ((min((~var_5), (2115098137 <= 15374))))));
                    var_30 += ((-230 ? ((((min(0, 2179869154))) * (max(17614446237392992319, 3734)))) : var_10));
                }
            }
        }
    }
    #pragma endscop
}
