/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((~(max(27543, 4646486143382749347)))))));
    var_14 = (min((((var_4 == (max(902665506, -43))))), (max(4646486143382749347, 52))));
    var_15 = ((-(max(var_3, (min(5230344814275624814, 13800257930326802295))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = (((((-(~0)))) + 4646486143382749312));
        arr_2 [23] = (max(-125, (((max(17231371706090327219, 127)) - 0))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_17 = (min(4294967295, (min(-63, 4646486143382749320))));
        var_18 = ((-(min((~2026599126), 186))));
    }
    #pragma endscop
}
