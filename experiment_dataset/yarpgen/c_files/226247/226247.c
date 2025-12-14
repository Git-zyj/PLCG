/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = ((18446744073709551615 ? 34381450 : 4294967295));
        arr_4 [i_0] &= (((((79 ? 1 : 7))) ? (-127 - 1) : 0));
        var_21 -= ((0 ? 1901319061 : 0));
        var_22 = ((8 ? 8449709005422589788 : 18446744073709551615));
        var_23 = ((18446744073709551615 ? 524287 : ((31 ? 0 : 128))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_24 += (min(((235 ? 33554431 : 12937936719689915120)), 4294967295));
        arr_9 [i_1] = 1;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (((4294967285 ? 16777215 : 1)))));
        arr_12 [i_2] = ((243 ? 0 : 0));
        var_26 += ((7 ? 218 : 18446744073709551615));
        arr_13 [i_2] = ((0 ? 186 : 127));
    }
    var_27 = (min(var_27, (min(((0 ? (((18446744073709551595 ? 8 : 1))) : ((255 ? 14789496640145031059 : 0)))), ((min(var_18, ((4194303 ? 0 : 0)))))))));
    #pragma endscop
}
