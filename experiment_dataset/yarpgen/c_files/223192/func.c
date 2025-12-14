/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223192
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))), ((-(arr_0 [i_0] [i_0])))));
        var_11 &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) != (18446744073709551615ULL))) ? (((/* implicit */int) (short)1024)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) > (arr_0 [i_0] [i_0]))))));
        var_12 = ((((/* implicit */int) (short)8191)) / (735523055));
    }
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)121)) ? (735523035) : (735523050))))) < (min((-735523038), (735523052)))));
    var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-121)), (2124731933)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
}
