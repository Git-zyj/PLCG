/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((68 | 65535) ? ((var_2 ? var_7 : ((24333 ? -4432600104906261461 : 24337)))) : var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_1;
        var_14 = ((~(var_10 && var_3)));
        var_15 = ((-119 ? (((-118 ? -13685 : 65535))) : (-13685 & var_8)));
        var_16 = (((((((var_0 ? var_11 : 24326)) ^ (((-13662 ? 1 : var_9)))))) ? ((-(116555639 / 1614192382))) : ((-1614192408 ? var_0 : 8887))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_17 += (var_8 / var_1);
        arr_4 [8] [8] = var_1;
        var_18 = ((((((2592825467121408356 ? 41212 : var_5))) ? var_9 : var_0)));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = var_2;
            var_20 = (var_2 ? ((-64 ? var_9 : -24333)) : 2592825467121408378);
        }
        var_21 = (min(var_21, (803055280 % 4059129936)));
    }
    var_22 |= 41211;
    #pragma endscop
}
