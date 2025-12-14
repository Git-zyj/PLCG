/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 && 3100946617);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] &= (-10455698172962521022 && 10455698172962521005);
                arr_8 [12] [i_0] [i_1] = ((((((10455698172962521014 ? 16777215 : 10455698172962520986)) / -1)) <= (((((((1 ? 346321309 : 62))) && 7991045900747030580))))));
            }
        }
    }
    var_20 = ((((min(255, 41))) > (((((max(7991045900747030604, var_1))) ? (4166396185 >= 14803) : ((max(235, -18730))))))));
    #pragma endscop
}
