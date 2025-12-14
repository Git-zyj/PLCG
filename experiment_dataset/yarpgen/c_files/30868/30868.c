/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_16 < 31654) * var_11));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_10 [8] [i_1] [i_1] [i_2] = ((!(255 < 65535)));
                        arr_11 [i_3 + 3] [i_3] [i_3] [i_2] = (((((arr_3 [i_0 - 1] [i_2 - 1]) | (arr_3 [i_0 - 1] [i_2 - 1])))) ? (max(((var_2 ? var_9 : (arr_1 [i_0]))), (((~(arr_5 [i_2 - 1])))))) : ((((((arr_6 [i_1] [i_1] [i_1] [i_1]) | -1822292547)) & (((arr_4 [i_3 + 3] [i_0]) ? var_3 : 2147483647))))));
                        arr_12 [i_2] = ((((min(((min(255, 0))), (((arr_2 [i_0]) * var_14))))) ? -4398046511103 : -var_15));
                    }
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        var_18 = (var_6 + var_6);
                        arr_15 [i_2] [i_2] [i_2] [i_2] = (min((arr_6 [i_0] [i_0] [i_0] [i_2 - 2]), (min((arr_9 [i_2] [i_2] [i_2 + 1] [i_2 - 1]), (arr_6 [i_0 - 1] [2] [i_2] [i_2 - 2])))));
                    }
                    var_19 = ((5469316512923103927 ? ((((arr_4 [i_0 - 1] [i_2 - 1]) - var_10))) : (((var_8 / var_14) + var_7))));
                }
            }
        }
    }
    var_20 = (!var_16);
    var_21 = (max(var_21, var_0));

    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        var_22 = (max(var_22, (((-(((var_11 == (((-(arr_18 [8]))))))))))));
        arr_19 [i_5] = (max((((min((arr_16 [i_5 - 2] [i_5]), (arr_18 [i_5]))))), (((((max(51, 127)))) % -238891255692404290))));
        var_23 = ((((arr_16 [i_5] [i_5]) + var_12)));
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        arr_23 [i_6] = var_3;
        var_24 = var_9;
    }
    #pragma endscop
}
