/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((((((arr_7 [i_0] [i_0] [i_1] [i_2]) ? 32169 : -1))) ? (3989564839 || 2701247552765710881) : ((-(arr_0 [i_2])))));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_18 *= -1032172121;
                        arr_12 [i_2] [i_3] = (((((41 ? (((808428237 ? 99 : 172))) : (var_9 - 1032172121)))) ? (((-1739803674 * ((((arr_7 [i_0] [i_1] [i_2] [i_2]) != (arr_4 [i_1] [i_3]))))))) : (~var_9)));
                        var_19 = (min(var_19, 2147483647));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_20 = (((~-1032172109) < ((((!8595) > ((41909 ? 9223372036854775807 : 9223372036854775807)))))));
                        var_21 *= (((((2147483647 || (arr_8 [i_4 + 1] [i_4 + 1] [i_4 - 2])))) == (((var_0 != (arr_8 [i_4 + 1] [i_4 - 1] [i_4 + 1]))))));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_20 [i_0] [i_1] [9] [i_1] = ((0 ? ((18446744073709551596 ? (arr_6 [i_5 + 1]) : -1032172111)) : (!7701776942244030951)));
                        arr_21 [6] [6] [6] [9] [i_2] [i_2] = (((((69 != ((var_5 ? 1116892707587883008 : var_14))))) << (((min(var_17, (((-2147483647 - 1) ? 7233542956646227501 : -46)))) - 34181))));
                    }
                }
            }
        }
    }
    var_22 |= (((((var_4 ? -1032172122 : (8061279140151392561 || var_7)))) - ((200 ? ((max(40, var_11))) : var_7))));
    #pragma endscop
}
