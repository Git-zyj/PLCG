/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((5655508249027681129 % (((~(((!(arr_0 [i_0])))))))));
        arr_3 [i_0 + 2] = (arr_1 [10] [i_0 - 1]);
        var_15 = ((-72 ? 1 : 5655508249027681129));
        var_16 = (-127 - 1);
    }
    var_17 = (~8883025481228028183);
    var_18 = ((var_0 >> (-1 + 5)));
    var_19 = (min(var_13, (max(5655508249027681125, var_7))));
    #pragma endscop
}
