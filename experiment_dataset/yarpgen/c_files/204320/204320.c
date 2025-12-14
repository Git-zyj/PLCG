/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!-161) ? (max(var_8, ((var_15 ? 27432 : 65535)))) : ((-var_6 ? (min(var_12, -1214870361)) : 539414198))));
    var_17 = var_13;
    var_18 = 8729;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] = -8733;
                            var_19 = ((-8727 ? -867774630 : ((56217 ? -8729 : ((-8730 ? 8729 : 8733))))));
                            var_20 = ((max(110, ((((arr_9 [i_3] [i_3 + 4] [i_3 + 4] [i_3]) % 159))))));
                            var_21 = (!8732);
                        }
                    }
                }
                var_22 = 32744;
                var_23 = (((((((min(var_14, (arr_1 [i_0])))) ? 0 : -410365563))) ? (((max((8733 < -553253017), (!var_10))))) : (min(539414204, (((1 ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : 16383)))))));
                arr_12 [i_0] [i_1] [i_1] = (max((((arr_2 [i_0]) << (arr_2 [i_1]))), ((~(arr_0 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
