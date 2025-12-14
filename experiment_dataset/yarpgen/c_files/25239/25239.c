/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min((min(var_0, 65535)), (((var_2 ? var_11 : 12))))) < var_5);
    var_13 = var_2;
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_15 -= ((~(min((arr_0 [i_0]), (arr_0 [i_1])))));
                arr_5 [i_0] [i_0] [i_0] = ((~((1 ? (arr_2 [i_1 + 2]) : 54))));
                var_16 = ((((((arr_2 [i_1]) ? (((arr_1 [i_0]) & 62621)) : (arr_0 [i_0])))) ? ((((arr_3 [i_0]) && ((max((arr_0 [i_1 + 2]), var_5)))))) : (((~2107418923) ? (~13828) : ((var_4 | (arr_2 [i_1])))))));
                arr_6 [i_1] [i_1] = (arr_0 [i_1 + 2]);
            }
        }
    }
    var_17 = 948853885;
    #pragma endscop
}
