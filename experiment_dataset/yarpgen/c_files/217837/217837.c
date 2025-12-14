/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((((((0 ? var_1 : var_2))) ? ((var_1 ? var_11 : var_10)) : ((var_0 ? var_5 : 1))))) ? ((var_6 ? (!var_7) : ((var_5 ? var_7 : var_0)))) : ((((min(var_6, var_11))) ? ((4294967295 ? var_2 : var_5)) : 21765))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(((-1282041730 ? (-9223372036854775807 - 1) : 2423706920)), ((((!171003455) == (((arr_2 [i_1] [i_0]) ? var_10 : (arr_3 [5]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = arr_10 [i_3 + 1] [2] [i_2] [i_3] [i_1];
                            var_16 = ((((arr_3 [i_0]) > ((((arr_9 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_6 [i_3] [i_0] [i_3])))))));
                        }
                    }
                }
                var_17 |= ((((-9223372036854775807 - 1) ? (max(-26442, 1282041744)) : -1)));
            }
        }
    }
    var_18 = ((((~(max(var_6, var_12))))) ? var_12 : ((min(var_1, var_1))));
    var_19 = (((-127 - 1) ? var_4 : ((var_2 ? var_4 : (max(var_3, var_0))))));
    #pragma endscop
}
