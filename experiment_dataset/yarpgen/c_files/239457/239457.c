/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -4351;

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max(var_1, (arr_0 [12] [i_0])));
        arr_3 [i_0 - 2] = (8388608 + 1);
        arr_4 [i_0 - 2] = (max((arr_0 [i_0 - 2] [i_0 - 1]), (((61454 && (arr_0 [i_0 - 1] [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = ((var_0 >> (arr_6 [i_1])));
        var_22 = 23448;
        var_23 -= 112;
    }
    var_24 = ((((0 ? (48 | 107) : (max(73, 0)))) != ((((((var_16 ? var_5 : var_12))) ? ((var_0 << (var_0 - 68))) : var_15)))));
    var_25 = ((0 ? var_17 : ((max(var_7, var_12)))));
    #pragma endscop
}
