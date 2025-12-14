/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (((arr_4 [i_0]) ? (arr_4 [i_0]) : 3678660648));
                var_21 ^= var_7;
            }
        }
    }
    var_22 *= ((((((max(13205503156071080353, var_15)) * var_5))) ? (min(var_18, var_1)) : var_6));
    var_23 = max(var_9, ((-6143443960132555624 ? 0 : var_2)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] = (((arr_8 [i_2]) ? ((var_3 % (arr_7 [17]))) : ((((var_5 > ((var_0 >> (var_12 - 180)))))))));
                var_24 = ((min((arr_9 [18] [i_2] [i_2]), ((var_2 ? var_17 : var_8)))));
            }
        }
    }
    var_25 = ((var_1 ^ ((max(var_13, (min(var_17, var_13)))))));
    #pragma endscop
}
