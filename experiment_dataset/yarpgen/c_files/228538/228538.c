/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((((((min(2147483647, (arr_0 [i_1] [i_0])))) && (!var_0))))) % ((((((-5942 + 2147483647) << (((-11066 + 11077) - 11))))) ? (arr_5 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_1])))));
                var_16 -= (((var_13 < (arr_1 [i_0 - 1]))));
            }
        }
    }
    var_17 = max((~-5942), -50);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_18 = ((-(~3976266673)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_19 *= ((var_12 ? (((((((arr_13 [i_5] [i_4 - 1] [12] [i_2]) + 2147483647)) >> (50 - 37))) >> (5941 - 5937))) : (var_0 / var_10)));
                            var_20 = 50;
                            arr_17 [i_4] = (((((((min(65, (arr_11 [i_3])))) * ((var_8 ? -5942 : (arr_11 [i_3])))))) ? ((~((max(50, -90))))) : (arr_15 [i_5] [i_4 - 1] [i_3] [i_2])));
                            arr_18 [i_2] [i_2] [i_4] = ((((arr_14 [i_4] [i_4 + 4] [i_4 - 1] [i_4 + 1] [i_4 + 3] [i_4 + 1]) / ((var_13 ? (arr_7 [i_2] [i_2]) : (arr_6 [14]))))));
                        }
                    }
                }
                arr_19 [i_2] [i_3] [i_3] = ((((~(arr_7 [0] [0])))) ? 50 : 11074);
            }
        }
    }
    #pragma endscop
}
