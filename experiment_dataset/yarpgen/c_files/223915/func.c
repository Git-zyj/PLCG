/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223915
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 *= ((unsigned short) ((((/* implicit */_Bool) 1103258950U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))));
        arr_2 [i_0] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1173845432)))) ? (((/* implicit */int) (unsigned short)16397)) : (((/* implicit */int) (unsigned short)16397))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 += ((/* implicit */long long int) var_3);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
    }
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1705006430))));
    var_17 = (+(((/* implicit */int) var_9)));
}
