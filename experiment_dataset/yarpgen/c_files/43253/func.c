/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43253
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
    var_10 ^= ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_8))))) ? (((var_1) >> (((13373948950591000579ULL) - (13373948950591000554ULL))))) : (((/* implicit */unsigned int) arr_1 [i_1] [i_0])))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && ((_Bool)1))) && ((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)65535))))));
                    var_13 |= (+(max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1]))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) 4294967295U))));
                }
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((4294967295U) ^ (4294967294U))))));
                var_16 += ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (var_4))))))) != (((/* implicit */int) ((signed char) (_Bool)1))));
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)84)) | (((/* implicit */int) (signed char)84))));
    var_18 += ((/* implicit */short) ((5072795123118551037ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((13373948950591000579ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) ((var_1) * (2474221270U))))))))));
}
