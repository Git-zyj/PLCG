/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231384
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
    var_11 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)247)) : (var_0)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (short)0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) min((max((var_1), (((/* implicit */unsigned short) var_3)))), (min((var_1), (((/* implicit */unsigned short) (unsigned char)237))))))), (min(((~(((/* implicit */int) (unsigned char)251)))), (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) min(((~(arr_1 [i_0 + 1]))), (((/* implicit */unsigned long long int) max((8LL), (((/* implicit */long long int) var_3)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)10)), (18195544906584590880ULL)))) ? (min((((/* implicit */int) (unsigned char)28)), (264629406))) : (((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) (_Bool)1))));
    }
}
