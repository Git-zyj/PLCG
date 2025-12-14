/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44520
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
    var_16 = ((/* implicit */unsigned char) (!(((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)125)))) > (((/* implicit */int) max(((signed char)69), (((/* implicit */signed char) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) (unsigned char)35))) != (((((((/* implicit */_Bool) (unsigned char)221)) ? (3369368801U) : (((/* implicit */unsigned int) 2147483647)))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_2] [i_3])) + (((/* implicit */int) (unsigned char)185)))))))));
                                arr_13 [i_0 + 1] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-65)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))) : (1689812668U)))));
                                arr_14 [i_3] [i_3] [3ULL] [i_3] = arr_1 [3] [i_1];
                                arr_15 [i_0] [i_3] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 + 2] [i_3 + 1])) && (var_15)))));
                                var_17 = ((/* implicit */signed char) arr_6 [i_4]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 4; i_5 < 10; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_1] = ((/* implicit */_Bool) (~(0LL)));
                        arr_19 [i_0] [i_0 + 1] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_12))))) >> (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3369368801U)))));
                            arr_24 [i_6] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1]))));
                            arr_25 [(unsigned char)4] [i_2] [i_2] |= ((/* implicit */unsigned short) ((long long int) arr_4 [i_5] [i_5 - 1]));
                            arr_26 [i_1] [i_1] [(unsigned char)3] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_0 + 2])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_31 [i_0] [i_1] [i_7] [i_5] = ((/* implicit */signed char) ((arr_3 [i_0 + 3]) ? (((/* implicit */int) arr_10 [i_0 - 1])) : (((/* implicit */int) arr_20 [i_7] [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_5 + 1]))));
                            var_18 = ((/* implicit */_Bool) ((unsigned int) (signed char)-21));
                            var_19 = ((/* implicit */_Bool) ((signed char) var_9));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = arr_17 [i_1] [i_2] [i_5] [i_8];
                            arr_35 [8] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_12);
                            var_20 = ((/* implicit */_Bool) var_3);
                            var_21 = ((/* implicit */unsigned long long int) var_11);
                        }
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_39 [i_0] [i_0] [i_1] [i_2] [i_9] = ((/* implicit */_Bool) arr_21 [i_9] [i_2]);
                        arr_40 [i_9] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_6);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        arr_44 [i_0] [i_1] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(var_15)))), (max((min((((/* implicit */unsigned long long int) var_3)), (arr_33 [i_0] [i_0] [(_Bool)0] [i_0 + 3] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 2; i_11 < 10; i_11 += 4) 
                        {
                            arr_48 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)2] [i_11])) & ((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0 - 1]))))));
                            var_22 = ((/* implicit */signed char) arr_27 [i_0 + 3] [i_11]);
                            var_23 *= ((/* implicit */signed char) ((min((((var_5) || (((/* implicit */_Bool) var_4)))), (var_15))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (short)8790)))))));
                        }
                    }
                    arr_49 [i_0] [i_1] = ((/* implicit */signed char) var_8);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */signed char) max((var_14), (var_14)))))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), ((unsigned char)221)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (var_10)))));
}
