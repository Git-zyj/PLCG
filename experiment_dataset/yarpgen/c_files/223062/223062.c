/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((1382927914231581820 % var_6) >= ((max(var_9, var_6)))))) <= var_8));
    var_11 = (min(var_11, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((~(((arr_1 [8] [i_0]) ^ (arr_6 [i_0] [i_1]))))))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_13 = min(((13716 ? (arr_8 [i_0] [i_3 + 2] [4]) : 1099717859)), ((0 ? 256 : 1)));
                        var_14 = (min((((!(((1 ? 256 : 4144501410)))))), 30720));
                        arr_9 [i_0] [i_0] [i_2] [i_0] = (var_1 ? 1 : ((min(1008, (!17063816159477969796)))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_4] [i_4] = (((max((arr_4 [i_1 - 1] [i_1] [i_0] [i_4]), (arr_4 [i_1 + 1] [i_1 + 2] [i_0] [i_4])))) ? (((-(arr_11 [i_1])))) : (max(((var_4 ? 1073739776 : -75)), (arr_7 [i_0] [i_1] [i_4] [1]))));
                        var_15 = max((61927 == 17063816159477969781), ((256 != ((((arr_2 [i_1 + 1] [i_1] [i_1]) == var_9))))));
                        var_16 = (max((arr_8 [i_1] [i_1 + 2] [i_1]), ((min(256, 65408)))));
                        var_17 = (max(var_17, ((((arr_2 [i_2] [i_1 + 1] [i_1 - 1]) ? (arr_2 [i_0] [i_1] [i_1 + 2]) : (arr_2 [i_0] [i_1] [i_1 + 2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
