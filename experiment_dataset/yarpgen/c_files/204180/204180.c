/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((var_12 || var_0) || (-1232 * 17922320846898251594)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((+(max(var_14, (((arr_1 [2] [2]) ? var_9 : (arr_0 [i_0])))))))));
                arr_4 [6] [i_1] = var_4;
            }
        }
    }
    #pragma endscop
}
