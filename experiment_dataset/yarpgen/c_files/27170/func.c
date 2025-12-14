/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27170
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
    var_10 = ((/* implicit */unsigned char) (+((+(((unsigned long long int) var_8))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0] [(unsigned short)21]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((signed char) var_8))))));
        arr_3 [i_0] = var_4;
        var_12 += ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5)))) : (min((((/* implicit */unsigned int) (unsigned short)10860)), (417999914U))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_5));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        var_13 = ((unsigned int) (+(101352822U)));
        var_14 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) var_0)))));
        var_15 += ((/* implicit */int) var_6);
        var_16 = ((/* implicit */unsigned char) var_6);
    }
    var_17 &= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) ((unsigned long long int) var_2))))));
}
