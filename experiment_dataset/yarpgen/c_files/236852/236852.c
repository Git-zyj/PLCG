/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] |= var_6;
        arr_3 [i_0] [i_0] = ((var_7 ? ((((17 >> (3867411391461755902 - 3867411391461755853))) % (1 <= var_3))) : (((var_3 % 18446744073709551592) >> (var_10 - 42536)))));
    }
    var_11 = ((((((var_7 * 3498948137018584437) - (((var_10 ? 1 : 48637)))))) ? ((var_3 ? (5818 != var_8) : ((var_0 ? var_1 : 3426335035966205572)))) : var_0));
    var_12 = (((((((1 ? var_0 : var_1)) != 65535))) >> (48637 - 48633)));
    #pragma endscop
}
