/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232824
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
        var_14 = ((unsigned short) (((~(((/* implicit */int) var_2)))) & (((/* implicit */int) max((((/* implicit */short) var_8)), ((short)11777))))));
        var_15 = ((/* implicit */unsigned short) -1363274139);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (8708915231147257885ULL))) / (8708915231147257895ULL)))) ? (max(((((_Bool)0) ? (((/* implicit */int) (unsigned short)15816)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_7 [i_1 - 2])))) : ((+(((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_5 [i_1 + 1])) * (((((/* implicit */_Bool) -1909380343)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))))) ? (((unsigned int) 2147483647)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) 1179211730264755916LL))) < (2147483640))))))))));
            }
        } 
    } 
}
