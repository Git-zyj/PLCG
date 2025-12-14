/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202308
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
    var_11 = ((/* implicit */unsigned long long int) var_1);
    var_12 = ((_Bool) max((max((((/* implicit */unsigned int) (unsigned short)37164)), (441050020U))), (var_5)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(441050020U)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25024))) : (4555023798611240233ULL)))));
        var_14 = ((/* implicit */unsigned int) min((max((((/* implicit */int) max(((unsigned short)34085), ((unsigned short)31018)))), (2132238535))), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)6303))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned int) 1528368773);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_15 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)5067))));
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-25034)) ? (5648240200454890055ULL) : (((/* implicit */unsigned long long int) 1847449960U))));
        }
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((unsigned short)34156), ((unsigned short)48699)))), (((((/* implicit */_Bool) (short)-14452)) ? (15170186062919551415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34146)))))));
        var_16 = ((/* implicit */signed char) (+(((((11168139908385597303ULL) << (((((/* implicit */int) (short)25030)) - (24991))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179)))))));
    }
    var_17 *= ((/* implicit */short) var_0);
}
