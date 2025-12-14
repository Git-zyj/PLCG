/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_10;
    var_20 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (i_0 % 2 == 0) ? ((-(((max(18014398509481728, -8889135905031319446)) >> (((((-9223372036854775807 - 1) ? (arr_0 [i_0] [i_2]) : -12)) - 15728578783575007069)))))) : ((-(((max(18014398509481728, -8889135905031319446)) >> (((((((-9223372036854775807 - 1) ? (arr_0 [i_0] [i_2]) : -12)) - 15728578783575007069)) - 10373376015900031163))))));
                    var_22 = (min(((((-(arr_4 [9] [i_1]))))), (max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_23 = ((~(((arr_0 [i_0] [1]) + -4413130115946818621))));
                                arr_13 [i_0] [i_0] [i_2] = ((max((arr_1 [i_0 - 2]), 8378661775581851340)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
