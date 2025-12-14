/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218397
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max(((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_18)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))) : (((/* implicit */unsigned long long int) ((var_2) ? (var_4) : (var_17)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2511488110035216981LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_13)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (var_18))))))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) (unsigned char)24))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (var_16) : (((/* implicit */long long int) ((int) var_5))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) min((var_21), (arr_2 [i_0 + 1] [(unsigned short)8])));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)146)))), (((/* implicit */int) var_5))))), (max((((arr_0 [i_0]) % (arr_0 [i_0]))), (arr_0 [i_0 - 1])))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)148))))) : ((~(arr_1 [i_0]))))));
        var_23 = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) + (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) arr_1 [i_0])));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            {
                arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(var_4)))))) ? (((((/* implicit */int) arr_5 [i_1] [i_1])) >> (((var_17) + (731457286))))) : ((~((~(((/* implicit */int) var_3))))))));
                arr_10 [i_2] = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
}
