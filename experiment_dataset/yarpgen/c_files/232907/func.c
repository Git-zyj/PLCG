/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232907
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
        var_10 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
        var_11 *= ((/* implicit */unsigned char) ((max(((~(2405736178U))), (((/* implicit */unsigned int) (_Bool)1)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
    }
    var_12 = max((((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0))))), ((short)-32755)))), (min((((/* implicit */unsigned int) (short)32725)), ((-(var_8))))));
}
