/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_1;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 += var_5;
        var_16 += ((+((max((arr_1 [20]), (arr_1 [22]))))));
        var_17 &= var_11;
        arr_4 [i_0] = (((((((var_2 && 32754) || ((min(var_12, var_1))))))) < var_5));
        var_18 = (((((~(794 % var_8)))) ? ((min(var_7, (((arr_1 [i_0]) / 2912103898))))) : (max(var_13, ((min((arr_3 [i_0]), (arr_3 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = (arr_3 [i_1]);
        var_19 = (arr_5 [i_1 + 2]);
        var_20 = (max(var_20, (arr_2 [i_1])));
        var_21 -= (arr_1 [i_1]);
        arr_10 [i_1] = (arr_2 [i_1]);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((-(arr_13 [i_3 + 1])))))));
                            arr_21 [i_5] [i_4] [i_5] [i_5] [i_3 + 2] [i_2] &= ((((~(arr_12 [i_2] [i_3 - 1]))) == 1700413517));
                            arr_22 [i_2] [i_4] [i_4] [i_5] = var_5;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((((arr_3 [i_8]) - (arr_2 [i_7]))) / (((arr_25 [i_6 + 1] [i_6 + 1] [i_3 + 1] [i_2]) + var_3)))))));
                                var_24 &= var_13;
                            }
                        }
                    }
                }
                arr_32 [i_2] [i_3] &= var_9;
            }
        }
    }
    #pragma endscop
}
