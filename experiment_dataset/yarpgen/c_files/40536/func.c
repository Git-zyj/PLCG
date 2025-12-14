/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40536
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_16 -= ((/* implicit */long long int) min((max(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1283)) || (((/* implicit */_Bool) (short)-1271))))))), (((/* implicit */unsigned short) (short)1283))));
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    var_18 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65507)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)8), (var_8))))) <= (min((((/* implicit */long long int) 1584698684)), (-3631344179849682824LL)))))))));
}
