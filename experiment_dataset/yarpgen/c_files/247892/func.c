/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247892
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (9223372036854775807LL))))))))));
                    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) | (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_0])) >= (((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */int) ((unsigned short) var_12)))))) ? (((((/* implicit */_Bool) min((1370827461U), (((/* implicit */unsigned int) (unsigned short)9345))))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)0), ((unsigned short)0))))))) : (max((18446744073709551615ULL), (arr_5 [11] [11] [11])))));
                    arr_8 [(unsigned short)16] [i_1] [17] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_1 [i_0] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33941))) + (-5568203851152304759LL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)62481)))) & (((/* implicit */int) (unsigned short)25191)))), ((~(((/* implicit */int) (_Bool)0))))));
}
