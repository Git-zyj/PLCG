/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204609
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
    var_10 -= ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 *= ((/* implicit */_Bool) min((((long long int) var_4)), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)))), ((+(((/* implicit */int) var_9)))))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */short) ((unsigned short) (unsigned short)32300));
        var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */int) max(((unsigned short)9151), (((/* implicit */unsigned short) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (_Bool)1))))) == (max((((/* implicit */long long int) (_Bool)1)), (var_4))))))));
        var_13 *= ((/* implicit */short) (~((+(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_14 ^= ((/* implicit */short) var_1);
    var_15 |= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (max((((/* implicit */long long int) (_Bool)1)), (-11LL))))) >> (((((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) (unsigned char)37)), (6346435556632613746LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3623315179708506348LL)))))))) - (6346435556632613733LL)))));
}
