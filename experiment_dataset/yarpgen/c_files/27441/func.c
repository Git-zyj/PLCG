/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27441
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_8 [i_3] = ((/* implicit */int) var_4);
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((var_4) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_2 - 1])))))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_2] [i_2])) ^ (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(signed char)8]))))))));
                        var_16 *= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((1047644998) % (1047644998)))) < (var_0))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_1 [i_0]))))) / (arr_0 [i_0])))) : (((min((var_11), (((/* implicit */long long int) var_12)))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))));
                    }
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) min(((~(1047645004))), (((((/* implicit */_Bool) -1526604573)) ? (1047645000) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))))))) != ((~((~((-9223372036854775807LL - 1LL))))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2097151U)) && (((/* implicit */_Bool) 3611953670U))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned int) 1047644980)) - (((((/* implicit */unsigned int) -1047644999)) * (arr_0 [i_0]))))))));
        var_20 *= ((/* implicit */unsigned long long int) var_4);
        var_21 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) -1341932915)) || (((/* implicit */_Bool) 1047645012)))))));
    }
    for (int i_4 = 1; i_4 < 10; i_4 += 4) 
    {
        var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (((((/* implicit */unsigned long long int) arr_3 [i_4 - 1])) / (var_15)))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) * (((((/* implicit */long long int) 2147483634)) / (-362225513625051078LL)))))) ? (((((/* implicit */_Bool) ((10377868474179077438ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27253)))))) ? (((362225513625051095LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1977324692517675939LL)))))) : (((/* implicit */long long int) -764467805))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_5] [i_6] [i_7] [i_7]))))) ? (((((/* implicit */unsigned long long int) var_4)) * (arr_17 [i_5] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) > (var_11)))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((((/* implicit */int) arr_1 [i_5])) + (((/* implicit */int) var_7)))))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) + (var_0))))));
                    arr_22 [i_6] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
        arr_23 [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10377868474179077438ULL)) || (((/* implicit */_Bool) -2131381274))));
    }
    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 1) 
    {
        arr_26 [i_8] [i_8 + 3] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_8])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -362225513625051080LL)) ? (arr_2 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) 0U)))))), (((arr_7 [i_8 - 1] [i_8 + 2] [i_8 + 3] [i_8]) / (arr_7 [i_8 + 4] [i_8 + 3] [i_8 + 3] [i_8 + 3])))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                {
                    var_27 = ((/* implicit */int) var_3);
                    arr_34 [i_9] [i_10] |= ((/* implicit */unsigned short) (signed char)0);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned int) ((((long long int) var_0)) | (((/* implicit */long long int) ((int) 9215374835431658183LL)))));
    var_29 = ((/* implicit */long long int) ((unsigned long long int) var_13));
}
