/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max((((-5731260099452829293 + 9223372036854775807) >> (57233 - 57201))), (8302 | 8302))) << ((((-1151060062447024629 / 8324) && (86 % var_17))))));
    var_20 = (((!56571) < (((var_11 != var_11) * (!var_1)))));
    var_21 = (((((var_16 && -32763) / -57254)) | (((1 + -1862236805) | (!var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((1 <= 32755) & (70 >= 1023)));
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0]) && 10608703850870411206))) > (86 <= 32751));
    }
    #pragma endscop
}
