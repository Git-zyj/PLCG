/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max((((((-8767948191108764853 ? -8767948191108764866 : 1646528141))) ? 8767948191108764852 : (arr_1 [i_0] [11]))), var_6));
                arr_6 [i_1] [i_1] = (((max((arr_3 [i_0 - 2] [i_1]), (-28 + var_0))) >> ((((var_9 ? (12123264689114943647 - -8406282925025414260) : (((max(-28, (arr_0 [i_1] [8]))))))) - 2082803540430806287))));
                var_16 *= max(((max(((-(arr_3 [8] [i_0]))), 28))), 1);
            }
        }
    }
    var_17 *= var_14;
    #pragma endscop
}
