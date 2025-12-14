/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_9));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = ((min((var_7 < 2845047774), (arr_0 [i_0]))));
        arr_3 [i_0] = 6201224585329817269;
        var_14 *= ((((min((arr_1 [8] [i_0]), var_7)) & (((((arr_0 [16]) < 1)))))));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (18 ? (((((((arr_4 [i_1] [i_1]) > -8153983468734800423))) >> (((arr_5 [i_1]) - 873313205))))) : (max(1232526418, (max(-34107982235169110, (arr_2 [i_1] [i_1]))))));
        var_15 += (max(0, ((6079373830530793338 ? var_0 : 8153983468734800422))));
        var_16 ^= ((-(0 & 3813036848)));
        arr_8 [i_1] = (max(((((((arr_5 [i_1]) != var_8))) % ((((arr_6 [i_1]) != -21))))), -43));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = 1247283208;
        arr_13 [i_2] = (((arr_10 [i_2]) ? 16383 : (min((arr_11 [i_2] [i_2]), (var_0 * 0)))));
        arr_14 [i_2] [i_2] = (arr_11 [i_2] [i_2]);
    }
    var_17 = (max(var_17, -3515077369866362014));
    #pragma endscop
}
