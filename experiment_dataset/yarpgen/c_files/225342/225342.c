/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_2 + 3] [12] = ((((!(arr_5 [i_3 - 4] [i_2 - 1] [i_1 + 1]))) ? (arr_1 [i_1]) : var_5));
                        var_17 = (arr_8 [i_1] [i_2] [i_3]);
                        var_18 = 4630972245939023584;
                        arr_12 [i_0] [i_1 - 1] [i_2 - 1] = max(149, 16384);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_19 = (arr_10 [7] [i_0] [7] [7] [i_0] [i_0]);
            var_20 = (max(var_20, (arr_4 [12])));
            var_21 = 1886247094;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_22 = (min(((var_5 ? (arr_14 [i_5]) : var_10)), (((((((arr_6 [4]) | var_1))) ? ((max((arr_6 [i_0]), var_5))) : (arr_16 [i_5] [8]))))));
            var_23 = (arr_0 [i_0]);
            var_24 = var_10;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] = ((((min((arr_5 [8] [i_0] [i_6]), (arr_0 [i_6])))) ^ (min(((-99 ? 1886247094 : var_12)), ((var_12 ? (arr_17 [0]) : (arr_9 [i_0] [i_0] [i_6] [i_0])))))));
            var_25 = (((var_2 / (arr_16 [6] [i_6]))));
            var_26 = (((((arr_21 [i_0] [i_0] [i_6]) > 0)) ? (1 + -36) : (((!(arr_14 [i_0]))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_27 = (((arr_18 [i_7]) << (var_2 - 11044363553176381748)));
            arr_26 [i_0] [i_0] [i_7] = (arr_7 [8] [i_7] [i_7]);
        }
        var_28 = ((!((max(var_6, (min((arr_14 [14]), var_12)))))));
        var_29 &= (arr_6 [4]);
    }
    #pragma endscop
}
