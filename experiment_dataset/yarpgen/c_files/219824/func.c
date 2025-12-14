/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219824
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 *= ((int) ((((/* implicit */int) var_10)) << ((-(((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((unsigned int) (~(1951699968209394357ULL)));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((short) (short)(-32767 - 1))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(13961729523303172096ULL)));
    }
    var_23 = ((var_16) | ((~((-(299118498939457299ULL))))));
}
