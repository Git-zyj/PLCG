/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, -756921491));
    var_12 = (max(var_12, ((((((756921491 >> (18096 - 18065)))) || ((((72 != var_6) + ((min(18096, 18099)))))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((~(3374 >= var_3)));
        var_13 -= 3532873779;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 - 2] [i_1] = (((min(2147483647, (min(17785721935963163967, 756921491)))) < ((min((!756921491), ((-1216324301 ? 0 : var_1)))))));
        var_14 = ((((min(3575418439, var_1) - -0))));
        arr_6 [5] [i_1] = 194;
        arr_7 [i_1] [i_1] = (max(var_2, ((var_7 ? 0 : 756921482))));
        arr_8 [5] [i_1] = (((((min(87, -1)))) / (max(var_5, ((min(25088, var_1)))))));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_15 = ((var_0 > (((15 >> (18099 - 18080))))));
        arr_11 [i_2 - 2] = ((((((min(var_5, var_6))) ? 6549 : (~1216324301))) - var_7));

        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            var_16 *= (2934182475 <= 4140814510114893211);
            arr_16 [15] [i_3] [15] = (min((min(var_0, (18099 ^ 0))), ((((((var_2 ? var_3 : 2371112118))) && ((min(var_0, 32404))))))));
            arr_17 [i_2 - 2] [i_3] [i_2 - 2] = (((((((194 ? -577742199 : var_1))) && 802828469)) ? (((~(max(3575418439, var_6))))) : (max(18446744073709551615, (var_5 != var_8)))));
        }
    }
    var_17 = (min((max(-var_7, (min(7850018695280635069, var_0)))), (((var_3 ? (max(var_7, var_5)) : var_2)))));
    #pragma endscop
}
