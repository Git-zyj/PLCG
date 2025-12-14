/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243492
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
    var_15 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_14);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned char) var_12));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [2LL] [2LL] &= ((/* implicit */int) arr_9 [i_2]);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) 18446744073709551593ULL));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_1))));
        var_20 |= (~(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_8 [8])))))));
    }
    var_21 = ((/* implicit */int) var_10);
}
