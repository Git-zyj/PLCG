/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_17 = (((arr_0 [i_0]) ? (887387642 != -6143480105220665579) : (arr_4 [i_0] [i_3])));
                        arr_9 [i_2] [i_0] [i_2] = ((var_4 & (arr_7 [i_2] [i_1] [i_1] [i_0])));
                        var_18 = (max(var_18, (arr_7 [1] [i_2] [i_1] [1])));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [5] [i_1] [i_0] = ((~((-(max(1, 4294967295))))));
                        var_19 = var_6;
                    }
                    var_20 = (max(var_20, ((((arr_10 [i_0] [7] [8]) - ((var_7 ? var_9 : (arr_2 [i_0]))))))));
                    var_21 = (max(var_21, (((~(((var_1 != ((((arr_6 [i_0] [1] [13] [i_2]) ? -111 : var_14)))))))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((var_13 ? (max((~var_1), (-6143480105220665592 % var_1))) : (((+((max((arr_8 [3] [i_1] [i_1] [i_2] [i_2] [i_2]), (arr_10 [10] [10] [i_0])))))))));
                }
            }
        }
    }
    var_22 = ((((var_15 ? ((max(-30280, var_0))) : var_14)) * (((((max(var_3, 447416502))) || var_6)))));
    var_23 = var_2;
    #pragma endscop
}
