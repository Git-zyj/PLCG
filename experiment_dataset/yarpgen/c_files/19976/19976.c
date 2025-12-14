/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 6;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_18 = 8191;
            arr_4 [i_0] [i_0] = ((12810590526720327506 < (((0 ? 1394930294 : 1394930312)))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((((3614216156 / 1) ^ (arr_0 [10]))))));
            var_20 = (((arr_5 [i_0 - 2] [i_0 - 2] [i_2]) - (arr_2 [i_0 + 2] [i_0])));
            var_21 = 1;
            arr_8 [3] [i_0] = (869454161 > 255);
        }
        var_22 &= (((arr_0 [2]) ^ (arr_2 [1] [1])));
    }
    var_23 = (max(var_23, var_9));
    var_24 = ((min(((var_1 ? var_13 : var_13)), var_15)));
    #pragma endscop
}
