/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200230
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned short)12708))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_1])) >= (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [(short)12])))));
        var_20 &= 3353716534U;
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) (-(arr_6 [i_1]))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (min((0U), (((/* implicit */unsigned int) (signed char)-19)))) : (((/* implicit */unsigned int) arr_4 [(unsigned char)10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [(short)6]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1744666898U)) + (arr_9 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)16] [(unsigned char)16]))))))) : (((((/* implicit */_Bool) var_9)) ? (941250755U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)6] [(signed char)6]))))))));
        arr_12 [i_2] = ((937654499) | (((/* implicit */int) (short)32767)));
        var_21 ^= ((/* implicit */unsigned short) (+(min(((~(var_14))), (((/* implicit */unsigned int) (_Bool)1))))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((int) (signed char)-19))))))))));
    var_23 = ((/* implicit */unsigned long long int) var_5);
    var_24 |= var_6;
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(unsigned char)3] [i_4])) ? (arr_17 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))))))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (arr_4 [(_Bool)1])))) * (4294967290U))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) var_12))))) : (3353716534U))))));
                        arr_22 [i_6] = ((/* implicit */unsigned short) arr_13 [i_5] [i_6]);
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_27 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (var_8))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5] [i_6])))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(unsigned char)6])) ? (arr_9 [i_5] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5043))))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) 
                        {
                            var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-16445)) + (((/* implicit */int) (short)-32757))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_28 [10U]) + (((/* implicit */int) arr_14 [i_3]))))))))));
                        }
                        var_31 += ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_5])) << (((((((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_28 [(unsigned short)2]) : (((/* implicit */int) arr_15 [i_6] [i_4])))) + (1269444798))) - (9)))));
                    }
                    arr_30 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) var_13))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_33 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_4]);
                    /* LoopNest 2 */
                    for (long long int i_10 = 4; i_10 < 11; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_32 = (i_10 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((((/* implicit */_Bool) arr_24 [9U] [i_4] [i_9] [i_10] [i_11])) ? (arr_4 [i_10]) : (((/* implicit */int) var_7)))) + (1131041943)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((((((/* implicit */_Bool) arr_24 [9U] [i_4] [i_9] [i_10] [i_11])) ? (arr_4 [i_10]) : (((/* implicit */int) var_7)))) + (1131041943))) + (396446777))))));
                                arr_38 [i_3] [i_4] [i_10] [i_10 - 3] [i_11 - 2] = ((/* implicit */unsigned short) ((arr_9 [i_11 + 1] [i_10 + 2]) + (arr_9 [i_11 - 3] [i_10 + 1])));
                                arr_39 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_36 [i_10] [i_10 - 3] [i_10] [i_10 + 2] [i_11 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))));
                            }
                        } 
                    } 
                    var_33 ^= ((/* implicit */long long int) ((short) 65535));
                    arr_40 [(unsigned char)6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_24 [i_3] [i_3] [i_4] [i_9] [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_1 [i_9] [i_3])) : (((/* implicit */int) arr_1 [i_4] [i_4]))))));
                    var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_20 [i_3] [i_3] [i_3] [i_3])))));
                }
                arr_41 [i_3] [i_3] [i_3] = ((unsigned long long int) arr_25 [i_3] [i_4] [i_3] [(unsigned char)12]);
                arr_42 [i_3] [i_4] = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_37 [i_3] [i_4])) << (((/* implicit */int) (unsigned char)10)))));
            }
        } 
    } 
}
