/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((3091469386581997331 << (-11141 + 11182)));
        arr_2 [i_0] [i_0] = (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) + 2147483647)) >> (((((arr_1 [i_0]) & (arr_1 [i_0]))) + 12667))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (1 / 15355274687127554259);
        var_21 = ((-(min(((3091469386581997356 << (((arr_4 [i_1]) + 30917)))), -var_4))));
        var_22 = (((((var_6 * ((var_17 ? 3091469386581997381 : (arr_5 [i_1])))))) ? ((((((15355274687127554256 ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1]))) < var_16)))) : ((var_5 >> ((((245 ? 213468600634908304 : (arr_3 [i_1] [i_1]))) - 213468600634908294))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_2] [i_1] &= ((min((arr_5 [i_2]), (arr_5 [i_2]))) & 11683679429556713198);
                    var_23 *= ((7342467523642202283 ? -9 : (arr_5 [i_1])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_1] [i_3] = (((((-2680814396073618684 & (arr_4 [i_1])))) || (arr_4 [i_2])));
                        arr_16 [i_4] = (((27356 & var_17) % (arr_9 [i_3] [i_2] [i_1])));
                        var_24 += (((arr_4 [i_4]) ? (arr_4 [i_1]) : var_5));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5] = (((--17531755299198487016) != (arr_6 [i_5] [i_5])));
        arr_20 [i_5 - 1] = max(var_1, 3644328237);
    }
    var_25 = max(var_8, (((914988774511064599 > var_18) ? 2680814396073618685 : (min(var_15, 501582135)))));
    #pragma endscop
}
