/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((~(((-9223372036854775807 - 1) ? -26456 : (((-127 - 1) ? 127 : -40))))));
                var_14 = ((~(arr_1 [i_0])));
                var_15 |= (((arr_4 [i_1] [i_1] [i_0]) | (arr_2 [i_0])));
                var_16 = (arr_4 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (min((((arr_11 [i_0] [i_2] [i_3] [i_3 - 1] [i_3]) * (arr_1 [6]))), (arr_8 [i_3] [i_1] [i_1])));
                            var_18 = (((((26456 ? -18150 : 18150))) ? -26456 : (((115 ? (arr_3 [i_0]) : (arr_2 [i_0]))))));
                            var_19 = ((((510449651 || ((((arr_1 [i_0]) ? (arr_8 [i_0] [i_0] [7]) : 0))))) && ((((((8576 ? var_11 : (arr_6 [i_3] [i_0] [i_0] [i_0])))) ? var_8 : (!19))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_6 ? ((8576 ? 0 : 0)) : var_6)));
    var_21 = -57;
    #pragma endscop
}
