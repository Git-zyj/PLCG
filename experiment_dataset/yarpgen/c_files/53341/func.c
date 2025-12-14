/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53341
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-1))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (max((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (1152912708513824768ULL))), (((/* implicit */unsigned long long int) (!(arr_2 [i_0] [(unsigned char)20]))))))));
                    var_19 ^= ((/* implicit */short) arr_4 [(unsigned short)11] [i_1] [i_2]);
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_20 += ((/* implicit */short) (!(((1152912708513824790ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    var_21 = (+(((((/* implicit */_Bool) arr_1 [i_0] [23U])) ? (arr_1 [i_1] [i_0]) : (arr_1 [1] [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */short) (((~(arr_3 [i_3]))) & (((unsigned int) var_13))));
                        var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((short) var_0))) - (((/* implicit */int) ((unsigned short) var_0)))))));
                        var_24 ^= ((unsigned int) ((var_11) < (((((/* implicit */_Bool) -4766514064914067152LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned char)24] [(short)5] [(unsigned char)15] [10LL]))) : (arr_13 [(short)3] [9LL] [(unsigned short)6] [(short)15] [8] [14ULL])))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 24; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [(unsigned short)22] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(var_9)))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_10)) & (var_9)))), (((long long int) arr_8 [(unsigned char)19] [(unsigned char)22]))))));
                        var_26 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_10 [i_5 - 3] [(unsigned char)15] [i_5 + 1] [(short)2])))));
                    }
                }
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [(signed char)5])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [9U] [(_Bool)1] [7])))))) ? (((((var_5) % (arr_3 [i_1]))) / (((unsigned int) 17293831365195726847ULL)))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) arr_8 [(unsigned char)4] [18]))))) & (max((((/* implicit */unsigned int) (unsigned short)0)), (var_2)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) max((((var_2) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)32742))))))), (((/* implicit */unsigned int) var_0))));
    var_29 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1333222426)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) ((short) (signed char)11))))));
}
