/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 -= ((((min((arr_7 [0] [0]), (max((arr_2 [i_0]), (arr_0 [i_2])))))) ? (((~(arr_7 [13] [i_1])))) : ((min(-2999601800399821908, var_3)))));
                    arr_10 [i_2] [i_2] [i_2] [i_1] = (((arr_1 [i_0]) ? (arr_2 [i_0]) : ((((!((min((arr_1 [i_1]), (arr_4 [13] [i_1 + 1] [i_0]))))))))));
                    var_17 = (max(var_17, var_11));
                }
            }
        }
    }
    var_18 -= (((((~((4294967295 ? 65522 : var_3))))) ? ((var_3 & (((var_11 ? 12 : var_4))))) : (((var_5 >> (var_15 - 2934661058))))));
    var_19 = var_15;
    #pragma endscop
}
