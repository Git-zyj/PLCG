/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((min(4755007054373634637, ((17044025290177347407 ? 0 : (-9223372036854775807 - 1))))) + var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_15 = var_4;
            var_16 = 1202841326;
            var_17 = 4755007054373634637;
            var_18 = (((54 / var_5) || (var_1 / var_0)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = var_6;
            var_20 |= (arr_7 [i_0]);
        }
        var_21 = ((((var_7 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))) + 0));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_22 -= (~var_9);
        var_23 *= (min((((max(var_5, (arr_9 [i_3] [i_3]))) | (~-4755007054373634638))), (((!(arr_3 [i_3] [i_3]))))));
    }
    #pragma endscop
}
