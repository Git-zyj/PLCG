/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min((((((var_12 ? 164 : 156))) ? (min(27559, var_2)) : (~var_0))), ((~(var_4 & var_0)))));
    var_16 &= ((var_9 | (~var_3)));
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (~var_6);

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 = ((max(27556, ((88 ? 1595883339 : 27559)))) & (((!var_8) ^ ((var_9 ? 801796566 : (arr_3 [i_1]))))));
            arr_5 [i_0] [i_1] [i_1] = (max(27579, 4294967294));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_20 ^= (min(2130706432, (((+(((arr_6 [i_0] [i_2]) * var_1)))))));
            var_21 = (((((((arr_8 [i_2] [i_2]) ? var_12 : (arr_6 [i_2] [i_0]))) * 4791)) / -27560));
        }
    }
    var_22 *= ((((min(-449, 5))) ? var_3 : var_5));
    #pragma endscop
}
