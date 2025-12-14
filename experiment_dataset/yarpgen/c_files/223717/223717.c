/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 32084;
        var_13 *= var_9;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (min(var_14, ((((min(var_3, var_8)) < (((~((0 ? var_12 : var_6))))))))));
            var_15 -= (!1);
        }
        arr_6 [i_0] = max(((var_6 || (((2330439302 ? 56780015 : -303179273))))), ((min((arr_0 [i_0]), -8859471122463606055))));
    }
    var_16 = var_3;
    var_17 = (max((((((var_11 ? var_0 : var_6))) ? var_0 : 61143)), (((((min(var_7, 4393))) && (-5594772334133100288 >= var_0))))));
    var_18 = 61143;
    #pragma endscop
}
