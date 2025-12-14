/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209855
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(18446744073709551615ULL))))));
    var_11 = ((/* implicit */unsigned short) (-(var_5)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [0ULL] [0ULL] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                    arr_10 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) arr_2 [i_0])))))))), (((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_5 [i_0] [i_0 + 1]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) arr_12 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((arr_7 [i_3] [i_2]) << (((arr_7 [18ULL] [i_2]) - (3085540302544453840ULL)))))));
                        var_13 = ((/* implicit */int) ((var_6) * (((/* implicit */unsigned long long int) arr_8 [i_1] [i_3 - 1] [i_3 - 1] [i_1]))));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))))) : (((((/* implicit */long long int) var_7)) + (var_5)))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((short) (unsigned char)73));
                        var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_12 [i_0 - 1])) && (((/* implicit */_Bool) arr_12 [i_0 - 1])))), ((!(((/* implicit */_Bool) (unsigned short)4095))))));
                        arr_16 [i_0] [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) (unsigned short)61435))))) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_13 [i_2] [17ULL] [i_2] [i_4] [18LL] [i_2])))) : (((/* implicit */int) arr_4 [i_1] [i_1] [4U])));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)183))));
                        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (6150548887579882979LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [5ULL] [i_1] [i_2] [i_2] [i_5 - 1] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) <= (arr_8 [i_0 + 1] [i_0] [4LL] [i_0]))))) : ((~(var_4))))) | (((((413263302U) <= (((/* implicit */unsigned int) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_17 [i_0] [i_0 - 1] [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-112))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)74)) & (((/* implicit */int) var_0))))) ^ (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (unsigned short)34035)))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_18 [16] [16] [16] [16])))) : (((/* implicit */int) arr_12 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_21 = ((unsigned char) (!(((/* implicit */_Bool) arr_21 [i_6]))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-20290)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (short)20292))));
    }
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        arr_24 [(short)5] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44204)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4111031692U)))) : (((((/* implicit */_Bool) arr_7 [i_7] [i_8])) ? (18005502057699210869ULL) : (((/* implicit */unsigned long long int) -836258876838502524LL))))));
            arr_27 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8])) ? ((~(3881703994U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8] [i_7] [i_8] [i_8]))))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_24 *= ((/* implicit */_Bool) (unsigned short)63117);
            arr_32 [i_7] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_9]))) : (((((/* implicit */_Bool) 5094298519908270532ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1079956791))))));
            arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_14 [i_9] [i_9] [(short)18] [i_9]);
        }
        arr_34 [(unsigned short)8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74)))))) >= (var_4)));
    }
}
