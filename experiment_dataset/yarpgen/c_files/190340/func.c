/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190340
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_3 [i_1] [i_1])) * (max((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_1])))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_9)), (var_2)))), (70931694131085312ULL)))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (1524282043U)));
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 498569052)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_14)))), (min((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0 - 1]))) : ((-(var_3)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((max((((((/* implicit */unsigned long long int) var_15)) & (7229897995042362490ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-3811871897115057460LL) : (var_14)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_20 *= ((/* implicit */_Bool) 2782618923U);
        var_21 = ((/* implicit */unsigned char) max((arr_3 [(_Bool)1] [(_Bool)1]), (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_2]))))));
    }
}
