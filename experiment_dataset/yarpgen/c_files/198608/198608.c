/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (((((-249599643 ? var_8 : (arr_8 [i_2] [i_1] [i_3])))) ? (arr_8 [6] [i_2] [i_1]) : (arr_8 [i_0] [i_2] [i_3])));
                        var_15 = (((460281801037625660 ? (arr_7 [i_2]) : (arr_2 [i_2] [i_2] [7]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_16 = (arr_8 [i_0] [15] [i_0]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_4] [i_1]) >> (-460281801037625661 + 460281801037625663)));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        arr_16 [i_2] [6] [i_2] [i_5] [i_2] [i_1] = ((!(arr_12 [i_5 + 1] [i_5 + 1] [i_1] [i_0] [i_5] [i_0])));
                        var_17 = (arr_15 [i_0] [i_0] [i_2] [i_2] [21]);
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        arr_21 [i_0] [i_6] [i_0] = ((((!(arr_6 [i_2] [i_1] [i_2])))));
                        arr_22 [i_6] [i_6] = (min((((18446744073709551615 ? ((min((arr_14 [i_0] [i_0]), (arr_5 [i_0] [i_0])))) : ((max((arr_15 [i_0] [i_1] [i_1] [i_6] [i_1]), (arr_12 [19] [i_1] [i_1] [i_2] [i_2] [i_6]))))))), (max(-249599643, (max((arr_19 [i_0] [1] [i_0] [i_0]), 14887411021538807027))))));
                        var_18 = (((((arr_1 [i_1] [i_1]) ? 460281801037625660 : (arr_1 [i_1] [i_2]))) >= ((((5087276180676515979 != (arr_1 [i_0] [i_1])))))));
                    }
                    arr_23 [i_2] [i_2] [i_1] [i_0] = (arr_0 [i_0]);
                }
            }
        }
    }
    var_19 = (~var_8);
    #pragma endscop
}
