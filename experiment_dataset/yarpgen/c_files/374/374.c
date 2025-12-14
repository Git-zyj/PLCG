/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_16, ((~(max(var_4, var_11))))));
    var_20 = ((((~((var_3 ? -1841572976974608230 : var_10)))) / (((-(min(1448751786, 16383)))))));
    var_21 = (max(var_21, (max(-16373, (max((min(var_4, 229)), var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 ^= -769007241;
                    arr_8 [i_0] [i_1 + 2] [i_1] [0] = (769007251 ^ (max((min(var_8, -32753)), ((max(-32749, (arr_1 [i_0] [i_1 + 4])))))));
                    var_23 = ((var_5 ? ((max((arr_4 [i_2]), -769007245))) : ((((min(var_11, var_7))) ? ((max(255, var_14))) : var_13))));
                    arr_9 [i_0] [i_1 + 3] [0] [i_2] = var_16;
                }
            }
        }
    }
    var_24 &= var_4;
    #pragma endscop
}
