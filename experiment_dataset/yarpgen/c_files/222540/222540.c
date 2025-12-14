/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (max((min(1, 3498020352)), var_13));
        var_17 *= ((((((((2631627591 ? 2631627591 : 1))) ^ (var_2 ^ var_9)))) ? var_9 : var_6));
        arr_3 [i_0] &= ((max(848074818, 1)) <= var_5);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_18 = (((max(var_5, var_4)) * ((var_9 ? var_8 : var_13))));
            arr_8 [i_2 - 1] = ((((min(5078725131954348146, 0))) ? 1 : (0 * 3598033978)));
            arr_9 [i_2] [i_1] [i_1] = (max(var_6, var_3));
        }
        arr_10 [i_1] = (((var_15 | var_11) + var_9));
    }
    var_19 = var_2;
    var_20 = ((!(((min(var_1, var_8)) != (max(var_7, var_6))))));
    var_21 *= ((((max(var_9, var_12))) < var_13));
    #pragma endscop
}
