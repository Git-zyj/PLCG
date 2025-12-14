/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] = -7015317495166476380;

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_11 = (min(((((arr_2 [i_0 + 1] [i_0 + 1] [i_3 + 1]) && (arr_4 [i_0 + 2] [i_3 - 1] [i_3])))), var_5));
                        arr_10 [i_0] [i_0 + 1] [i_0] [12] &= (arr_9 [i_0 + 1] [2] [i_3 + 1]);
                        var_12 += ((((((arr_6 [i_3] [i_3 - 1] [i_2] [i_0 + 3]) - var_2))) ? (((~(arr_3 [i_0 + 2] [i_3 + 2])))) : var_7));
                    }
                    var_13 *= ((((max(-var_1, (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 3])))) ? (max(((1221947136 ? 613840874029249734 : 623597716)), (var_2 + 17832903199680301882))) : var_5));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_5] = (((((613840874029249734 ? ((((arr_2 [i_5] [i_4] [i_0]) / (arr_14 [i_0] [i_0] [i_1] [i_0] [i_1] [i_4])))) : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))) ? (min((max(15, var_6)), ((max((arr_3 [i_1] [i_0]), -27))))) : ((min(766315072, ((((arr_6 [i_0] [i_1] [i_4] [i_0]) >= 4910396561545923749))))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] = (((((arr_9 [i_5] [i_0] [i_0 - 2]) != (arr_9 [i_0 - 1] [i_0] [i_5]))) && (arr_14 [i_0] [i_0] [i_4] [i_0] [i_5] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_14 = 9289289737076007743;
                        arr_21 [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 3] [i_1] [i_0] = (!2338903183);
                        var_15 *= 1990132201;
                    }
                    arr_22 [i_0] [i_0] [i_0] = 1993366807;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_16 = (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_14 [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 2] [i_0 - 1] [i_7])));
                    arr_25 [i_0] [i_7] = (3528652224 && 1281081352);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0 + 2]) ? 71 : (arr_1 [i_0 - 2])));
                    var_17 = (var_6 + var_9);
                    arr_29 [i_8] [i_0] [i_1] = (arr_18 [i_0 + 3] [i_0] [i_0] [i_0]);
                }
                arr_30 [i_0] = (arr_0 [i_1] [i_1]);
            }
        }
    }
    var_18 ^= ((((var_8 < (~var_4)))));
    #pragma endscop
}
