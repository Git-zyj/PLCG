/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = 32768;
        var_19 = (min(var_19, ((max(-2055437673, (-2147483647 - 1))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((~(~-2147483630))));
        arr_5 [i_1] = (max(10, 8317144327224434812));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_20 += ((max((arr_6 [i_2]), (arr_6 [i_2]))));
        arr_8 [i_2] [i_2] = (((15360 ? (-127 - 1) : 1)));
        arr_9 [i_2] = var_4;
        var_21 = (min(var_21, (((~(((var_8 + 8128) + (arr_6 [i_2]))))))));
        arr_10 [i_2] [i_2] = var_12;
    }
    var_22 = var_5;
    var_23 = -var_8;
    var_24 = ((var_9 ? 66 : ((var_13 ? var_8 : ((11 ? 0 : 9223372036854775807))))));
    #pragma endscop
}
