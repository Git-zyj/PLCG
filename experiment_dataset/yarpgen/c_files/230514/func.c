/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230514
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -4913505409425504056LL)) ? (((/* implicit */int) (unsigned char)53)) : (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))))), (min((4913505409425504069LL), (((/* implicit */long long int) var_7)))))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_2))));
    var_15 &= ((/* implicit */_Bool) (+(max(((~(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [(short)2] = ((/* implicit */short) (unsigned char)0);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((5457932563952000651ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
    }
}
