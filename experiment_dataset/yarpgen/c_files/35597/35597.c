/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((!((max(13722, (!var_10))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] &= (((var_1 < ((var_3 % (arr_1 [i_0]))))) ? (arr_1 [i_0]) : ((((((var_11 ? var_3 : var_2))) ? var_12 : ((var_11 ? 2394473442 : var_6))))));
        var_18 = -43;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = 17246332644684735547;
        var_19 |= (~((-((var_6 + (arr_5 [i_1]))))));
        var_20 ^= (arr_5 [i_1]);
    }
    var_21 = ((15455443873274361175 ? ((((((26143 ? -368648919 : 1200411429024816068)) >= ((-4220 ? 50049 : 1200411429024816069)))))) : 13279872));
    #pragma endscop
}
