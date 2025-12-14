/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (((-15843627313375693192 || 229) > ((var_0 ? (var_1 & var_13) : (min(18446744073709551595, 18))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 -= (arr_0 [i_0]);
        var_20 = (arr_1 [i_0]);
        var_21 = (min(((9223372036854775802 ? -19 : (arr_1 [i_0 + 1]))), ((((arr_1 [i_0 - 1]) && -15)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_22 = (((((20 + (arr_8 [i_1] [i_2 - 1] [i_3 + 3])))) ? ((((arr_4 [i_3 - 1] [i_3 - 2]) ? 254 : var_4))) : (((arr_4 [i_3 + 3] [i_3 + 3]) ? var_10 : (arr_4 [i_3 + 1] [i_3 + 2])))));
                            var_23 = 4288680071774232592;
                            var_24 |= 145;
                            arr_12 [i_1] [i_2] [i_3] [i_4] = (((((((arr_6 [0] [i_2]) ? 18446744073709551606 : 127)))) ? (((((1 ? 0 : 2047))))) : (140 | 27285)));
                            arr_13 [i_1] [i_2] [i_3 - 3] [i_4] = -252;
                        }
                    }
                }
                arr_14 [0] [0] [i_1] = (max((((-((7516192768 ? 2281822841 : var_6))))), (arr_6 [i_2 - 1] [i_2 - 1])));
            }
        }
    }
    #pragma endscop
}
