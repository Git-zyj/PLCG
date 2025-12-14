/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229917
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
    var_12 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11975))) : (min((5774398286886991012ULL), (5774398286886991012ULL))))), (((/* implicit */unsigned long long int) -1640587331317271987LL))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1650564038)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)44954))));
        arr_3 [i_0] = ((/* implicit */short) max((-1640587331317271996LL), (((/* implicit */long long int) (_Bool)1))));
        var_13 *= ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 1])));
    }
}
