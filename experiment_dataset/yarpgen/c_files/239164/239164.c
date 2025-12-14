/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((var_8 ? (8696 == var_7) : (~56831)))));
    var_12 = ((var_2 ? var_0 : 241));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((3253273144 ? 18354 : (4422603429974593433 <= -3015))))));
        var_13 = (min(var_13, ((((max(1644372251, var_3)) / -1777765982)))));
        var_14 -= 4011460785;
        var_15 = (min(var_15, -13924443506098544427));
        var_16 = ((-(1644372251 <= 2650595032)));
    }
    var_17 = var_9;
    var_18 = ((var_1 != ((min(244, var_3)))));
    #pragma endscop
}
