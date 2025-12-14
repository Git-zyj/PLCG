/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 3] = ((-(-var_13 < 82)));
        arr_3 [i_0] = -var_14;
        arr_4 [i_0] [i_0] = ((-(min((arr_0 [14] [i_0]), var_10))));
    }
    var_20 = (max(var_20, (((~(max(var_17, (min(5121302609012332086, var_4)))))))));
    #pragma endscop
}
