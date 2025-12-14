/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = ((!((((min(3, 4294967287))) && (arr_2 [i_0])))));
        arr_4 [i_0] = (((((((-9 ? 1306253252 : 4294967281))) - (10486397235992396140 - 0))) + (((~-1637560494) ? (15453982352600311892 | 2940734565164378611) : 4119282221))));
        var_18 = (max(1, (max(-1, (min(4077857360291050990, 91))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] = ((((-20 >= (arr_5 [9] [i_1]))) ? (arr_2 [i_1 + 3]) : ((-(arr_2 [i_1])))));
        arr_8 [i_1] = ((-(441477204 || 2297853128)));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_19 = (((arr_9 [i_2] [i_2]) == (((((arr_11 [i_2]) - 0)) + (((104 + (-2147483647 - 1))))))));
        var_20 = (((-(arr_11 [i_2 - 1]))));
    }
    var_21 &= var_8;
    var_22 = var_5;
    var_23 = ((((~(22 - 0))) <= (-0 >> 0)));
    var_24 = ((0 >= 1) ? (((212 << (4035349329 - 4035349314)))) : (((~18446744073709551615) ^ 1)));
    #pragma endscop
}
