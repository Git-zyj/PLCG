/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20836
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */int) (unsigned short)15130)), (min((arr_1 [i_0]), (arr_1 [i_0]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_3)))))));
        arr_5 [i_0] [i_0] = (!(((/* implicit */_Bool) max((18446744073709551607ULL), (((/* implicit */unsigned long long int) ((5U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    }
    var_13 = ((/* implicit */int) ((((((((/* implicit */int) (unsigned short)35682)) >= (2147483647))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_11)))))) : (var_10))) != (((/* implicit */unsigned long long int) ((((1142667475) != (((/* implicit */int) (short)12964)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_14 |= ((/* implicit */unsigned char) ((333339306U) << (((18446744073709551606ULL) - (18446744073709551577ULL)))));
}
