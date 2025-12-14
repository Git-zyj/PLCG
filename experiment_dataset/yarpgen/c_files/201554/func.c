/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201554
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((((long long int) var_4)) > (((/* implicit */long long int) var_10)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)27584)))))));
        arr_2 [(signed char)10] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-27567)) ? (((/* implicit */int) (short)-27586)) : (((/* implicit */int) var_2)))) < ((~(arr_1 [i_0])))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_6))))), ((+(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (short)-24152)) ? (((((/* implicit */_Bool) (short)27594)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (99700597U))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)27564))) % (arr_0 [i_0 - 2]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_14 |= ((/* implicit */_Bool) (-(arr_4 [i_1])));
        arr_5 [0U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(short)6])) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (4195266699U))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >> (((((((/* implicit */_Bool) (short)-27574)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15047))))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_4])) / (((/* implicit */int) var_5)))))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */_Bool) arr_6 [(signed char)10])) ? (99700597U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [(short)23]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_22 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_6 + 1] [i_6 - 1] [i_6 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */int) (short)-27571)) / (((/* implicit */int) (short)-26431)))) : (((/* implicit */int) var_2))));
                    var_17 = ((/* implicit */unsigned char) ((int) (short)3840));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_18 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) / (arr_13 [i_5])));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_28 [i_5] [1U] [i_7] [i_8] [i_9] = ((/* implicit */short) ((arr_10 [i_6 + 1] [i_6 + 3] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_19 |= ((/* implicit */unsigned short) arr_11 [i_6 - 1] [i_6 + 2] [i_6 - 1]);
                            var_20 |= ((/* implicit */int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)32752)))));
                            var_21 |= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_10))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) var_0)) + (((((((/* implicit */int) arr_6 [i_5])) + (2147483647))) << (((((/* implicit */int) var_6)) - (59254))))))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), ((+(var_4)))));
                            arr_31 [i_7] [i_7] [i_7] [i_6 + 3] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))) - (((((/* implicit */_Bool) var_10)) ? (arr_8 [(short)2] [(signed char)23] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5])))))));
                            var_24 |= ((/* implicit */unsigned char) 2611048652U);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_10] [7] [i_6 + 1] [i_6 + 1] [i_6 + 1])))))));
                            arr_32 [(short)17] [(signed char)8] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 + 3] [i_6 + 3])) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((short) var_4)))));
                        }
                        arr_33 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((arr_14 [i_5] [i_6 - 1]) ? (((/* implicit */int) arr_14 [i_5] [i_6 - 1])) : (((/* implicit */int) arr_14 [i_8] [i_6 - 1]))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((((/* implicit */int) (short)-14182)) + (14202))) - (20))))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-105)) / (((/* implicit */int) var_6))))) | (((((/* implicit */_Bool) (short)27578)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (636476686U)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(signed char)18] [9U] [9U] [9U] [i_5]))) % (arr_12 [i_5] [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27574))))) : (arr_21 [i_5] [i_5])))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (long long int i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((var_8), (((/* implicit */short) ((((/* implicit */int) (short)27567)) <= (((/* implicit */int) var_3))))))))));
                    arr_40 [i_5] [i_12] = ((/* implicit */unsigned int) (short)9365);
                }
            } 
        } 
        arr_41 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-27568)))) + (arr_18 [i_5] [i_5] [i_5])));
        var_28 |= ((/* implicit */unsigned int) var_8);
    }
    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */long long int) max((arr_39 [i_13] [i_13]), (arr_39 [i_13] [i_13])))) % ((~(((((/* implicit */_Bool) (short)-3815)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_13 [i_13]))))))))));
        arr_45 [i_13] [i_13] |= ((/* implicit */long long int) var_8);
        arr_46 [9] [i_13] = ((/* implicit */short) ((unsigned int) arr_12 [i_13] [i_13] [i_13]));
    }
}
