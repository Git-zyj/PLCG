/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (2147483647 ? (((~((1 << (8337765271420768083 - 8337765271420768075)))))) : var_9);
    var_11 = (((var_6 ^ 1958374160) ? (((var_6 + 1) ? ((min(-1, (-9223372036854775807 - 1)))) : ((var_6 ? var_0 : 0)))) : ((var_2 ? var_9 : -27))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((~(((arr_4 [6]) | (arr_5 [i_0] [i_0] [i_1]))))) << (arr_4 [i_0 + 1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_12 ^= arr_8 [i_3] [i_3] [i_1];
                            var_13 = (i_2 % 2 == zero) ? (((((((13 & -1) >> (((arr_9 [i_2]) - 9214093716147734040))))) ? (((arr_4 [i_0]) ? (((arr_8 [i_0] [i_0] [i_2]) ? var_0 : var_3)) : (((54347 ? var_3 : (arr_4 [i_2])))))) : ((((1941858641 ? (arr_4 [i_2]) : (arr_11 [2] [1] [1] [i_3 + 1] [i_3] [i_2]))) >> (1 & 1)))))) : (((((((13 & -1) >> (((((arr_9 [i_2]) + 9214093716147734040)) - 4237603258621786429))))) ? (((arr_4 [i_0]) ? (((arr_8 [i_0] [i_0] [i_2]) ? var_0 : var_3)) : (((54347 ? var_3 : (arr_4 [i_2])))))) : ((((1941858641 ? (arr_4 [i_2]) : (arr_11 [2] [1] [1] [i_3 + 1] [i_3] [i_2]))) >> (1 & 1))))));
                            var_14 = (((-5967558147011279610 - -5967558147011279610) > 4601410164071553501));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
