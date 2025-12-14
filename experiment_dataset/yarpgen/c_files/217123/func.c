/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217123
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */int) (!(var_8))))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned char) (_Bool)0))), (((((long long int) 1048575ULL)) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 24; i_4 += 2) 
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned long long int) ((signed char) (signed char)3));
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = (-(((unsigned int) (short)-6081)));
                    }
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        arr_21 [i_5] [i_5] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18446744073708503040ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (((var_1) >> (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) (signed char)-4)), (9223372036854775803LL))) : (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) (unsigned char)224)))))))));
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 9223372036854775805LL))) ? (((/* implicit */unsigned long long int) ((-9223372036854775804LL) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-13)) <= (((/* implicit */int) (signed char)-124))))))))) : (var_6))))));
                        var_13 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_20 [i_5] [i_0] [i_1] [i_0] [(unsigned char)5] [(unsigned char)5])) : (((/* implicit */int) var_8)))));
                        arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_0])) : ((((((+(((/* implicit */int) arr_6 [i_2] [i_2] [i_2])))) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_0] [i_5] [i_2 + 2] [i_0 - 1] [i_0])) - (167)))))));
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_11 [i_5] [i_1] [i_5 - 2] [i_5] [i_1] [i_1]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_5] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5 + 2] [16ULL] [16ULL] [16ULL])))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_25 [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (arr_13 [i_1] [i_1] [i_2] [i_2] [i_0] [i_2])))) != (max((arr_2 [i_2 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned char)255))))));
                        var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (var_1) : (arr_4 [i_0 - 1] [i_0 - 1] [i_2 + 2])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            var_16 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)10)) || (((/* implicit */_Bool) arr_8 [i_7])))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned long long int) var_8)))));
                            arr_29 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((1048594ULL) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))) + (15)))));
                        }
                        var_18 *= ((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_12 [i_0] [i_2 + 1] [i_6] [i_6] [(unsigned short)12])), (var_3))), (min((((/* implicit */unsigned int) var_10)), (var_1)))));
                    }
                    arr_30 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_8))))) || (((_Bool) 12197667316452729389ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) : (var_4)));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1] [i_9])) / (((/* implicit */int) var_5))))), (var_4)));
                                arr_36 [i_0] [i_1] [i_1] [i_0] [i_8] [i_9] = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_8] [i_0]);
                            }
                        } 
                    } 
                    arr_37 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [17ULL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (var_0) : (((/* implicit */unsigned long long int) ((long long int) var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-3))))) : (((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_9))))));
}
