/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237572
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1 - 1] = ((max((((/* implicit */int) (unsigned short)42143)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) arr_6 [i_0])))))) > (((/* implicit */int) arr_6 [i_0])));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_2))));
                    var_21 = ((unsigned short) min((max((1260474430700601335LL), (((/* implicit */long long int) arr_6 [i_2])))), (((/* implicit */long long int) (short)22314))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (arr_3 [i_3 + 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))));
                        arr_21 [i_3] |= arr_2 [i_3] [i_4];
                        var_23 = ((/* implicit */unsigned int) arr_11 [i_3 + 1]);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (unsigned char)200))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_0 [i_3 + 2]))));
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967286U)) && (((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5]))))), (arr_24 [i_3] [i_4] [i_3 + 2] [i_4] [i_4] [i_3 - 1])))), (((short) (!(((/* implicit */_Bool) var_11))))))))));
                        var_27 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) 0U)) : (arr_13 [i_3]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))));
                        arr_26 [i_3] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_17 [i_5])))) ? (((((arr_3 [i_3] [i_5]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [1ULL] [1ULL]))))) - (2465027406U))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_4]))))) && (((((/* implicit */int) var_3)) == (((/* implicit */int) arr_0 [i_3]))))))))));
                        var_28 = arr_11 [i_3];
                    }
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) arr_17 [i_5])) ^ (var_1)))))) ? (((((/* implicit */_Bool) (unsigned char)189)) ? (11040974209914666213ULL) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (-((+(var_4)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 3; i_8 < 12; i_8 += 2) 
    {
        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            {
                var_30 = (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_27 [i_8]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(3841618331045753065ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)77))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)89))) % (arr_36 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
                        /* LoopSeq 4 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (unsigned char)78))));
                            arr_40 [i_8] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (15539131155724852225ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52667))))) % (((/* implicit */unsigned long long int) arr_36 [i_8] [i_8] [i_8 + 1] [i_8 - 3] [i_8 + 3] [i_8 + 1]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_9] [i_8] [i_13] [i_11] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_8] [i_9] [i_10]))))) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)125)))))));
                            arr_44 [i_8] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (3570287211U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_13] [i_13] [i_13]))))));
                        }
                        for (unsigned short i_14 = 2; i_14 < 14; i_14 += 4) 
                        {
                            var_33 = ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_29 [i_9] [i_14 + 1])));
                            arr_47 [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) arr_27 [i_8]);
                            var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [i_8] [i_14 + 1] [i_8 + 1] [i_8 + 1]))));
                            var_35 = ((/* implicit */unsigned short) (((+(arr_30 [i_10] [i_10] [i_8]))) > (((/* implicit */unsigned long long int) (-(var_5))))));
                        }
                        for (unsigned int i_15 = 2; i_15 < 12; i_15 += 4) 
                        {
                            arr_50 [i_15] [i_9] [i_10] [i_11] [i_15] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_42 [i_15 - 2] [i_15 - 2] [i_15] [i_15] [i_15 - 2]))));
                            arr_51 [i_8] [i_8] [i_10] [i_11] [i_8] = ((/* implicit */signed char) (((~(var_17))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_8] [i_8 - 2] [i_8 - 2] [2] [i_8 - 2])))));
                            var_36 = ((/* implicit */unsigned short) arr_37 [i_8 - 2] [i_9] [i_10] [i_11]);
                            var_37 -= ((/* implicit */signed char) arr_29 [i_8] [i_8]);
                        }
                    }
                    arr_52 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1636698497)) | (arr_46 [i_8] [i_9] [i_9] [i_9] [i_10] [i_8])))) ? (((((/* implicit */_Bool) var_16)) ? (arr_38 [(unsigned short)12]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_19)) ? (arr_27 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned char)9] [(unsigned char)9])))))));
                    var_38 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)4885)) << (((/* implicit */int) (_Bool)0))))));
                }
                for (unsigned int i_16 = 2; i_16 < 14; i_16 += 4) 
                {
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) 1999215122U)) && (((/* implicit */_Bool) var_4)))))));
                    arr_57 [i_8] [i_16] = (-(((((/* implicit */int) (signed char)34)) % (((/* implicit */int) arr_33 [i_16] [i_9] [i_9] [i_8 + 1])))));
                }
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((((/* implicit */int) var_9)) < (((/* implicit */int) arr_53 [i_8] [i_8] [i_9])))), ((!(((/* implicit */_Bool) arr_53 [i_8] [i_8] [i_9]))))))) != (max((arr_28 [i_8 + 3]), ((+(((/* implicit */int) var_14))))))));
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) arr_55 [i_9])) ? ((-(1739271773U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)116)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_18))));
}
