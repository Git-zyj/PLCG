/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (-17178820608 | 9223372036854775807)));
        var_13 = (!0);
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [5] [i_1] = (((((((~(arr_2 [1] [1]))) ^ (arr_2 [i_1] [i_1])))) ? (((var_2 << (127 - 124)))) : (!4294967276)));
        var_14 = ((~(arr_3 [i_1 - 3])));
    }
    #pragma endscop
}
