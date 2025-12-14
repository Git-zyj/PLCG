/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_4;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_15 = 1314020881239614480;
        var_16 ^= (((arr_0 [i_0 + 2]) ? 1314020881239614480 : var_11));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 |= ((!((((!(arr_3 [i_1])))))));
        var_18 = (max(var_18, (((+((-(((arr_0 [i_1]) / -12857)))))))));
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_19 ^= (~-1314020881239614497);
        var_20 -= ((((((!(arr_6 [i_2])) && (((~(arr_3 [i_2])))))))));
        var_21 = ((~(((!(((-(arr_5 [i_2] [i_2])))))))));
    }
    var_22 = 1314020881239614480;
    #pragma endscop
}
