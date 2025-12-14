/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211984
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) 1155779658U)), (((((/* implicit */_Bool) ((long long int) 1LL))) ? (((long long int) (unsigned short)57025)) : ((+(5945218673905701922LL)))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) max((-1527135959), (var_3)))) : ((~((~(1ULL))))))))));
                var_21 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((signed char) max(((-(var_12))), (((/* implicit */unsigned int) ((int) var_15))))));
    var_23 |= min((((/* implicit */unsigned long long int) min((min((267051256179963808LL), (((/* implicit */long long int) 1438465416U)))), (var_0)))), (((unsigned long long int) ((((/* implicit */_Bool) 8850722866032445134LL)) ? (0LL) : (((/* implicit */long long int) 1108137339U))))));
}
