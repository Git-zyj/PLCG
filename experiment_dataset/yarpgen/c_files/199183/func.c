/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199183
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
    var_18 -= ((/* implicit */_Bool) var_2);
    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)255), ((unsigned short)3)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (10599921882211962897ULL)))) ? (((((/* implicit */_Bool) 13055981072095160267ULL)) ? (var_0) : (((/* implicit */int) (unsigned short)255)))) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) (unsigned short)65280))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 |= max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -2023637728)));
        var_21 |= ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28672))))) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0]))) : (max((13106355089042819412ULL), (9225467704873902290ULL))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_14))));
        var_23 = ((/* implicit */int) arr_0 [(unsigned short)4]);
    }
    var_24 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max(((_Bool)1), (var_15)))) : (((var_17) - (((/* implicit */int) var_7))))))));
    var_25 |= ((/* implicit */unsigned long long int) var_0);
}
