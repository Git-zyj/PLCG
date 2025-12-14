/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 |= ((((((arr_1 [10] [i_0 + 1]) ? (arr_6 [i_0] [6] [i_2]) : (arr_1 [2] [i_0 + 1])))) ? ((2365 ? 1046130325 : 1122696314)) : ((8046120814650291265 ? var_3 : (((arr_0 [i_0] [6]) ? 1477763403 : var_8))))));
                    arr_10 [i_0 - 1] [i_0] [i_0] [i_0] = ((46 | (-8046120814650291266 != 4251516145421134851)));
                    arr_11 [i_0] [i_0] [i_2] = (((-8556431720047593370 / -1900656706) ? 2371932835 : 205660608));
                    var_11 *= (((((((arr_0 [i_0] [2]) / (arr_3 [13]))) != ((3166435945 ? 5152990788059796661 : 2723828237)))) ? (min((arr_4 [i_0 - 2]), -46)) : (arr_5 [0])));
                }
            }
        }
    }
    var_12 -= (min(var_0, ((1293871748 ? var_7 : (max(var_2, 1658814478034947010))))));
    var_13 = ((!(var_0 & 7747835519920066340)));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_3] = (30935 != 47471);
                var_14 = max((((arr_13 [i_3] [i_3]) * var_8)), (min((arr_13 [i_3] [i_3]), (arr_13 [i_3] [i_3]))));
                var_15 = (~((((((((arr_1 [i_3] [i_3]) <= 1089717138)))) <= (arr_9 [i_3] [i_3] [i_3])))));
            }
        }
    }
    #pragma endscop
}
