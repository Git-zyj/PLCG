/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1073741823;
    var_11 = (-6486 * 0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 += (min(1, 55));
                    var_13 = 1;
                }
            }
        }
    }
    var_14 = (62 + 1);
    #pragma endscop
}
