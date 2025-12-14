/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247567
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 |= ((/* implicit */signed char) arr_0 [17ULL] [i_0]);
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((1144281189), (((/* implicit */int) (short)14048))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) -2638051294345648772LL)), (12618101088303120244ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)2)))))));
        var_15 = ((/* implicit */signed char) 2005046763U);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_16 |= ((/* implicit */_Bool) (unsigned char)133);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(arr_4 [i_1]))))));
    }
    var_18 = ((/* implicit */unsigned short) var_0);
}
