/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((~(~-656452222)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_7, ((+((127 ? (arr_0 [i_0]) : var_4))))));
        var_16 -= (!-9240);
        var_17 = 0;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] [i_1] [8] [9] = ((~(!-466154586)));
                                var_18 += ((((min((-2012325440 <= 268369920), 98))) && (var_12 <= 268369920)));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (~0)));

                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    arr_18 [i_1] [8] [i_1] [i_1] = var_7;
                    var_20 += (((((((((arr_16 [i_1] [4] [4]) ? var_1 : var_9))) || (!806718296)))) & (min(-1009, var_2))));
                    var_21 = var_9;
                }
                var_22 -= ((max(-1911091970, 98)));
            }
        }
    }
    var_23 = (min(var_23, (var_10 && 56)));
    #pragma endscop
}
