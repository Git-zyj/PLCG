/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 678431179;
    var_12 = ((min((108 <= 122), var_9)) % var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (min(108, ((((((arr_0 [i_0]) >> (var_7 - 7355278093406658355))) > 89438877)))));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_13 = (min(var_13, (((~((var_1 ? -7671969792221577678 : 28)))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3 - 1] = (min((((arr_10 [i_3] [i_3 + 2] [i_1] [i_1] [i_2 + 1] [i_2]) ? var_1 : var_2)), -108));
                        arr_13 [i_1] [i_1] [i_0] = ((-((~(max(7671969792221577677, -7671969792221577685))))));
                        var_14 = (((((var_5 ? (arr_11 [i_1] [i_2 - 2] [i_3 + 1] [i_3] [8]) : 238))) ? ((((arr_11 [i_1] [i_2 + 2] [i_3 + 2] [i_3] [i_2]) ? var_4 : (arr_11 [i_1] [i_2 - 2] [i_3 - 1] [i_1] [i_2 - 2])))) : 1));
                        var_15 = (min((((arr_3 [i_2 - 1]) ? var_7 : ((min((arr_2 [i_1]), var_9))))), var_9));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_1] = (4514 && -13);
                        var_16 += ((!(arr_14 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 - 2])));
                    }
                    arr_18 [i_0] [i_1] [i_2] [1] = (((((-(min(var_2, var_9))))) ? (((~var_5) % var_6)) : var_1));
                }
            }
        }
    }
    var_17 = ((-108 ? var_4 : ((min(15, 14934)))));
    #pragma endscop
}
