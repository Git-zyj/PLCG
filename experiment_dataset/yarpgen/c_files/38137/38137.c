/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18446744073709551615;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = -623431744526391120;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((((arr_14 [i_0] [i_1] [i_2] [i_2] [i_2]) != (!var_7)))) <= 1)))));
                                var_19 = (((arr_12 [i_2]) != -13));
                                arr_16 [i_3] [1] [i_3] [i_3] [i_3] = 2146435072;
                                arr_17 [i_0] [12] [7] [i_4] [i_0] [i_1] = (((max((((arr_15 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0]) + 262144)), (((-(arr_3 [i_3]))))))) | (arr_8 [i_1]));
                                var_20 = ((623431744526391120 && (((((arr_6 [i_2] [i_2]) + -8229220936290338884))))));
                            }
                        }
                    }
                    var_21 = ((((3982360635 >> (623431744526391112 - 623431744526391111))) ^ ((min(((1022 << (1042901142 - 1042901139))), ((((arr_8 [i_0]) > var_6))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_22 = 623431744526391113;
        var_23 = 623431744526391120;
        var_24 = (((((arr_19 [i_5]) ? 6638723117794662580 : 4294967295))) ? (623431744526391120 > 4294705153) : -623431744526391128);
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        var_25 = (min(var_25, ((min(((((((arr_19 [i_6]) ? (arr_21 [i_6] [i_6]) : 1))) ? ((var_13 + (arr_21 [i_6] [i_6]))) : ((-6927 | (arr_21 [i_6 - 2] [i_6]))))), (arr_20 [i_6]))))));
        var_26 = (((((var_11 ? (1 && -74) : -623431744526391120))) || ((((var_11 >> (-74 + 99)))))));
    }
    #pragma endscop
}
