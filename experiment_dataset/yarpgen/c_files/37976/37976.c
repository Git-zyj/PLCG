/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_12 *= ((17642 ? 32767 : (((+(((arr_4 [i_1]) * 7)))))));
            var_13 = (max(var_13, var_8));
            var_14 = (((!(((var_10 | (arr_2 [i_0 + 1])))))));
            var_15 = ((!(~65535)));
        }
        arr_5 [i_0] = ((((((max(-22658, 111))) ? (49135 <= -16819) : -var_4)) <= (((arr_3 [i_0]) ? var_0 : (arr_1 [i_0])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = ((((arr_6 [i_2]) ? var_2 : -8359238981968797477)));
        var_17 = (max(var_17, (arr_7 [i_2])));
    }
    var_18 = ((0 ? var_0 : 7475));
    #pragma endscop
}
