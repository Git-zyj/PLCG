/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (min((((((max(var_3, var_9)))) ^ (min(var_12, var_5)))), ((-((var_8 ? var_10 : var_11))))));
    var_15 = (min(var_15, -var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, var_10));
        var_17 = (((arr_0 [i_0]) ? (arr_0 [i_0 + 1]) : var_5));
        var_18 &= (-14 != -4828342381315087381);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 += ((-(min(-0, (arr_3 [14])))));
        var_20 = (max(var_20, ((((max(((max(-92, -4828342381315087382))), (max((arr_4 [i_1]), var_3)))) != (((((max(var_3, (arr_3 [14])))) / (12569075838205129159 || var_3)))))))));
        var_21 -= ((~(min((~7205), 230))));
        var_22 = (max(((((((9 || (arr_4 [i_1])))) != (246 - var_6)))), (max(((255 ? 58330 : 12962383243874420239)), (((58325 ? var_8 : var_8)))))));
        var_23 = 215;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_24 = ((~(min((arr_6 [i_2]), var_2))));
        var_25 &= (min((((((3104549857 ? 246 : (arr_5 [i_2])))) ? (arr_5 [i_2]) : (((arr_6 [2]) ? (arr_6 [i_2]) : 246)))), (arr_5 [i_2])));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_26 = (((((arr_6 [i_3]) << (var_8 - 30))) != 37897));
        var_27 = (arr_5 [i_3]);
        var_28 = (min(0, 3100621030441984720));
    }
    #pragma endscop
}
