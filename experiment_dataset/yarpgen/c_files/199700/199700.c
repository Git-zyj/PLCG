/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((16736 ? 1 : 255))) && var_1));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0 - 1] = (min((((arr_1 [i_0 - 3]) ? (arr_2 [i_0 + 1]) : var_0)), ((min((arr_2 [i_0 - 3]), (arr_1 [i_0 - 2]))))));
        arr_5 [i_0 - 1] = (3 % 32754);
        arr_6 [i_0] [i_0 - 1] = (((arr_2 [i_0 - 3]) ? (((arr_3 [i_0 + 1]) ? var_6 : (arr_0 [i_0 - 2] [i_0 - 3]))) : (arr_2 [i_0 + 1])));
    }
    var_18 &= var_4;
    var_19 = (((((var_13 % var_11) == ((0 ? -124 : 53786)))) ? var_11 : (~-3780625276)));
    var_20 ^= ((((!(((var_9 ? var_7 : var_10))))) ? (min(2397180791, ((min(8188, 2097024))))) : (((((var_0 ? var_15 : var_14)) ^ (~var_7))))));
    #pragma endscop
}
