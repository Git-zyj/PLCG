/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = var_8;
        var_13 = 6917035560171357291;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_14 = (min(var_14, var_5));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_15 = (max(var_15, -2977403297210519341));
                        arr_15 [i_1] [i_1] [i_1] [i_4] = ((-(min(-var_6, (arr_0 [i_1] [i_1])))));
                        var_16 *= (max(var_2, (min((arr_14 [i_2 + 1] [i_2 - 1] [i_3] [i_3 - 4]), 53))));
                        var_17 = ((+(max((arr_7 [i_4]), (14309549078288528528 & 0)))));
                    }
                }
            }
        }
        arr_16 [i_1] = (max((!139), ((-(arr_7 [i_1])))));
        var_18 = ((~(max((arr_8 [i_1]), (arr_8 [i_1])))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_19 = (((((-(!202)))) ? (((!(arr_0 [i_5] [i_5])))) : ((max(24, (63 == -735065652))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_20 *= (((-9223372036854775807 - 1) ? 820356677021736994 : 79));
                    var_21 = (max(var_21, 1586365716));
                    var_22 = (max(((max(30, -28114))), ((-(arr_22 [i_5] [i_6 - 1] [i_7])))));
                }
            }
        }
    }
    var_23 = (min(var_23, var_7));
    var_24 = var_8;
    #pragma endscop
}
