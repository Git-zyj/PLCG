/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((max(-4294967295, 0)))));
    var_14 = (max(var_1, (max((((4294967295 ? 65535 : 124))), -7))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [2] [i_2] = ((max(32767, 108)));
                    var_15 = (4294967278 + -2);
                    var_16 = (((((225 ? 65514 : 1144767893))) || 0));
                    var_17 &= max(4294967295, -109);
                }
            }
        }
    }
    #pragma endscop
}
