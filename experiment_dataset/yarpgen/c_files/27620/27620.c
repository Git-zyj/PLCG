/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(30, var_3));
    var_19 = (min(((((max(var_3, var_1))) ? ((var_4 ? var_1 : var_3)) : var_11)), (((min(var_8, 90851092))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0 - 2] = ((max((((226 ? 0 : 4032))), 4294967295)));
        arr_3 [i_0] = (((((4204116203 ? 181 : -1))) ? ((min(var_5, var_7))) : var_9));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_20 = ((1 ? (max(4204116197, -4725989509696188254)) : (((min(30686, (min(64610, 181))))))));
        var_21 = var_4;
        var_22 = ((min(11, 1)));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_23 = (max(var_13, ((min(var_12, var_1)))));
        var_24 = (min(var_24, ((min((min(var_7, (max(36, var_6)))), var_8)))));
        var_25 = max(var_6, ((6012731197182310224 ? -32755 : 255)));
    }
    #pragma endscop
}
