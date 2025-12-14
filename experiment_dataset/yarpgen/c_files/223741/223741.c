/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_5 != var_5);
        arr_3 [i_0] [i_0] = (min((min((min(var_6, var_10)), (~var_1))), (var_8 >= var_3)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] [i_1] [6] = (((max(((max(var_2, var_5))), var_10)) / (max(var_9, (~var_8)))));
                    var_11 = ((max((~var_5), (min(var_10, var_7)))) >= var_8);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = var_1;
                        var_13 -= (var_4 < var_8);
                        var_14 += ((var_9 ? var_4 : var_9));
                        var_15 += (!var_2);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_16 = (max(var_16, ((max((((var_3 ? var_3 : var_6))), ((max((!var_6), (var_1 < var_1)))))))));
                        var_17 = (max(var_17, (((-var_4 ^ (max(((var_2 ? var_7 : var_1)), var_8)))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_18 += (!-var_4);
                        var_19 = (max((~var_0), var_4));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 7;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_28 [i_8] [i_9] [i_10] [i_10] = (!var_1);
                    var_20 |= ((-var_3 ? (!var_3) : var_6));
                }
            }
        }
    }
    #pragma endscop
}
