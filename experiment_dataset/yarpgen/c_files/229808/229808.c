/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? ((min((!var_0), var_0))) : var_7));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_11 = (max(((((min(var_6, (arr_0 [i_0])))) ? ((max(var_2, (arr_0 [i_0])))) : var_2)), -var_9));

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_1] = ((+(min((arr_1 [i_1]), (((arr_3 [9] [i_0] [i_1]) ? var_0 : 63986))))));
            arr_5 [i_1] = var_2;
            var_12 = (arr_0 [i_0 - 1]);
            var_13 = 1550;
            var_14 = ((!(((+((6190916632473919727 ? (-2147483647 - 1) : 39408)))))));
        }
    }
    var_15 ^= ((var_4 ? var_0 : var_3));
    #pragma endscop
}
