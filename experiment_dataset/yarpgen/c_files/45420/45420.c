/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_16 = (arr_2 [i_0]);
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (arr_4 [i_0]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_17 += ((((arr_4 [i_3]) ? 0 : (arr_9 [i_3]))) - 228);
                        var_18 -= (((((252 ? 226 : 3397395477))) ? 1043177542 : -4600639206106095170));
                        var_19 = (min(var_19, (~240)));
                        var_20 = ((26 ? (~1) : (arr_2 [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_0] = (arr_10 [i_4] [i_1] [i_2 - 1] [i_4]);
                        arr_15 [i_0] [i_1] [2] [i_4] = 240;
                    }
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_21 = var_11;
                    var_22 = (i_0 % 2 == 0) ? ((((((~10) ? (max(796852041, (arr_5 [i_0] [i_1] [i_5] [i_0]))) : ((((arr_11 [i_0] [i_1 - 2] [i_5] [i_1]) / 29639))))) >> (((arr_8 [i_0]) + 25505))))) : ((((((~10) ? (max(796852041, (arr_5 [i_0] [i_1] [i_5] [i_0]))) : ((((arr_11 [i_0] [i_1 - 2] [i_5] [i_1]) / 29639))))) >> (((((arr_8 [i_0]) + 25505)) + 377)))));
                    var_23 = (((((arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) ? (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) : (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]))) - (((arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) + (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = (arr_17 [i_0]);
                    var_24 = var_12;
                }
                arr_22 [i_0] [i_0] [i_0] = ((!(arr_6 [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_25 = var_0;
    #pragma endscop
}
