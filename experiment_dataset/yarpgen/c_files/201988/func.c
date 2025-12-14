/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201988
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
    var_20 = ((/* implicit */unsigned int) var_17);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) -1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) 0ULL))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [14ULL] [i_0 - 3]);
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))))) ^ (((min((var_11), (((/* implicit */unsigned long long int) (signed char)-32)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16575)))))));
        arr_5 [i_0] &= (short)-1;
    }
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
}
