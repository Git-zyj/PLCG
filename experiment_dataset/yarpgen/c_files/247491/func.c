/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247491
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)29)))) ^ (var_2)))) ? (max((min((((/* implicit */unsigned long long int) 2080374784)), (var_3))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)4955))))) & (max((((/* implicit */long long int) var_0)), (var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((long long int) min((var_7), (((/* implicit */long long int) arr_11 [i_0] [i_3] [i_0] [i_1] [i_0 + 1])))));
                                arr_15 [i_0] [(unsigned char)10] [i_2] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)105)))))), (var_5)));
                                arr_16 [i_0] [i_3] [i_3] [i_3] [11LL] [(unsigned short)11] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) : (var_3)))));
                                arr_17 [i_0] [9LL] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) 2351409221U)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)21036))))) & ((-(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)248)) + (((/* implicit */int) min((arr_10 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 + 3] [i_3 + 2]), (arr_10 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 2] [i_3 + 2]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) (unsigned char)2)) ? (962848448076183401ULL) : (((/* implicit */unsigned long long int) var_5)))))) % (((((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) : (13015149819522013372ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-110)) | (((/* implicit */int) (signed char)105)))))))));
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (signed char)-99);
        arr_20 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */int) min((arr_18 [i_5]), (((/* implicit */unsigned short) (signed char)93))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_19 = ((/* implicit */signed char) (~(arr_22 [i_5] [i_6] [i_6])));
            /* LoopSeq 3 */
            for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_3))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)219))));
                arr_26 [i_6] = ((/* implicit */long long int) ((_Bool) -547059040));
            }
            for (long long int i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_8)))))))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (arr_27 [i_6] [i_6] [i_8 + 3] [i_8 + 2]) : (arr_27 [i_6] [i_6] [i_8 + 3] [i_8 + 2])));
                arr_29 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_23 [i_6] [i_8])) || (((/* implicit */_Bool) arr_19 [(unsigned char)18]))))));
            }
            for (signed char i_9 = 2; i_9 < 18; i_9 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_6] [i_9 + 2]))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_9 + 2] [i_6] [i_9 + 1] [i_9 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_9 + 1]))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((17483895625633368226ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55)))))) ? ((+(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (unsigned char)221))))));
                arr_32 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) & (17483895625633368214ULL)))));
            }
        }
        for (signed char i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-4956)))) ? (((/* implicit */unsigned long long int) (-(896667174)))) : ((-(arr_31 [i_5] [i_10] [i_10] [i_10])))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((long long int) 1943558069U)))));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned char) ((((long long int) var_2)) >= (((/* implicit */long long int) var_10))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_5])) ^ ((-2147483647 - 1))))) & (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223)))))));
            var_31 |= ((/* implicit */unsigned long long int) ((((2351409226U) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775788LL))) + (32LL))))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))));
            arr_37 [i_5] = ((/* implicit */int) ((((/* implicit */int) arr_34 [i_5] [i_5] [i_5])) == (arr_22 [i_5] [i_11] [i_11])));
            var_32 = ((((/* implicit */_Bool) var_3)) ? (arr_27 [i_5] [i_11] [i_11] [i_11]) : (arr_27 [i_11] [i_5] [i_5] [14U]));
        }
        arr_38 [i_5] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (arr_31 [i_5] [i_5] [i_5] [(unsigned short)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_5])))))));
        var_33 = ((/* implicit */long long int) ((short) 2147483641));
    }
    for (int i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            arr_44 [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((long long int) arr_42 [i_12] [i_12] [i_12]))) ? (var_0) : (((/* implicit */int) arr_34 [i_12] [i_12] [i_12]))))));
            arr_45 [i_12] [i_12] = var_13;
            arr_46 [i_12] = ((/* implicit */_Bool) ((long long int) var_4));
        }
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_12)))))) / (((var_8) - (arr_42 [i_12] [i_14] [i_14])))))) ? ((-(max((((/* implicit */int) arr_24 [i_12] [i_12] [i_14])), (var_2))))) : (((((/* implicit */_Bool) 145876961)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)1)))))))));
            var_35 += ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_12] [i_14])) & (((/* implicit */int) (signed char)113))))) >= (1943558070U)))), ((~(((/* implicit */int) (unsigned short)480))))));
        }
        var_36 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_12] [i_12] [i_12] [(unsigned char)0])) / ((+(((/* implicit */int) (short)789))))))), ((-(var_13)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_51 [i_15] [i_15] = ((/* implicit */int) arr_33 [i_15]);
        var_37 = ((/* implicit */unsigned char) ((arr_33 [i_15]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
    }
}
