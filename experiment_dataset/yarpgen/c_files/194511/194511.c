/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_15;
    var_19 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = -1774650229277912938;
        var_21 = (min(var_21, 150));
        var_22 = 3034852162489392466;
        var_23 = 1;
        var_24 -= 0;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 3038477711441075435;
        var_25 = -2946000691385950547;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 = 1;
        var_27 = 180;
        arr_9 [i_2] = 1;
        var_28 += 3038477711441075426;
    }
    var_29 = var_8;
    #pragma endscop
}
