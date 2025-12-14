/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201742
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (+((((-(-1520889425))) * (((((/* implicit */_Bool) arr_1 [18LL])) ? (((/* implicit */int) arr_0 [(signed char)14])) : (((/* implicit */int) (unsigned char)255)))))))))));
        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((36028797018963967ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (unsigned char)4))))))))));
    }
    var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_4), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((var_5) - (16518940876770884046ULL)))))) : ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1920))))))), (min(((~(var_9))), (min((((/* implicit */unsigned long long int) 3625242510U)), (var_4)))))));
}
