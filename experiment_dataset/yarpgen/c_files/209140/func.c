/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209140
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
    var_15 = (_Bool)1;
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 |= ((/* implicit */_Bool) (short)-4086);
        var_17 = ((/* implicit */int) ((_Bool) ((unsigned short) var_11)));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_6))));
        var_19 = ((/* implicit */short) min((var_9), (var_9)));
        var_20 = var_5;
    }
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        var_21 -= ((/* implicit */short) var_5);
        var_22 = var_0;
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_23 += ((/* implicit */signed char) min(((short)4), (((/* implicit */short) (signed char)19))));
        arr_9 [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    }
}
