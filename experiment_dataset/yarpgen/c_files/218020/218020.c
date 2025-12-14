/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((-55 | (73 || 254)))) || var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] [i_0] [i_0] |= ((((((arr_4 [i_0]) || (-9008 && var_11)))) - (((arr_1 [i_1]) & (7142936435728868192 || var_3)))));
                arr_6 [i_0] [i_0] [i_0] = (((((((arr_3 [i_0] [i_1]) ^ var_1)) == (arr_1 [i_0]))) && (((((-4 + 2147483647) >> (var_1 + 2052250053)))))));
            }
        }
    }
    var_18 = 0;
    var_19 = ((((((var_8 && (var_2 & var_16))))) & (var_8 / var_13)));
    #pragma endscop
}
