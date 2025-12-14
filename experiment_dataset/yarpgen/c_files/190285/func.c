/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190285
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [(signed char)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(6852440881042704160LL)))) : (((unsigned long long int) arr_4 [i_0 + 1]))));
                    var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) 4611686018427387903LL)) ? (-7040952817054408129LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9697)))))))) : (max((max((((/* implicit */unsigned long long int) var_9)), (var_5))), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned short) ((_Bool) var_1));
}
