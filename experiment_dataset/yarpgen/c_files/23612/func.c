/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23612
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_5)))) : (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)-32747))))))) ? (((/* implicit */int) ((short) max((2451844257U), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [(short)2]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (14664332626964869037ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (((var_8) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            var_17 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [4] [(short)14] [i_4 - 1])) : (((/* implicit */int) arr_8 [(short)4]))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (var_10)));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_4 + 1] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_3 - 2] [i_3 + 1])) : (((/* implicit */int) var_12)))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) arr_14 [i_5] [i_5 - 1] [i_5] [i_5] [i_1]));
                            arr_20 [i_0] [i_1] [i_0] = ((/* implicit */short) ((signed char) arr_14 [i_1] [i_5] [i_3 + 3] [i_2] [i_1]));
                        }
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) -6747611601595722834LL)) ? (7360121271952617737ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [(short)0]))))))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 18446744073709551608ULL))));
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 - 2] [i_3] [i_3] [i_3 + 4]))) * (((((/* implicit */_Bool) arr_1 [i_3] [i_0])) ? (arr_18 [i_0] [10ULL] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) 2451844245U))))));
                    }
                } 
            } 
            arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) (short)13210))));
        }
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
        var_25 |= ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [(unsigned char)12] [(unsigned char)12])) + (2147483647))) << (((((((/* implicit */int) arr_5 [(_Bool)1] [i_0] [(short)10])) + (17977))) - (4)))));
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)25)), (arr_0 [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) || (((/* implicit */_Bool) arr_4 [i_6] [i_6])))))) : (((((/* implicit */_Bool) (short)16357)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (12U))))) <= (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned short)0)))) << (((((((/* implicit */_Bool) (unsigned short)43510)) ? (14664332626964869037ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (14664332626964869018ULL))))))));
        arr_24 [i_6] = ((/* implicit */int) arr_2 [i_6] [i_6]);
        var_27 = ((/* implicit */unsigned short) (signed char)-108);
    }
    var_28 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)29774)) : (((/* implicit */int) var_13)))))))), ((((+(16ULL))) | (((/* implicit */unsigned long long int) var_15))))));
}
