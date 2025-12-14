/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36993
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
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [(unsigned char)10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))) ? (((/* implicit */long long int) arr_2 [i_0 + 1])) : (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0]))))))) ? (max((-1622135236171954417LL), (5756499406883769039LL))) : (((/* implicit */long long int) var_7))));
        arr_4 [i_0 + 1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)29409))) ? (((/* implicit */unsigned int) (-(arr_2 [i_0])))) : (max((max((var_5), (((/* implicit */unsigned int) arr_2 [i_0])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-29391)))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    var_11 = (-(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */int) (signed char)-43)) ^ (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5] [13U] [i_1 - 1])) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_9)) ? (-1) : (-2147483638))))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) ((arr_15 [i_2] [i_2] [i_2] [i_5]) < (arr_11 [17ULL] [17ULL] [(signed char)4])))) ^ (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_8 [i_2] [i_3] [(unsigned char)14])) : (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_1 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)29409)) : (((/* implicit */int) (unsigned char)11)))) == (((/* implicit */int) arr_13 [i_1] [i_1 + 1]))));
    }
    var_15 = min((1287443965U), (var_10));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (unsigned char)134))))))));
    var_17 = ((/* implicit */unsigned char) var_3);
}
