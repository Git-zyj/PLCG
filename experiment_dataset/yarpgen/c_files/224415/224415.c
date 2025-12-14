/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((max(-1127338160, 1)) <= ((((var_10 ? var_10 : var_4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 |= ((!(((min(14459063614864742003, 9574283968188348170)) <= 255))));
                var_13 = (2147483647 >= 1);
            }
        }
    }
    #pragma endscop
}
