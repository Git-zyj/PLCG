/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (((((((-(arr_1 [i_0])))) || (((var_17 ? (arr_2 [0]) : (arr_7 [i_2 + 2] [i_1])))))) ? (arr_5 [i_2 + 2]) : (((((22336 ? var_6 : 4294967295))) ? (min(var_5, var_6)) : (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    arr_9 [i_1] [i_1] [9] [i_2] = (((-(arr_8 [i_2 - 1] [i_1 - 1] [i_0 - 3]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [9] [i_2 + 2] [i_3] [i_4] = ((-((400390773889144688 / ((((arr_8 [i_0] [4] [i_3]) ? 856818985309841350 : 1)))))));
                                var_19 = ((arr_10 [i_1 - 1] [11] [i_2 + 2] [i_4 - 1] [i_0 + 2]) ? (((arr_3 [i_2] [i_2 + 1]) ? ((var_16 ? (arr_1 [9]) : var_12)) : ((1 ? (arr_10 [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_3] [7]) : -1247063680)))) : -1247063695);
                                var_20 = (min(var_20, ((((arr_6 [i_4 - 1] [i_3] [i_1 - 1]) << (((min((arr_2 [i_2 - 1]), (arr_2 [i_2 + 2]))) - 1229108964419268956)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, (!var_2)));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_22 = (max(var_22, var_0));
                arr_20 [1] [i_6] [i_5] = (arr_16 [i_5]);
                var_23 = (max((arr_18 [i_5 + 2] [i_5 - 1]), ((((((arr_17 [21]) ? (arr_17 [i_5 + 2]) : (arr_15 [19])))) ? var_3 : (arr_18 [i_5 + 1] [i_6])))));
            }
        }
    }
    #pragma endscop
}
