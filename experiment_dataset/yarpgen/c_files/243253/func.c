/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243253
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_0 [(unsigned short)11]) : (((((/* implicit */int) (short)32767)) << (((27730284291492892ULL) - (27730284291492889ULL)))))));
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) arr_1 [19U] [19U])) ? ((~(min((arr_0 [i_0]), (arr_0 [(short)8]))))) : (arr_1 [i_0] [8U])))));
        var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [(short)1])) ? (var_2) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((-280083789), (((/* implicit */int) (short)-1)))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            {
                var_20 *= (~(max((3561983006U), (((/* implicit */unsigned int) (short)-1)))));
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-31240))));
                                arr_16 [i_1] [i_1] [i_3] [(unsigned short)8] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) 1107211730U));
                                arr_17 [i_3] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_1 [i_1] [i_4])), (1107211725U))) >> (((((/* implicit */int) var_13)) + (3113)))));
                                var_22 *= max((var_4), (((/* implicit */short) ((unsigned char) arr_8 [i_3 - 1] [i_2] [i_4 + 2]))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (signed char)99)) : (610014077)))));
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned short) var_6);
}
