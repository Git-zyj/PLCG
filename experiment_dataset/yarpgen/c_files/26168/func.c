/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26168
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
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 |= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((_Bool) var_14))) : (((((/* implicit */int) arr_2 [(short)3] [(short)3])) * (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-22215)))), (max(((-(((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)22343)) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43203)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (min((arr_7 [i_1]), (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) (-(arr_8 [i_0] [i_0]))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) min(((short)-9024), ((short)22242)))) + (9024)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) ((arr_5 [i_0] [i_2] [i_2]) && (((/* implicit */_Bool) min((var_11), (((/* implicit */signed char) (_Bool)1)))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (min((((/* implicit */int) arr_2 [i_0] [i_2])), (var_8))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_0]))))))));
            var_19 += ((/* implicit */unsigned short) var_10);
        }
    }
}
