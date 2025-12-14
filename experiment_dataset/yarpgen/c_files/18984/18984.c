/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 ? var_13 : var_5));
    var_17 = ((~(var_12 - var_13)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((((+(((arr_1 [i_0] [i_0]) - 313371105)))) <= 180));
        var_19 = (max(var_19, (-1782218886 % -182)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (~1)));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] = (((((((!(arr_13 [i_1 - 2]))))) > (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_2]) : var_7)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_20 [i_4] = 8191;
            var_21 = (min(var_21, (arr_2 [i_5])));
            var_22 *= (((var_1 ? var_10 : 9113815945982311354)));
        }
        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_23 = (((((arr_8 [i_4] [i_6]) ? var_3 : 182)) == ((((arr_22 [i_6] [i_6]) == var_0)))));
            var_24 = (max(var_24, var_2));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_25 &= (((((arr_26 [i_7]) % (arr_16 [i_4] [i_9]))) ^ 1));
                            var_26 = var_10;
                            var_27 = (min(var_27, (!var_3)));
                        }
                    }
                }
            }
            var_28 = (!8191);
        }
        var_29 = var_15;
    }
    #pragma endscop
}
