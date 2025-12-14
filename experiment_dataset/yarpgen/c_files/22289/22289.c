/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max((((var_2 * (arr_0 [i_0])))), ((~(arr_1 [i_0] [i_0])))));
                var_16 &= ((~(((((4 | (arr_3 [i_0])))) ? 11 : (((var_5 < (arr_4 [i_0] [i_0] [i_0]))))))));
                var_17 = (max(var_17, (((((((-6 >= 5) ? ((-24 ? var_7 : var_2)) : (11 || var_11)))) ? (((-1939965435 ? 2434810521070493450 : 2356883912))) : ((1 ? (min(2269814212194729984, 14107655102735576560)) : -12)))))));
                var_18 = (max(var_18, ((((var_3 ? 4240229949 : 2241573908)) == (((arr_1 [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : var_10))))));
            }
        }
    }
    #pragma endscop
}
