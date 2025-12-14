/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 ^= var_3;
        var_19 = (max(var_19, 1922475249144817212));
        var_20 |= ((min(((var_17 ? var_16 : var_11)), ((((arr_1 [5]) < 16524268824564734403))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = var_10;
        var_21 = (max(var_21, (((((max((arr_1 [11]), ((min(var_2, (arr_4 [i_1]))))))) || 16524268824564734403)))));
        var_22 = (!1922475249144817185);
        var_23 = ((arr_3 [i_1]) + (max((min((arr_4 [i_1]), var_7)), ((((arr_3 [i_1]) - var_6))))));
    }
    var_24 = var_6;
    var_25 &= (((16524268824564734372 + 16524268824564734391) < (var_8 || var_17)));
    var_26 = 16524268824564734403;
    #pragma endscop
}
