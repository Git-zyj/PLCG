/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201098
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned short)2])) || (((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) (short)28538)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((arr_5 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-8719)), ((unsigned short)53688))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((short)8709), (((/* implicit */short) var_12))))) % (((/* implicit */int) max((((/* implicit */short) var_12)), (var_13))))));
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_6))) >> (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) + (128)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */long long int) (short)8719);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (short)28538)) >= (((/* implicit */int) (short)-8712))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (short)8719))))) ^ (var_1))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_24 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_1));
}
