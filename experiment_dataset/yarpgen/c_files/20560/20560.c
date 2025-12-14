/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 &= ((!(((((arr_2 [i_0]) ? 51193 : 16305))))));
        var_11 += ((!(~var_4)));
        var_12 = 51174;
        var_13 = 4577648656714704018;
    }
    var_14 = (min(var_14, (((51193 ? (!var_8) : (max((~15201752256740947173), (((14344 ? var_8 : var_9))))))))));
    #pragma endscop
}
