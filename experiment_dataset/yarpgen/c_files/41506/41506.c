/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [14] [14] [i_1] = (-((-(min((arr_2 [i_0] [i_1]), 1)))));
                var_19 = ((((((arr_4 [i_0 - 3]) - -1))) ? ((min(1, (arr_4 [i_0 - 1])))) : ((1 / (arr_4 [i_0 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_20 = (((((((min((arr_1 [i_2]), var_1))) ? -61 : (arr_12 [10] [10])))) ? (!1459402089) : -1));
                var_21 = (!27189583);
                arr_13 [i_3] = ((((!(arr_10 [i_3] [i_2 + 4]))) ? (!1) : ((2835565206 ? var_6 : (arr_10 [i_3] [i_2 + 3])))));
                arr_14 [i_2] = (min(((((arr_12 [i_2 - 2] [i_2 + 3]) | 1459402089))), ((var_18 ? (min(var_15, (arr_6 [i_2 + 3] [i_3]))) : (-25206 / var_3)))));
                var_22 = (min((arr_8 [i_2] [i_2 + 1]), var_3));
            }
        }
    }
    var_23 = ((!(((var_0 ? 0 : ((74404161873183120 >> (var_3 - 28280))))))));
    #pragma endscop
}
