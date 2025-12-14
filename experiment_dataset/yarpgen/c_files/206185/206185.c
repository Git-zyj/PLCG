/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (-11977210294586448204 ? 12521104841319525853 : ((~((4299180305624981740 ? var_10 : 44907)))));
                arr_4 [3] [3] = ((((18446744073709551615 << ((((var_3 ? (arr_0 [12] [3]) : var_5)) - 11942132439891572940))))) ? ((((((arr_0 [i_0] [i_1]) ? (arr_3 [7]) : (arr_2 [i_0] [6])))) ? (max(18446744073709551615, var_6)) : (var_4 == 15030492225628802896))) : (min((arr_3 [i_0]), (arr_2 [i_1 - 2] [i_1 + 1]))));
                arr_5 [0] = (((var_4 - var_8) - ((~(arr_1 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_11 [1] [i_2] = ((((arr_2 [i_2] [8]) - var_9)));
                var_14 *= (min(((11977210294586448227 >> (54909 - 54883))), 8236));
            }
        }
    }
    #pragma endscop
}
