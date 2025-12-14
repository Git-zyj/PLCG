/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [6] [i_0] [i_1] [i_1] [14] = ((~(min((min(var_4, var_8)), ((min(var_5, var_2)))))));
                        arr_13 [i_0] [i_1] [i_2] = (min(var_9, ((min(7726724839965382255, 84)))));
                    }
                }
            }
        }
        var_10 = (min(var_10, ((max(var_3, ((~(min(var_4, var_4)))))))));
        arr_14 [18] = (min(((max(var_4, var_9))), (!var_5)));
        var_11 ^= ((min(-var_1, var_7)));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_17 [18] [i_4] = var_3;
        var_12 = (min((min(var_2, var_1)), ((min(((min(var_2, var_7))), (~var_7))))));
        var_13 = ((~((max(84, -84)))));
    }
    var_14 &= (~var_1);
    var_15 = (min(((max(var_9, 8549432013388906516))), (!-var_5)));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_22 [i_5] = (!var_5);

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_16 -= var_7;
            arr_26 [13] [i_6] = -var_5;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_31 [1] [i_7] = var_4;
            arr_32 [i_5] [i_7] = var_6;
            arr_33 [i_5] [7] [i_7] = ((!(~var_4)));
            var_17 -= var_1;
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 4; i_9 < 23;i_9 += 1)
            {
                var_18 = (~var_6);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_46 [i_8] [i_10] &= var_0;
                            var_19 -= ((!(~var_6)));
                            var_20 = (max(var_20, var_8));
                        }
                    }
                }
            }
            arr_47 [i_5] [7] = -var_3;
        }
        var_21 = (min(var_21, var_2));
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_56 [4] &= (max(var_8, (min((max(var_1, var_6)), (min(var_8, var_0))))));
                        arr_57 [0] &= var_1;
                        arr_58 [i_14] [5] = var_1;
                        var_22 = (max(var_22, (((!((max(-var_1, var_2))))))));
                        var_23 = var_5;
                    }
                }
            }
        }
        arr_59 [1] = var_4;
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {

        for (int i_17 = 1; i_17 < 11;i_17 += 1)
        {
            arr_64 [i_16] [12] [1] = var_9;
            var_24 = (max(var_24, ((max(var_7, (max((min(var_2, var_2)), ((min(var_0, var_6))))))))));
        }
        for (int i_18 = 2; i_18 < 13;i_18 += 1)
        {
            arr_67 [i_16] = (min(2484467525510717231, 8549432013388906517));
            var_25 -= (max(var_6, -var_8));
        }
        var_26 *= max(32759, 8549432013388906516);
    }
    #pragma endscop
}
