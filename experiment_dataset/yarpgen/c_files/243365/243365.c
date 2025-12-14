/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((255 ? var_5 : -6536735959952248304))));
    var_11 = (min(var_11, ((min(var_6, (((197 ? 2147483633 : -6536735959952248304))))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((min((258048 - 190), 6536735959952248304)), (((32 >> (-6536735959952248304 + 6536735959952248309))))));
        var_12 = (max(var_12, 159));
        arr_5 [i_0] = (max(var_7, ((max((min(var_8, var_4)), ((min((arr_1 [i_0]), 6))))))));
        var_13 = -6536735959952248307;
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (min(459426134380516242, -3873466316873776597));
        arr_9 [i_1] = (((!(((-8151947082169920624 ? 6536735959952248307 : 190))))));
    }
    var_14 = var_7;
    #pragma endscop
}
