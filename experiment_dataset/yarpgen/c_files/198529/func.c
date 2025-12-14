/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198529
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) var_14);
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)74)) ? (((long long int) (signed char)-74)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-67)), ((unsigned char)3)))))));
    }
    var_20 = ((/* implicit */unsigned short) max((min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_4)))), (((/* implicit */int) ((9227759138561547068ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))));
}
