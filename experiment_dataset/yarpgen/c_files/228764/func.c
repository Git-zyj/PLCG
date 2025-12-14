/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228764
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
    var_11 = var_10;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((3339252952U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43910))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50262))) : (max((1984ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9004644922259027684ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_1 [i_0]))))) & (min((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    var_13 = ((/* implicit */_Bool) var_9);
    var_14 = ((/* implicit */unsigned short) (unsigned char)31);
    var_15 = ((/* implicit */signed char) ((((((var_2) & (18446744073709551611ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)17965)))) < (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))) : (((((/* implicit */_Bool) var_2)) ? (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_2)))))));
}
