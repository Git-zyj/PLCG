/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] = ((min(var_17, (21092 / var_11))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 = (arr_7 [i_0] [i_0] [i_0 - 3] [i_0 + 1]);
                    var_19 = 5815711587402879779;
                    arr_9 [i_0] [i_0] [12] [i_2] = ((31518 > (((!(-2147483647 - 1))))));
                }
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0 + 1] [i_0] = var_4;
                        var_20 = (max(var_20, (((arr_8 [i_3 + 1] [i_3 - 2] [i_0 - 1]) ? (((!(arr_7 [i_0] [i_1] [i_3] [i_3])))) : (((max((arr_12 [i_0] [i_1] [i_3]), (arr_8 [i_4] [i_3] [i_1])))))))));
                    }

                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0] &= 1;
                        arr_18 [1] [1] [i_3] [i_3 + 2] [i_5] [i_5 + 1] = ((((min(3337, ((min((arr_8 [i_0] [i_1] [i_5]), (arr_10 [i_1] [i_1] [i_1] [i_1]))))))) ? (arr_12 [i_3 + 1] [i_3] [i_5 - 1]) : (((arr_8 [i_3 + 4] [i_3 + 4] [i_3 - 3]) / (arr_8 [i_3 + 4] [i_3 + 4] [i_3 - 3])))));
                        arr_19 [i_0] [3] [i_3] [i_5] = (((((max((arr_8 [i_0 - 3] [i_0 - 3] [13]), (arr_8 [i_0 - 3] [i_0 - 3] [i_5]))) + 2147483647)) << (var_6 - 3881840733)));
                        var_21 = ((min((var_3 != var_9), (arr_3 [i_3] [i_1]))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = (arr_10 [i_3] [i_3] [i_3] [i_3]);
                        var_22 -= var_7;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_26 [i_0] [i_7] [i_0] [i_7] = -1;
                        var_23 = (arr_12 [i_0] [i_3 + 4] [i_0 + 1]);
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_24 = (min((arr_25 [i_8]), 17091720889617616594));
                    arr_31 [i_0 - 2] [i_0] = -27764;
                    arr_32 [i_0 - 1] [i_0 - 1] [i_8] = ((((~(arr_8 [i_0] [i_1] [i_8]))) < (arr_7 [i_0 - 1] [i_1] [i_8] [i_8])));
                }
                arr_33 [11] [0] |= (var_16 <= -4345);
            }
        }
    }
    var_25 = var_12;
    #pragma endscop
}
