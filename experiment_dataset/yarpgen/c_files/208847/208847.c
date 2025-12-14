/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 ^= ((12 ? ((1 ? 4467230834953343803 : 3020151036027510434)) : (min(4467230834953343823, 2796587713))));
                    arr_7 [i_1] = (!249);
                    arr_8 [i_0] = (4467230834953343798 != 221);
                    arr_9 [i_0] [i_1] [i_2] = ((4467230834953343798 ? 0 : 4467230834953343823));
                    var_12 = (arr_6 [i_0] [i_2] [6]);
                }
            }
        }
    }
    #pragma endscop
}
