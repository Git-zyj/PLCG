/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 && ((((min(var_1, -32764))) && var_2))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((var_5 <= (-50 > var_2)));
                arr_6 [i_0] [i_0] [i_0] = ((((-(arr_1 [i_0 + 2]))) + (arr_1 [i_0 - 3])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_18 = (!202);
        arr_9 [i_2] [i_2] = (~823511046);
        var_19 = (max(240, var_14));
        var_20 = (max(var_20, ((16 - (((((max(var_5, 16))) && var_8)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_21 = ((((-2 * (arr_3 [i_3]))) + 1918590752));
        arr_12 [i_3] = 1487387829;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_22 = (((((0 + var_11) || (arr_0 [i_4]))) || (var_5 - 24)));
        var_23 += (var_4 ^ 252);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_24 = ((+((max((arr_0 [i_6]), (arr_0 [i_6]))))));
                var_25 = ((((20808 + 29648) * -5406)) % (min(2633305943, (39815 / -26825))));
            }
        }
    }
    #pragma endscop
}
