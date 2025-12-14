/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((-(arr_2 [i_1])));
                    var_13 = 43;
                    arr_8 [i_0] = 6071270381934997204;
                    arr_9 [i_0] [i_1] = ((2891959518193502243 ? (((!((min((arr_1 [i_1]), 2202157360675527192)))))) : ((((min(6071270381934997175, 18243712416740776750)) >= (min((arr_2 [i_2]), 12375473691774554424)))))));
                }
            }
        }
    }
    var_14 = var_9;
    var_15 = (-(max(var_8, ((var_9 ? 4294967295 : 513900524)))));
    #pragma endscop
}
