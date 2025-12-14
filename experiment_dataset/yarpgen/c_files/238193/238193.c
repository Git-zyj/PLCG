/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_19));
    var_21 = (-9071243235853955441 ? -2517114110218870960 : 3214740326254583996);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((var_17 ? (min((min(-3214740326254584016, (arr_3 [i_0] [i_0]))), (min(-3214740326254583997, (-9223372036854775807 - 1))))) : ((((max((arr_0 [i_0] [i_1 + 1]), (arr_7 [i_0] [i_0] [i_2])))) ? (arr_6 [i_0]) : (max((arr_6 [i_0]), (arr_0 [i_0] [i_0])))))))));
                    var_23 = (max(var_23, (max((((arr_0 [i_1 + 1] [i_0 + 4]) / (arr_7 [i_2 + 1] [i_0] [i_0 + 4]))), ((-3214740326254583997 ? 4306332354798860299 : 4306332354798860319))))));
                    var_24 = min((((arr_4 [i_1]) >> (((arr_2 [i_0 + 4]) - 2418552954173906723)))), (min(((var_19 / (arr_3 [i_2] [i_1]))), (min((arr_6 [i_1]), (arr_2 [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_1] [i_1] = ((5375082312466338428 <= (((((min((arr_12 [i_0] [i_1] [i_2] [i_2] [i_4]), (arr_3 [i_4] [i_3]))) == (((-4418698835296132278 + 9223372036854775807) >> (9223372036854775807 - 9223372036854775801)))))))));
                                var_25 = -9115072767311349212;
                                var_26 = 9223372036854775807;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
