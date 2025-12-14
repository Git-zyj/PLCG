/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24621
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
    var_15 = ((/* implicit */long long int) 11842445183422263305ULL);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (max((((/* implicit */int) (unsigned short)31475)), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = min((min((((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31475)))))), (((var_1) / (((/* implicit */unsigned long long int) -1830638952707869273LL)))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) | (((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned int) var_3)))))) : (max((((unsigned int) arr_2 [i_0] [(unsigned char)7])), (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)34054)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [12LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_5 [i_1] [i_1]))), (arr_4 [i_1])))) ? (((((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)))) ? (max((var_1), (((/* implicit */unsigned long long int) 39316836)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 869864821)), (arr_5 [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1])) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 - 1]))))));
        arr_7 [i_1] = (_Bool)1;
    }
}
