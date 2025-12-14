/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236146
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_11))));
    var_13 = ((/* implicit */_Bool) min((((unsigned long long int) ((unsigned int) (signed char)102))), (((/* implicit */unsigned long long int) min((min((var_5), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_2)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (var_2)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) (-(((-18LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
                    arr_7 [i_2 - 1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1] [i_1])))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)20)) + (((/* implicit */int) arr_8 [i_3]))))) ? (min((arr_9 [8]), (arr_9 [(signed char)2]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))) / (max((arr_9 [(unsigned short)4]), (((/* implicit */unsigned long long int) arr_8 [i_3])))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((/* implicit */int) ((min((-2108796219841062003LL), (((/* implicit */long long int) 63)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [12ULL]))))))))), (min(((~(-42))), (((/* implicit */int) var_1)))))))));
    }
}
