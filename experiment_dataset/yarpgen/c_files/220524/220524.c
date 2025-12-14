/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_16 ^= ((min(44638, var_11)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [i_1] [i_2] = (57 | var_3);
                var_17 = var_13;
                var_18 = ((var_2 ? var_12 : var_12));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 ^= ((((min(75, ((1 ? -77 : 10771324715543233921))))) ? var_6 : (~var_14)));
                        var_20 = min((((var_6 >> var_7) < var_1)), (var_12 <= var_15));
                    }
                }
            }
        }
        var_21 -= ((((max((0 * var_13), var_8))) || (((min(var_10, var_11))))));
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_22 -= ((var_9 ? 13 : (max(var_10, (~var_2)))));
                        var_23 = 2909400429773372991;

                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_24 ^= (max((max(-59, var_1)), var_6));
                            var_25 = (min(var_25, (((max(var_1, -6600374664900115352))))));
                            arr_27 [i_5] [i_6 + 3] [i_7] [i_9] [i_6] = ((((max(8796800390130316941, -5589014277398193559))) ? (((65 - var_14) - var_0)) : (!var_11)));
                        }
                    }
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        var_26 -= ((var_4 == (((-((max(0, 0))))))));
                        var_27 ^= var_7;
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        var_28 -= (var_9 && -7237840274830346072);
                        arr_33 [i_5] [i_7] = -1076897918;
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_29 = (((253 >= 1) - (1 == 7955420409013534496)));
                        var_30 = 10491323664696017110;
                        var_31 ^= (~var_15);
                    }
                    var_32 = (((((((min(var_3, var_13))) || (!var_0)))) < (23639 <= var_1)));
                }
            }
        }
        var_33 -= 3;
        arr_38 [i_5] [i_5] = var_14;
    }
    var_34 = (max((!-517147154), ((!((max(var_2, -158246731)))))));
    #pragma endscop
}
