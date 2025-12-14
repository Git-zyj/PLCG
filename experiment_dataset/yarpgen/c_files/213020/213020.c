/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 3699116300;
        arr_3 [i_0] = ((((((((arr_1 [i_0]) - -5671554511658373603)) != (arr_0 [i_0])))) * (((33554431 >= (arr_1 [i_0]))))));
        var_14 = min(((((max(768209375, 179)) < -12352))), (~0));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_15 = (1 / -24567);
        arr_6 [i_1] [i_1] &= max((arr_4 [i_1] [i_1]), ((+((((arr_4 [i_1] [13]) <= 222))))));
    }
    var_16 = var_2;
    var_17 = ((-125 && ((min((~32764), ((min(0, var_5))))))));
    var_18 = -3023828768;
    var_19 = ((((var_3 << (-8489428334750043388 + 8489428334750043390))) - 1984554827));
    #pragma endscop
}
