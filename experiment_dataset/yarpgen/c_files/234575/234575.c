/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((110 - ((var_1 ? var_10 : -3706804770480160568)))), ((min(4429, 2572323456))));
    var_19 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((~((min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_21 = ((((((-4451 ? 218 : (arr_6 [i_0] [i_3])))) ? ((((102 >= (arr_7 [i_4 - 1] [i_4] [8] [i_2] [i_0] [i_0]))))) : (~var_14))));
                                var_22 *= (((((arr_11 [9] [i_1] [i_2] [i_3] [i_1]) > ((((-9223372036854775807 - 1) <= 127))))) ? ((((var_9 && (((4420 ? var_16 : 0))))))) : ((((min((arr_9 [i_0] [i_3] [i_4 - 1]), var_12))) ? var_3 : (~18446744073709551613)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_8, (min(var_17, (var_4 | 3767005632)))));
    #pragma endscop
}
