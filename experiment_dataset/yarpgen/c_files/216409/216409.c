/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0 - 1] = (max(((((arr_0 [i_0] [i_0 + 3]) % (arr_0 [i_0] [i_0 + 1])))), (((arr_0 [i_0] [i_0 + 3]) ^ var_9))));
        arr_3 [i_0 + 2] = max(6081486766513385489, 0);
        arr_4 [i_0] = ((18446744073709551611 / ((((var_4 ? var_5 : (arr_0 [i_0 + 3] [6])))))));
    }
    var_10 = (-1 - 0);
    #pragma endscop
}
