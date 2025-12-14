/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_1] [i_0] [i_0] [i_0] = 47156;
                        var_17 += ((112 <= (((-16992649217591282200 ? 56443 : 47156)))));
                        arr_10 [i_1] = ((207 ? 7 : (~183)));
                    }
                    var_18 += 9092;
                }
            }
        }
    }
    var_19 = 0;
    #pragma endscop
}
