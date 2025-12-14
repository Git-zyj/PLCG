/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 27372;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (min(((min((arr_8 [i_1 + 1] [i_1 + 1] [i_1]), 3979252105))), (min((min((arr_0 [i_0]), (arr_2 [12]))), (~127)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] = ((min(((18446744073709551604 ? 1 : 45)), 0)));
                                arr_15 [i_0] [i_0] [20] [i_1] [i_2] [i_3] [9] = ((1 ? (min(-81, ((19937 ? (arr_8 [i_0] [i_0] [i_0]) : 4794087025771090975)))) : ((((1504667365 && ((min(var_7, var_8)))))))));
                                var_15 ^= 12867;
                            }
                        }
                    }
                    var_16 = ((min(90, 63962)));
                    var_17 = var_7;
                }
            }
        }
        var_18 = ((((((arr_3 [i_0]) ? var_5 : (arr_13 [i_0] [12] [i_0] [i_0] [i_0] [i_0] [9])))) ? ((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || (arr_13 [1] [i_0] [i_0] [i_0] [i_0] [1] [i_0])))) : (max(var_10, (arr_13 [i_0] [i_0] [i_0] [i_0] [17] [i_0] [i_0])))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_19 = (((((~((min(-27933, 33)))))) ? (((((arr_12 [i_5] [i_5] [i_5] [12] [i_5] [i_5] [i_5]) && (arr_16 [i_5] [i_5]))))) : (((((var_2 ? 1676578274 : -170125934))) ? (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (max((arr_3 [i_5]), var_12))))));
        arr_19 [i_5] = (max(((((254 && (arr_10 [i_5] [12]))) ? ((min(2946096892873041685, 129))) : 4313315894580407377)), 9223372036854775807));
    }
    var_20 = (min((((var_5 | -9223372036854775800) * (((var_4 ? var_8 : -91))))), var_10));
    #pragma endscop
}
