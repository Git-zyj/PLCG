/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(((255 ? var_5 : var_7)), ((max(var_3, 2635318277)))))) ? (((max(var_9, (var_7 < 2635318247))))) : (min(var_4, ((32736 ? var_10 : 2635318277))))));
    var_12 *= ((32800 ? 1659649004 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (((1659649018 ? 32716 : 0)));
                arr_6 [i_1] = (-9223372036854775807 - 1);
                var_14 = ((((109 ? (205 && var_8) : ((7734717908021266712 ? 9223372036854775807 : var_10)))) << (((((arr_4 [i_1] [i_1] [i_1 - 2]) ? 35657 : var_9)) - 35614))));
                var_15 *= (((((~59) ? (max(61230, (arr_5 [i_0 + 3] [i_1 - 1] [i_1 - 1]))) : ((max((arr_0 [i_1]), 64))))) >> ((((((var_1 ? (-9223372036854775807 - 1) : (((~(arr_0 [i_0])))))) - -9223372036854775757)) + 83))));
                arr_7 [i_0] = ((-(min(10712026165688284901, (arr_4 [i_0 - 1] [i_0 - 1] [i_0])))));
            }
        }
    }
    var_16 = (max(var_16, ((max(393216, var_7)))));
    #pragma endscop
}
