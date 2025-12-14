/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-19913, 1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min((max(6337724827872867798, 441058547)), (max((max(var_8, 5393628946754083239)), ((max(var_6, -19913)))))));
        var_14 = (min(((max(1, (max(1503259951, 1119))))), (min(15131640595363125267, -441058547))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_15 ^= (max(((max(1, 756667008))), (max(((min((arr_4 [i_1 + 1]), var_9))), (max(756667008, 13053115126955468390))))));
        var_16 = (min((max(((max(var_7, (arr_5 [i_1] [i_1])))), (max((arr_2 [i_1]), 6769)))), ((max(((max(var_4, (arr_5 [i_1 - 1] [i_1])))), (min((arr_2 [i_1]), (arr_3 [13]))))))));
        var_17 = (min(-1092433559, 0));
        var_18 = (max((min(((max((arr_3 [0]), var_6))), (min(var_11, var_0)))), ((max((max(-1957404283, (arr_2 [i_1]))), ((max(var_1, var_6))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_19 = (max(var_19, 12040));
            var_20 = 190;
            arr_12 [i_2] = 17885;
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            arr_16 [12] [i_2] |= 3192;
            var_21 = -441058548;
        }
        arr_17 [i_2] [i_2] = -21;
        var_22 ^= 3538300267;
    }
    var_23 = (max(1097040825, 30219));
    #pragma endscop
}
