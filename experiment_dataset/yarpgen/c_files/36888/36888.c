/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_14 / 789619718748307073) ? ((789619718748307073 / ((max(var_11, 65535))))) : (~var_7)))));
    var_18 *= -789619718748307060;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (max(var_19, 7201));
        var_20 *= ((-((((((arr_1 [i_0] [i_0]) ? (arr_0 [15]) : (arr_0 [i_0])))) ? (min(var_9, var_14)) : (max(789619718748307076, var_13))))));
        arr_2 [i_0] [i_0] &= max(var_10, ((((8894123188251685336 & (-2147483647 - 1))) / var_0)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_7;
        var_21 = (max(var_21, -789619718748307073));
        arr_7 [i_1] = var_0;
        var_22 = (max(var_22, ((((((0 < (arr_3 [6])))) << (((arr_4 [i_1] [0]) - 8546259804066773218)))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 += ((!((((((var_2 > (arr_9 [12])))) ^ (!0))))));
        var_24 = (max((var_6 && 64610), 0));
    }
    #pragma endscop
}
