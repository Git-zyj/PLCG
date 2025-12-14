/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_8 ? (((3867693847 ? 1 : 1))) : ((var_4 ? 3867693847 : 233)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = (((arr_2 [i_1 + 1]) ? 1301119003 : ((min((arr_2 [i_1 - 2]), 63)))));
                var_12 &= (max(3867693847, -25));
                var_13 -= 18436224047573573104;
                var_14 = -3658762105805377816;
            }
        }
    }
    var_15 = (min(var_15, (-32 / 3268573196018975311)));
    #pragma endscop
}
