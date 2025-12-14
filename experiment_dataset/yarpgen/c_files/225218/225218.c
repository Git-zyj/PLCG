/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((var_5 ? (14340419636500005585 * -112) : ((((var_3 || var_0) & var_0))))))));
                var_14 = (max(var_14, (32767 | var_4)));
            }
        }
    }
    var_15 = (max(var_9, (((((max(var_6, 121)))) < 3820004810))));
    #pragma endscop
}
