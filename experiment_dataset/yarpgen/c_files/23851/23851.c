/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 ^= (min(-7, ((-(arr_2 [i_1 + 1] [i_1] [i_1 + 1])))));
                var_16 = (max(var_16, ((((max(0, 7189245830594048007)))))));
            }
        }
    }
    var_17 = (max(var_17, (((min((min(0, 18446744073709551615), (~var_6))))))));
    #pragma endscop
}
