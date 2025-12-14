/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= 1;
    var_16 = ((1 * (((((0 ? 16558076251888527278 : 45))) ? (51 + var_6) : (max(-67, var_3))))));
    var_17 |= ((var_13 & ((((var_7 ? 1290866969 : 1776620695)) * (((var_6 ? 45 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((max(58406, 1776620712)));
                var_18 = (max(var_18, ((min(((-8112 ? ((((arr_4 [i_0] [i_0]) || var_0))) : (((arr_4 [i_0] [i_0]) ? var_5 : 186)))), (((((-329559330 + 2147483647) << (63 - 63))))))))));
            }
        }
    }
    var_19 = ((((var_10 || (var_11 || var_6))) || ((((54841 ? var_3 : var_5))))));
    #pragma endscop
}
