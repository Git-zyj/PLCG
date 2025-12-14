/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = 7825251417814625326;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [8] [i_1] [i_3] [i_2] = ((((10621492655894926290 ? var_5 : 255))) * (min((arr_5 [i_0] [20] [i_2 - 1] [11]), var_10)));
                            var_16 = 23603;
                            arr_11 [i_1] [i_1] [i_1] [1] = (((((((((arr_0 [11]) * (arr_1 [i_2 + 3]))) < (1530445702 * var_14))))) < (((arr_8 [i_2 - 1] [i_2 - 1] [i_3] [i_3]) ? (arr_7 [i_1] [i_2 - 1] [i_2 + 1]) : 2764521587))));
                            var_17 = var_11;
                        }
                    }
                }
                var_18 = (0 * 11138788417294881649);
                var_19 = var_11;
            }
        }
    }
    var_20 = var_14;
    var_21 = ((var_6 * ((((20 <= (var_5 | var_2)))))));
    #pragma endscop
}
