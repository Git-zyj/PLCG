/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((arr_4 [i_0] [i_0] [i_1]) == ((((var_19 ? 4294967295 : (arr_3 [i_0] [i_1] [i_0 - 2]))) << (((min(var_8, 3552794787)) - 22791))))));
                arr_6 [i_0] [i_1] = (((arr_2 [i_0 + 2]) ? (max(var_4, 457607839)) : (((((((9223372036854775807 >> (1666129607433663770 - 1666129607433663729)))) || 4294967295))))));
                var_20 = var_1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_3] = (min(4294967295, ((7609584237807869741 << ((27294 ? 0 : 15042))))));
                arr_13 [i_3] = -7575524664914253537;
                var_21 = (min(var_21, (((24576 | (min((arr_3 [i_3] [i_3 - 1] [i_2]), (arr_1 [i_3 + 1]))))))));
                var_22 = (max(var_22, ((((!-8527389444099936952) ? (arr_0 [i_3 + 1] [i_3 - 1]) : 63)))));
                var_23 = arr_2 [i_3];
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
