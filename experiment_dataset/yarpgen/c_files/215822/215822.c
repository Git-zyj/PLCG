/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] |= ((((10308 << (10308 - 10302))) ^ (-10309 - 0)));
                var_12 = ((((max((!-10325), -1))) || ((max(1835107050, -10325)))));
                var_13 = (min(var_13, ((max(var_4, (arr_5 [i_0] [i_1] [1]))))));
            }
        }
    }
    var_14 ^= (max((((((3623970198 ? 1250436811 : var_4))) ? (max(-27693, 0)) : ((13452 ? -8168 : -13442)))), var_9));
    var_15 = 3044530501;
    var_16 = var_7;
    var_17 = (min(var_17, var_0));
    #pragma endscop
}
