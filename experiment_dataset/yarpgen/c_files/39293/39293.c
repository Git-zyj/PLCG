/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(16383, (min(((min(16383, 2048))), (min(49152, 1097575770))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_1] [i_1] = 63488;
                    arr_8 [1] [i_1] [i_2] = 1;
                }
            }
        }
    }
    var_19 = max(4146709659, (min(3197391525, ((max(49152, 1))))));
    var_20 = 4294967295;
    var_21 = 1;
    #pragma endscop
}
