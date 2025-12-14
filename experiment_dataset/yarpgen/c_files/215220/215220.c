/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (min((((arr_2 [i_0] [i_0] [i_2]) | 35)), ((127 ? 6333 : 0))));
                            var_19 = ((77 ? ((127 ? 3451187312 : 12)) : (arr_1 [i_0] [i_0])));
                            var_20 |= min((arr_6 [i_0] [i_2] [i_3]), ((min((arr_2 [i_1] [i_3] [i_1]), (arr_1 [i_0] [i_3])))));
                        }
                    }
                }
                var_21 = (((((arr_1 [i_0] [i_0]) || var_8)) ? var_11 : var_4));
            }
        }
    }
    var_22 ^= (var_17 ? (((~((0 ? var_16 : -114))))) : (max(var_7, var_2)));
    #pragma endscop
}
