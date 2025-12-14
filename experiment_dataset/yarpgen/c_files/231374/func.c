/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231374
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
    var_16 *= ((/* implicit */unsigned char) (short)32740);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != ((-(((/* implicit */int) (unsigned char)185))))))) == (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_0 [i_0 + 3])))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            var_18 = ((((/* implicit */int) max((min((var_14), (((/* implicit */unsigned char) (signed char)-54)))), (((/* implicit */unsigned char) (signed char)-111))))) + (((/* implicit */int) (signed char)-1)));
            var_19 = (~(((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)185)))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 9223372036854775807LL)))) ? ((~(-9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2] [i_0])))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            arr_16 [i_3] [i_3] [i_3] |= ((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (short)-18969))))));
                            arr_17 [i_0] [i_2] [i_2] [(signed char)0] [i_2] [i_5] = ((/* implicit */signed char) var_2);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_22 [i_0] [(short)2] [13ULL] [2] [i_0] = arr_13 [i_0] [i_0 - 2];
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [(unsigned char)8] [i_0])))));
                            arr_23 [i_2] [i_2] [(_Bool)1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)203);
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 4; i_7 < 13; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */short) (+((-2147483647 - 1))));
                            var_23 = ((/* implicit */unsigned long long int) var_10);
                            var_24 = ((/* implicit */long long int) ((4052568564U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        }
                        arr_27 [i_0 + 1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 3852808049U)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_2] [(_Bool)1] [i_4 - 1]))))));
                        arr_28 [i_4 - 1] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_3] [i_4])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)31))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 4])))))));
                    }
                } 
            } 
        }
        arr_29 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */_Bool) 12061227183613806571ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 12287884069084565865ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (arr_19 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_15) : ((-(((/* implicit */int) var_10)))))))));
    }
}
