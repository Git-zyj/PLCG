/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min(((min(-20123, (arr_1 [i_0] [i_0])))), (((((~(arr_1 [i_0] [15])))) ? (!20115) : (arr_1 [i_0] [i_0])))));
        var_11 = 31;
        arr_3 [i_0] = ((!(arr_1 [1] [1])));
    }
    var_12 = var_6;
    var_13 = -20097;
    var_14 = var_10;
    var_15 = var_3;
    #pragma endscop
}
