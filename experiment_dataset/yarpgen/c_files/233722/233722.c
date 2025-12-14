/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_12 *= ((1 <= var_5) >> (((((85 % (arr_3 [i_1])))) - 77)));
                var_13 = (((min(-var_11, ((min(var_5, 105))))) != ((((arr_5 [i_0] [i_1 + 1] [i_1 + 2]) ? (arr_1 [i_0]) : var_11)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            {
                var_14 = ((((min(((var_9 ? var_8 : 150)), var_7))) ? (((((116 ? 0 : 62698))) ? ((105 ? 1 : 3474355107624526855)) : (((var_10 ? (arr_13 [i_2] [i_2]) : (arr_10 [12])))))) : ((((~5889) * (var_6 * var_4))))));
                var_15 *= (min(((((var_11 ? (arr_11 [i_2] [i_3]) : (arr_12 [i_3 - 3]))) * (-26122 ^ 46228))), (((var_11 == ((164 ? var_8 : var_5)))))));
            }
        }
    }
    #pragma endscop
}
