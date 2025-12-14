/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((max(1, var_7))) < var_4)) ? (min(((3440746603915693348 ? 281474976706560 : 167)), 1)) : (((((min(var_6, var_1))) ? var_16 : ((var_4 ? var_16 : var_15)))))));
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((arr_4 [i_0]) == ((min(var_15, var_5)))));
                var_19 = ((~(arr_1 [i_0])));
            }
        }
    }
    var_20 = (min(var_20, var_15));
    #pragma endscop
}
