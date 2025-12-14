/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_3;
    var_17 -= (!var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((max((-7208655262916573972 | 55594), 24)));
                    arr_9 [i_0] [3] [i_2] [i_0] = (549825847 | 8191);
                }
            }
        }
    }
    #pragma endscop
}
