/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24236
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
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) 1903362007)) || (((/* implicit */_Bool) var_1))))), (var_13)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) 1903362007)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) -1903362007)) : (var_5)))) ? (((/* implicit */int) ((signed char) var_2))) : ((~(((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)-45)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_2 [(signed char)4] &= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_1 [4LL]))))));
        var_20 ^= ((/* implicit */long long int) min(((unsigned char)23), (((/* implicit */unsigned char) (_Bool)1))));
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_4))))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))))));
}
