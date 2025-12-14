/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244949
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_10 *= ((/* implicit */short) ((unsigned char) ((-1479752026) ^ (((/* implicit */int) (_Bool)0)))));
                        var_11 = ((/* implicit */long long int) (+(var_9)));
                        arr_13 [i_0] [i_1] [i_2] [9] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 130048U)) ? (6035764168920102962LL) : (((/* implicit */long long int) 4294837263U))));
                        arr_14 [i_0 - 1] [i_1] [i_2 + 1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_2 + 1])) ? ((+(4294837263U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200)))));
                        arr_15 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(arr_1 [i_0 - 1])));
                    }
                } 
            } 
            arr_16 [i_1] = ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)62)) | (((/* implicit */int) (short)-19865))))));
            arr_17 [i_0 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) & (arr_12 [i_1] [i_1])));
            arr_18 [i_1] = ((((/* implicit */_Bool) (~(arr_2 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (arr_8 [i_0] [i_1] [i_0 - 1])))) : (((int) arr_6 [i_0 - 1] [(short)3])));
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_21 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> ((((-(((4887377137141960504LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))))))) + (4887377137141960457LL)))));
            arr_22 [i_0] [i_0] [i_4] = ((/* implicit */int) var_2);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_12 = ((/* implicit */short) ((arr_24 [i_0 - 1] [i_5] [i_0 - 1]) / (arr_24 [(short)1] [i_0] [i_0 - 1])));
                        var_13 = ((int) (unsigned char)174);
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned short) arr_27 [i_0] [i_5] [i_0 - 1]);
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            var_15 = ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_0]))))) : (var_8));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_33 [i_0 - 1] [i_8] [i_9])) : (((/* implicit */int) arr_33 [i_0] [i_8] [i_9]))));
                arr_36 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)66))));
                var_17 = ((((/* implicit */_Bool) arr_35 [i_0] [(short)9] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0])));
            }
            var_18 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_34 [i_0] [i_0] [(unsigned char)7])) | (((/* implicit */unsigned long long int) 22LL))));
            var_19 *= ((/* implicit */unsigned char) ((unsigned long long int) var_6));
        }
        /* LoopNest 2 */
        for (short i_10 = 3; i_10 < 8; i_10 += 4) 
        {
            for (unsigned char i_11 = 2; i_11 < 9; i_11 += 1) 
            {
                {
                    arr_43 [i_0] [i_10 - 2] [i_10] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) min(((unsigned char)173), (((/* implicit */unsigned char) (_Bool)1))))))));
                    arr_44 [i_10] [i_10 - 3] [i_10] [i_10] = ((/* implicit */long long int) var_9);
                    /* LoopNest 2 */
                    for (long long int i_12 = 4; i_12 < 7; i_12 += 4) 
                    {
                        for (short i_13 = 3; i_13 < 9; i_13 += 2) 
                        {
                            {
                                arr_51 [i_10] [i_12 - 2] [i_11 - 2] [i_10 - 2] [i_10 - 3] [i_10 + 2] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_19 [i_0 - 1])))) + (arr_34 [i_10 + 2] [i_11] [i_13 + 1])));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((-938970442) % (((/* implicit */int) (unsigned char)15)))) > (((/* implicit */int) arr_0 [i_0 - 1])))))));
                                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) -6157351955460327133LL)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (unsigned char)245))))))) <= (min((((((/* implicit */_Bool) var_9)) ? (arr_9 [i_13 - 3] [i_12 - 1] [i_11] [i_10] [i_10] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [4ULL] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_10] [i_11] [i_12])) ? (arr_29 [i_13] [i_0] [i_13]) : (((/* implicit */long long int) arr_28 [i_10] [i_11 + 1] [i_12 + 2] [i_13]))))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)69)) * (-21)));
                            }
                        } 
                    } 
                    arr_52 [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0 - 1] [i_10 + 1] [i_11 - 2])) < (((/* implicit */int) arr_20 [i_11 - 1] [i_10] [i_0 - 1]))))), (((unsigned long long int) arr_20 [i_11 - 2] [(unsigned char)3] [i_11 - 1]))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_19 [i_0])), ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_41 [i_0 - 1] [i_0] [6]))))))));
    }
    var_24 += ((/* implicit */signed char) min((((((((/* implicit */_Bool) (unsigned char)251)) ? (var_2) : (((/* implicit */unsigned long long int) var_4)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_4)))))))));
    var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : (var_8))) : (((/* implicit */long long int) (~(var_9))))))));
}
