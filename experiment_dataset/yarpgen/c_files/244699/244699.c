/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = 6661456542600200011;
                    var_11 = -6916869765752694513;
                }
            }
        }
    }
    var_12 -= (~-42);
    #pragma endscop
}
