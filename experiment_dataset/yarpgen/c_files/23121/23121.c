/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_12 = (min(var_9, 5437318098813614974));
        arr_3 [i_0] = (min(((13009425974895936642 != (arr_2 [i_0 + 2]))), (20670 && var_1)));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_13 -= ((((arr_7 [i_1 + 1]) + 9223372036854775807)) >> (var_0 - 2870083008462328290));
        var_14 = (var_3 ^ -20679);
    }
    #pragma endscop
}
