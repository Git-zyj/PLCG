/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_0 [i_0]);
        var_19 = ((((-((var_11 ? 0 : var_17)))) > ((-(arr_1 [i_0 + 1])))));
        var_20 = ((-(((0 == ((0 ? -32757 : 8176)))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = var_11;
        var_22 = ((11 ? (max((var_3 <= var_0), var_13)) : (arr_3 [5] [i_1])));
        var_23 = ((7 ? 248 : 1099511103488));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_24 = (~21785);

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_25 &= var_4;
            var_26 = arr_9 [i_2] [i_2] [i_3];
            var_27 = (max(((((((arr_10 [i_3] [i_3]) || var_10)) && (((7154 ? var_15 : var_8)))))), (max(252, 1))));
        }
        var_28 = (min((((+(((arr_10 [i_2] [1]) - var_2))))), (min(var_13, 0))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_29 = ((-(arr_2 [19] [i_6])));
                    var_30 = (((arr_5 [i_5]) ? 127 : (arr_9 [i_4] [i_5] [i_6])));
                    var_31 = (((var_17 ? 6 : var_6)));
                    var_32 = var_10;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    var_33 = 234;
                    var_34 = (!var_14);
                    var_35 = (((arr_20 [i_4] [i_7 - 1] [i_7 - 1]) & (arr_16 [i_4] [i_4] [i_4] [i_8])));
                    var_36 = (5867771876288390922 && 1);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    {
                        var_37 = (max(var_37, ((((arr_18 [i_4] [i_9 + 1] [2]) + 1)))));
                        var_38 = 127;
                        var_39 = (((((arr_29 [i_4] [i_9 - 1] [i_10]) ? 13 : (arr_35 [i_11] [i_4] [i_4] [i_4] [i_11 + 2]))) - (var_2 >= var_3)));
                    }
                }
            }
        }
    }
    var_40 = ((((max(((var_13 ? 59328 : var_6)), var_11))) ? (min(-7147, (var_4 - var_13))) : ((((((var_13 ? var_15 : 248)) == var_17))))));
    #pragma endscop
}
