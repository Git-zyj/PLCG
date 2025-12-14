/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 = ((165 ? ((0 / (arr_0 [i_0]))) : ((((~var_1) ? var_6 : (arr_5 [i_0] [i_0]))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_11 = var_1;
                            var_12 = (((arr_14 [i_3] [i_1] [i_0 + 1]) ? var_0 : (arr_8 [i_0])));
                        }
                        var_13 *= (arr_1 [i_0]);
                        arr_15 [i_0] [i_2] [i_1] [i_0] = (!1);
                        var_14 = ((!(arr_14 [i_2 + 2] [i_2 + 2] [6])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] = (i_0 % 2 == 0) ? ((((arr_3 [i_0]) >> (((arr_3 [i_0]) - 2642775555))))) : ((((arr_3 [i_0]) >> (((((arr_3 [i_0]) - 2642775555)) - 3951349698)))));
                        var_15 = var_8;
                        var_16 ^= ((-(((arr_12 [i_5] [i_5] [i_1] [i_1] [1] [i_5] [i_0]) ? (arr_8 [i_5]) : (arr_2 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] = (arr_19 [1] [i_2] [1]);
                        var_17 = (max(var_17, ((var_5 ? 9223372036854775806 : 1512408340006139059))));
                    }
                    arr_23 [8] [i_1] [8] &= (((arr_2 [i_2] [i_1]) >> ((((((min(var_0, var_3))) ? (arr_10 [i_0] [i_1] [i_1]) : ((var_2 ? (arr_17 [i_0] [i_0] [8] [8] [i_1] [i_2 + 2]) : 0)))) - 80))));
                    arr_24 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((var_9 >> ((((~(min(var_1, (arr_7 [i_0]))))) - 4294967272))))) : (((var_9 >> ((((((~(min(var_1, (arr_7 [i_0]))))) - 4294967272)) - 4294967097)))));
                }
            }
        }
    }
    var_18 = (max(var_18, ((((((var_9 >> (0 / 1)))) ? var_9 : 6)))));
    var_19 = ((((((max(var_9, var_3)) % var_5))) ? var_7 : (1 / -1857014788)));
    #pragma endscop
}
