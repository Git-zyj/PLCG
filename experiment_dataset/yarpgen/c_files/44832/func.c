/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44832
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (short)22668)) ? (((/* implicit */int) (short)7680)) : (((/* implicit */int) (short)7677)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (2013265920ULL)))) ? (((long long int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) (signed char)-28))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)21))))) ? (min((((/* implicit */long long int) arr_0 [i_0])), (-15LL))) : (((/* implicit */long long int) (+(var_4))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_2 [(unsigned short)12] [i_0])), (0U))) > ((+(4294967292U))))))));
    }
    var_20 = (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (8034699083465079945LL)))) && (((/* implicit */_Bool) var_17))))));
    var_21 = ((/* implicit */long long int) max((((((((/* implicit */unsigned int) ((/* implicit */int) (short)7699))) * (4294967288U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (min((4294967294U), (((/* implicit */unsigned int) (_Bool)0))))));
}
