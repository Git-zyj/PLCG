/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213413
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
    var_13 *= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))) >= (((((/* implicit */int) (unsigned short)47811)) & (((/* implicit */int) (unsigned short)29923))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)40845)) ? (((((/* implicit */_Bool) ((7423376169926519820ULL) << (((((/* implicit */int) (unsigned short)5481)) - (5478)))))) ? (4637159987870403062ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)58533))))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7003))) % (6768511928509439924ULL))), (4144946782887394090ULL))));
    }
}
