/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((((-3311 ? var_2 : 0))) == var_17)))) & (((~var_14) ? (((max(var_10, var_4)))) : ((var_17 ? -7421083345203180037 : 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((((!(arr_5 [10]))))) + (((((9537317935317706634 * (arr_1 [i_0] [i_0])))) ? ((67108864 ? -7853626758839649255 : 430166694829739620)) : (3321 / 2298454006296132996))))))));
                arr_7 [i_0] [i_0] [i_1] = -2298454006296133012;
                arr_8 [i_0] = ((((((((arr_1 [i_0] [i_0]) / 455170686))) < (min(207987238, -430166694829739623)))) ? 24 : (arr_2 [i_0])));
                arr_9 [i_0] = (max(7421083345203180044, -23));
            }
        }
    }
    var_21 = max((max(-3299, var_3)), (((!(!var_8)))));
    #pragma endscop
}
