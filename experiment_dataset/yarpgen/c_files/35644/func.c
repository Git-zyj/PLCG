/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35644
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
    var_17 |= ((/* implicit */unsigned short) var_11);
    var_18 = ((/* implicit */signed char) min((var_16), (((/* implicit */unsigned long long int) var_2))));
    var_19 = ((/* implicit */int) var_1);
    var_20 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((var_16), (((/* implicit */unsigned long long int) min(((unsigned short)28131), (((/* implicit */unsigned short) var_13))))))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */short) var_3)))))));
        var_21 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) 2527525659U)), (arr_1 [i_0 + 1]))), (max((((/* implicit */long long int) (signed char)52)), (arr_1 [i_0 - 1])))));
        var_22 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_9)), (min((10832385968561710069ULL), (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_0 [(_Bool)1]), ((signed char)-123)))), (min((((/* implicit */long long int) arr_0 [(signed char)10])), (arr_1 [(unsigned char)2]))))))));
    }
}
