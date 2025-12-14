/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((max((((var_11 ? var_9 : var_1))), 14980803480424583921)) - ((((max(144, var_16))))))))));
    var_19 = (min(0, 233));
    var_20 = (-104 ? (var_12 || var_0) : ((2147483648 ? 1 : var_6)));
    var_21 = (min((~104), 144));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? 0 : 1));
        arr_4 [i_0] = ((!(((var_0 ? (arr_1 [i_0]) : 152)))));
        var_22 = (((((144 ? 0 : (-2147483647 - 1)))) * (((arr_1 [17]) ? var_9 : 4380866641920))));
        var_23 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [12])));
        arr_5 [i_0] = (((((45 ? -104 : 0))) ? -83 : (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((-((((((((arr_9 [i_1]) >= var_1)))) <= (max(3275028561702512377, var_13))))))))));
        var_25 += ((-(((arr_2 [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_2 [i_1])))));
        var_26 = ((((min(0, var_2))) ? (((93 - 13399) ? (((9530093513167092870 ? 65523 : 64))) : (-75 * 3465940593284967687))) : 162));
    }
    #pragma endscop
}
