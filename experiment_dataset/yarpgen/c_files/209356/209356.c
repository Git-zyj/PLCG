/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = 1;
                var_20 = (((arr_2 [i_0] [4]) ? ((var_4 ? 1016296187 : -34)) : 36104));
                var_21 = (max(-2939430122021606721, 16));
                var_22 = (((arr_3 [i_0]) ? (arr_2 [7] [i_1]) : 5));
                var_23 = (max(((min(2551420404, ((min(20, 36076)))))), ((2939430122021606721 / (arr_3 [i_0])))));
            }
        }
    }
    var_24 += (72 ? (((min((!29457), (var_15 == var_17))))) : (max(var_18, (min(var_13, var_0)))));
    var_25 = var_3;
    var_26 -= var_9;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_27 *= arr_3 [i_4];
                    arr_13 [i_3] [i_3] [i_4] [i_4 + 1] = ((-2939430122021606704 + 9223372036854775807) << (3102719943 - 3102719943));
                    var_28 = (~(min(2968510731, (max(1, 3030153082)))));
                    var_29 = (max(var_29, ((((((8151602091279546350 ^ (((177925945935851096 ? 0 : 29432)))))) ? ((((arr_0 [i_3 - 2]) << (65512 == -1966942180)))) : (((arr_8 [i_2] [i_3] [i_2]) ? (((min(-86, -20)))) : (var_4 % 542586069))))))));
                }
            }
        }
    }
    #pragma endscop
}
