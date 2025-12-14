/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (526629675 > var_10);

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 + 2] |= ((-(max((arr_2 [i_0]), ((-(arr_2 [21])))))));
        var_14 = max((((arr_0 [i_0 - 4] [i_0 + 2]) ? (526629675 <= var_1) : var_10)), ((((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : 1))) ? ((7508802141737806157 ? 255 : 84)) : (arr_2 [i_0 + 3]))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_15 = (((1 != (var_7 && 1))));
            arr_8 [5] [i_1] = (max((((-25 < (((arr_4 [i_1]) | 1))))), 2299764553));
            arr_9 [i_2] [i_1] = 1;
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_3 - 1] = ((1 ? 1 : -7508802141737806155));
            var_16 -= ((8184 ? 16515 : 1212019015));
            arr_14 [i_1] = (max(var_7, (~16279974793909601687)));
        }
        arr_15 [i_1] = arr_4 [i_1];
        arr_16 [i_1] = arr_11 [i_1];
        var_17 = (arr_2 [i_1]);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = 4294967295;
        var_18 ^= var_3;
        var_19 = ((-7508802141737806127 ? (((((var_0 ? 9 : (arr_18 [i_4] [i_4])))) ? (max(var_4, (arr_0 [i_4] [i_4]))) : ((max(38769, 177587579))))) : (((((511 ? 7479 : (arr_18 [i_4] [i_4]))) + 16052)))));
    }
    var_20 = ((var_8 | ((0 ? var_9 : (4294967287 > 138)))));
    #pragma endscop
}
