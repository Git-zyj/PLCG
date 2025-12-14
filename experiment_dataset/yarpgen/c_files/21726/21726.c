/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((((2296426966 | (arr_2 [i_1] [i_2])))) ? ((~(arr_0 [i_0]))) : (((arr_2 [i_0] [i_1]) ? 16574570635479640354 : var_10))));
                    var_13 = ((-var_6 ? var_4 : ((~(((1830786599252232428 || (arr_1 [i_1]))))))));
                    var_14 = ((((((arr_4 [i_2] [i_1] [i_2]) ? (max(8676523878647232155, (arr_0 [i_2]))) : (max((arr_0 [i_0]), var_0))))) ? var_8 : -19259));
                    var_15 = (((max((((arr_0 [i_2]) < var_5)), (!var_2))) ? ((((((var_10 ? (arr_4 [i_2] [i_1] [i_2]) : 65508))) ? (((!(arr_2 [i_1] [i_1])))) : (arr_2 [i_0] [i_1])))) : (max(8676523878647232159, 0))));
                }
            }
        }
    }
    var_16 = ((var_6 ? var_10 : (!0)));
    #pragma endscop
}
