/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min((120 - 130), -126))) ? var_3 : -var_9);
    var_19 = ((~((~((var_6 >> (803624600 - 803624586)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = 4;
                var_20 = (((((arr_0 [i_1 - 1] [i_1]) ? -99 : (arr_0 [i_1 - 1] [i_0]))) / (arr_0 [i_1 - 1] [i_0])));
                var_21 = (arr_3 [i_0]);
                var_22 = -1626028377;
            }
        }
    }
    var_23 = (min((((1 || var_11) ? var_16 : ((-101 ? var_7 : var_9)))), ((min(var_9, (1 && var_6))))));
    var_24 = (((((803624610 != var_11) || (112 == 1))) ? ((max((min(-13615, 102)), -2106355638))) : ((1 ? 1 : 58))));
    #pragma endscop
}
