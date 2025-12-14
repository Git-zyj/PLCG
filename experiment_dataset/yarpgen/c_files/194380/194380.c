/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (-93 + 1574448344);
                arr_5 [i_1] [i_0] = ((-((min(var_10, -81)))));
                arr_6 [i_0] = ((+(min(-1144391590, (((arr_3 [i_0] [i_0]) - (arr_4 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    var_14 = ((var_5 ? (((var_8 && var_7) ? (!var_9) : 14019040816587213419)) : var_5));
    #pragma endscop
}
