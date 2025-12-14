/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = ((129 << ((((max(var_0, -491616921))) - 8197))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (var_7 + 65535);

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_17 = (min(((-180429693 + ((min((arr_5 [i_1]), -226619095))))), (arr_0 [i_1])));
            var_18 &= 1;
            var_19 = -226619095;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 = (max(0, (((var_6 >= var_8) < ((((arr_1 [i_2] [i_0]) == 1)))))));
            var_21 = (~0);
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_22 -= 126;
            var_23 = (min(var_23, (((((max((max(-923416781, -1288969556)), 923416788))) ? (26212 <= 1) : 1843133775)))));
            var_24 = (min(var_24, 1));
            var_25 = var_10;
        }
        var_26 = 1;
    }
    var_27 ^= ((1 ? (((((var_9 ? var_4 : var_12)) | var_12))) : (((((min(var_3, var_6)) + 9223372036854775807)) >> (var_12 - 60120)))));
    var_28 = ((-1 + ((min(var_10, var_1)))));
    #pragma endscop
}
