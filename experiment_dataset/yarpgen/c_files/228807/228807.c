/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] = (((!(arr_8 [i_0]))));
                        arr_14 [i_1] [i_1] [i_3] = (((!var_5) > ((((arr_0 [i_0]) && 65535)))));
                        arr_15 [i_0] [i_1] = (arr_1 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_12 = (i_1 % 2 == 0) ? ((((-((1 / (arr_9 [i_1] [i_2]))))))) : ((((-((1 * (arr_9 [i_1] [i_2])))))));
                        var_13 = (min((((((max(var_6, var_10))) | (~var_4)))), ((((max(1372413054, (arr_3 [i_1] [i_1] [i_1])))) / (min(var_1, 1372413047))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_14 = (max(var_14, (((~(min((min((arr_10 [i_5] [i_1] [i_1] [i_0] [i_0]), 1372413034)), (arr_19 [i_0 - 2] [i_5] [i_0 - 2] [i_0 - 2] [2]))))))));
                        var_15 *= (min((max((((arr_19 [i_0] [i_1] [i_2] [i_2] [8]) / var_11)), ((min(261383261, 0))))), -1));
                    }
                    arr_21 [i_0] [i_1] [i_1] = ((!(arr_3 [i_1] [i_1] [6])));
                }
            }
        }
    }
    var_16 = (max(var_16, 1));
    var_17 = var_3;
    #pragma endscop
}
