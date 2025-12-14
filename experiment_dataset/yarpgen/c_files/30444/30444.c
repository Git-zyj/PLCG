/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_1 [i_0 + 1]);
                arr_7 [i_0] [i_1] = ((((((((arr_3 [i_0]) ? -92 : (arr_0 [i_0 + 2] [i_0])))) ? 12134595442424624580 : ((((arr_3 [i_0]) ? (arr_5 [i_1]) : (arr_1 [i_0])))))) | ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0]))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_15 = ((((((arr_2 [i_2 - 1] [i_2]) ? (arr_8 [i_2 - 1]) : 2147483647))) ? ((-(arr_8 [i_2 - 1]))) : (((arr_2 [i_2 - 1] [i_2 - 1]) ? (arr_8 [i_2 - 1]) : 1))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_16 += (((~1) ? (arr_5 [i_4 + 2]) : (((((-256958101 ? var_13 : (arr_4 [4])))) ? (arr_9 [i_3]) : var_3))));
                    arr_14 [i_2] [i_3] = 218;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_17 ^= (((((arr_15 [2]) / ((1 ? (arr_17 [i_5]) : var_14))))) ? ((2147483647 / ((-24365 ? (arr_15 [i_5]) : 1)))) : (arr_15 [i_5]));
        var_18 -= ((((-256958102 ? (arr_16 [i_5]) : 1)) + -118));
        var_19 -= (((((var_0 + (((-1512433824534885569 > (arr_17 [i_5]))))))) ? ((256958100 ? (-2147483647 - 1) : 12387394447319346884)) : 726204931));
        var_20 = var_12;
    }
    var_21 += var_1;
    var_22 = ((((var_8 ? var_2 : (var_9 <= -118))) <= var_14));
    #pragma endscop
}
