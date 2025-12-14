/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198981
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned char)0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((284204018U) * (((/* implicit */unsigned int) 1639859243))))));
        var_20 += ((/* implicit */long long int) max((((((/* implicit */int) ((_Bool) var_15))) >> (min((((/* implicit */unsigned int) (unsigned short)0)), (3763399497U))))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)17] [(short)17]))))) >= (((((/* implicit */int) arr_2 [11LL] [11LL])) - (((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_21 = ((/* implicit */int) ((var_17) != (((/* implicit */int) min((max((((/* implicit */unsigned short) var_15)), ((unsigned short)11))), ((unsigned short)0))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 8U))));
}
