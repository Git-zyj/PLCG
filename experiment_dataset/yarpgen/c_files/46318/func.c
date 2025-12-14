/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46318
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (min((((/* implicit */long long int) var_10)), (arr_0 [(signed char)1])))))), (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((1836869097U), (2458098199U)))) || (((/* implicit */_Bool) arr_0 [i_0])))))) <= (max((2458098220U), (((/* implicit */unsigned int) (unsigned short)6))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) + (((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] &= ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            arr_15 [i_2] [(unsigned char)8] = ((/* implicit */unsigned char) arr_1 [(unsigned char)16] [i_2]);
            arr_16 [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_11 [(unsigned short)9])), (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_3])) ? (min((((/* implicit */unsigned int) arr_1 [i_2] [(short)8])), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_3])))))));
        }
        var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))) : (arr_13 [i_2] [i_2])))) ? (((/* implicit */int) var_7)) : (arr_10 [i_2])))));
    }
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_11))))))) || (((/* implicit */_Bool) var_6))));
    var_20 *= ((/* implicit */unsigned int) var_5);
    var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))) >> (((((/* implicit */int) var_7)) + (22596))))), (((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_1)))) >> (((((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (1419712612U)))))));
}
