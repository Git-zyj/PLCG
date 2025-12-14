/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min((var_0 + var_13), (var_7 - 19358)))) ? (((min(-80, var_3)))) : var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((min((((arr_3 [3] [i_1] [i_0]) ? (arr_4 [i_1]) : (arr_1 [i_1]))), (arr_2 [8] [i_1]))) < ((((83 - 83) ? ((-85 ? -7887486854947580502 : (arr_1 [i_1]))) : 3526695506))));
                var_18 = ((((((arr_0 [i_0]) << (var_8 - 15280)))) >> ((var_1 ? (-7887486854947580502 > 32765) : (arr_4 [i_1 - 2])))));
                var_19 &= var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = ((1 ? ((((((var_4 + 9223372036854775807) << (arr_0 [i_0])))) ? var_2 : ((-80 ? 1 : 107)))) : ((-var_3 ? (((arr_1 [i_0]) ? -80 : var_15)) : (arr_0 [i_3])))));
                            var_21 = (arr_5 [1]);
                            var_22 = (((arr_8 [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 - 4]) ? (((arr_8 [i_1 - 2] [i_1 + 3] [i_1 - 3] [i_1 - 2]) ? (arr_8 [i_1 - 4] [i_1 - 4] [i_1 + 3] [i_1 - 4]) : -73)) : ((79 ? 250 : 1))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((((max(15, var_1))) + ((var_9 ? -20527 : var_1))))) ? ((var_12 * (var_8 * 1))) : var_14);
    #pragma endscop
}
