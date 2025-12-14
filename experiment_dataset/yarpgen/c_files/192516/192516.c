/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max((max(var_7, var_7)), (!var_17))) & ((((var_11 && var_2) || (((-555699156 ? 1069580704 : 379889915))))))));
    var_19 |= var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_7 [i_0] = (1069580715 / var_1);
                arr_8 [i_0] [i_0] [i_0] = ((3225386580 ^ ((min(1612569274, var_14)))));
            }
        }
    }
    var_20 = (max(3564841468, ((3225386581 ? ((var_7 ? 6539229818862609955 : 8449447489989614180)) : (!-8449447489989614203)))));
    var_21 = ((-var_12 | ((~(var_17 % var_6)))));
    #pragma endscop
}
