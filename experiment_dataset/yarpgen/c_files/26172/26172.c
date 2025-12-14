/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_2;
    var_20 &= (~var_6);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (max(((min((arr_1 [8] [i_0]), (arr_1 [i_0] [3])))), (((arr_1 [i_0] [i_0]) | (((arr_0 [i_0]) | (arr_0 [i_0])))))));
        var_21 = (min((min(((6668775799339892258 ? 6668775799339892285 : 24232)), ((((arr_1 [i_0] [i_0]) == var_2))))), var_9));
    }
    var_22 -= (-127 - 1);
    #pragma endscop
}
