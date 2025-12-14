/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1] |= var_1;
                arr_5 [i_0 - 1] [5] [5] = (((2868036132557460613 == 524160) ? var_12 : ((((((var_12 ? var_10 : var_0)) > (var_18 & var_12)))))));
            }
        }
    }
    var_20 = ((var_6 ? (((~(var_7 % var_16)))) : (min(var_3, var_15))));
    var_21 = (((6843934225565420757 >> (-7257976725381839911 + 7257976725381839957))) == ((((6814546038047174056 == (max(6814546038047174056, 127)))))));
    var_22 |= (((((((max(var_10, var_18))) ? var_2 : (((max(var_18, var_6))))))) ? (((min(var_19, var_8)) + (var_13 + var_6))) : (((~((max(var_19, var_3))))))));
    #pragma endscop
}
