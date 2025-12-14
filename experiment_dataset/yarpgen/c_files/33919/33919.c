/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = ((min((min((arr_3 [i_0] [i_0]), var_8)), (!var_4))));
                arr_5 [i_0] [i_1 - 1] [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_20 ^= (((+-5159575233770879822) ? var_9 : (~var_16)));
    var_21 -= ((var_2 & ((((max(-5159575233770879822, var_6))) ? 6256196795027079616 : var_5))));
    var_22 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] [3] = (3522126350193570140 >= ((((((arr_7 [i_3] [i_2]) ? (arr_7 [i_3] [i_2]) : var_10))))));
                arr_11 [i_2] [i_3] &= ((var_2 >> (((min(((1 ? -20611 : 18446744073709551615)), (arr_9 [12] [i_2] [i_3]))) - 10678652784376137024))));
                arr_12 [i_2] [i_3] = (max((24 ^ var_14), ((~((var_6 ? (arr_6 [9] [9]) : -9054868791087760510))))));
            }
        }
    }
    #pragma endscop
}
