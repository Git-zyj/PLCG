/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 191;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = ((((max(var_0, (arr_4 [i_0] [i_0] [i_0])))) ^ ((-((~(arr_0 [i_2 - 1] [i_3])))))));
                            var_13 = (min(var_13, (((((~(arr_3 [i_0 - 1]))) + (arr_0 [i_0] [i_1]))))));
                        }
                    }
                }
                var_14 = ((~((2271094706 ? ((191 ? var_7 : (arr_3 [i_1]))) : (arr_6 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_5] [i_4] = (arr_8 [i_4] [i_5]);
                var_15 |= (min((((((53 ? 65535 : (arr_14 [1] [i_5] [i_5])))) ? ((191 / (arr_4 [4] [i_5] [12]))) : (arr_5 [18]))), (~196)));
                arr_18 [i_5] [i_5] = ((-(min((((arr_16 [i_5] [i_4]) ? (arr_13 [i_4] [i_4] [5]) : var_8)), (((-(arr_14 [i_5] [i_5] [i_5]))))))));
            }
        }
    }
    #pragma endscop
}
