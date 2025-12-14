/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29221
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
    var_10 = ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (short)5914)))) : ((+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-87)), ((unsigned char)146)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))));
        var_12 = ((/* implicit */unsigned char) ((signed char) (_Bool)0));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
        var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((677098270U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) max((var_8), ((unsigned char)123))))))));
    }
}
