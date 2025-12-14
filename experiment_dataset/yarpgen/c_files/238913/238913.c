/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((-((min((min(0, 1)), 1)))));
                var_18 ^= 1;
                arr_7 [i_0] [10] = ((1 ? ((751044670 ? -5657660025461841409 : 5657660025461841409)) : 1254118190));
            }
        }
    }
    var_19 = (max(60512, (min((min(3128724814, 1)), 939262709))));
    var_20 = ((~(min(((1 ? 6366663465461016621 : 1)), ((min(0, 1)))))));
    var_21 = (max(1, 14));
    #pragma endscop
}
