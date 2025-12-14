/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234909
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)32256)), (10707904735826861059ULL)));
        var_17 ^= ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 = var_2;
    var_20 = max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (6076575948187857769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33291))) ^ (var_14))))))), (((((/* implicit */int) var_5)) >> (((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_15))))) - (25525))))));
}
