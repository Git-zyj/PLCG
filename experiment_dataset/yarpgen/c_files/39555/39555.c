/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((((((-2147483647 - 1) ? var_9 : (arr_0 [i_0 - 1])))) ? ((((27 / 4) ? (var_13 | 16870) : 0))) : (((arr_0 [i_0 + 1]) ? ((((-127 - 1) ? 19 : 8783))) : (~17236384722372075862)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_2] = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (((var_6 ? (min(var_5, -121) : 4))));
                                arr_14 [i_2] = ((((max(2147483647, 4))) ? (((1 ? (-2147483647 - 1) : 25012))) : ((-(max(40, var_0))))));
                            }
                        }
                    }
                    arr_15 [i_0 - 1] [i_2] [i_2] = (((((-8805 ? var_11 : ((min(1, var_8)))))) && ((min((((arr_3 [i_0 - 1]) ? var_14 : var_8)), (~var_1))))));
                    arr_16 [i_2] = (min((((0 ? 252 : (arr_9 [i_0 - 2] [i_1] [i_2])))), -4253866014));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        var_17 *= ((((max(((-8784 ? (arr_17 [i_5 - 1] [i_5 - 2]) : var_10)), (((arr_17 [i_5 - 3] [i_5 - 2]) * 8))))) ? (((1618050756 ^ var_13) << (((arr_17 [i_5 - 3] [i_5 - 1]) - 1587697319159042148)))) : (((((2744604892386689350 ? 41101282 : -8805)))))));
        var_18 = (max(var_18, (1 - 79)));
        var_19 *= (max(-32, 68));
        arr_19 [i_5 + 1] [i_5 - 3] = ((((var_2 ? var_9 : (arr_17 [i_5 - 1] [i_5 + 1]))) >= ((max(252, 1304555979)))));
    }
    #pragma endscop
}
