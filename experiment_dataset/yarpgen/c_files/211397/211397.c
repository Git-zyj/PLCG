/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((!(14746 | 108))))));
    var_15 = ((((min((-109 * -100), (min(10390844164185644639, -108))))) ? ((-((87 ? 108 : 15360)))) : (--95)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_16 += (((((216607103 ? 6984040222027655814 : (23 / 108)))) ? (((min(16777216, 108)) >> (-108 && 15835399576752671020))) : (~3668817076)));
                var_17 = (max(var_17, 4078360181));
                var_18 = ((((-15361 ? 87 : 16179390428281012262)) % ((((!(!-45)))))));
            }
        }
    }
    #pragma endscop
}
