/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((var_5 & (max(var_6, 14374288106275381402)))), (((3672 >= (max(var_2, 65520))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, ((((1 / 11857286615432255126) || ((((arr_0 [i_0]) / 4072455967434170214))))))));
        var_14 = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1 + 2] = var_2;
        arr_5 [i_1 + 2] = var_7;
        var_15 ^= var_6;
        var_16 = 3672;
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = 18028;
        var_17 = (min(var_17, (((61869 + (max(189985502116842883, (arr_3 [i_2 + 2]))))))));
        arr_10 [19] = ((((((arr_7 [i_2]) <= (arr_8 [16])))) ^ ((~(arr_8 [i_2])))));
        var_18 ^= ((-((var_8 * (arr_8 [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_14 [22] = (~14374288106275381408);
        arr_15 [i_3] [i_3] = (((arr_11 [i_3]) + var_8));
    }
    #pragma endscop
}
