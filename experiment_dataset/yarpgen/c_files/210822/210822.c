/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [1] [i_0] = ((min(((55 ? var_0 : 32767)), ((min((arr_0 [i_0]), (arr_1 [i_0])))))) ^ (455448362 < 0));
        arr_3 [i_0] = (((((var_7 ? -1889622768 : (~-96)))) ? (max(var_3, (((arr_1 [i_0]) | (arr_1 [i_0]))))) : (((arr_1 [i_0]) ? ((var_3 / (arr_0 [i_0]))) : ((-32751 - (arr_1 [i_0])))))));
    }
    var_16 = (min((var_3 & var_5), (-55 == var_10)));
    var_17 = (!var_14);
    var_18 = (var_5 == var_6);
    var_19 = ((var_5 == (((((var_13 ? var_2 : 529483547))) ? (max(var_3, -1)) : (-1 || var_2)))));
    #pragma endscop
}
