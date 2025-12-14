/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_1] &= (-13855 && 2882274545396731382);
            var_10 = (max((((8188 ? 32767 : -1))), ((((min(404460572, var_5))) ? var_5 : ((-(arr_1 [i_1])))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_11 = arr_7 [i_2] [i_2] [10];
            var_12 = 13869;
        }
        arr_9 [i_0] = (((~6436874831383319749) >= 9441));
        arr_10 [i_0] [i_0] = (((-32764 / 404460572) && ((!(((var_0 ? var_2 : var_4)))))));
    }
    var_13 = (max(var_13, 9223372036854775807));
    var_14 = (max(var_14, (!1)));
    var_15 = 1;
    var_16 = ((~var_5) ? (-9223372036854775807 - 1) : (1 ^ 81330201));
    #pragma endscop
}
