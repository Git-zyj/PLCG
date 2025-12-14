/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248558
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
    var_15 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 = (unsigned short)50600;
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_2] [i_2] [i_1] [(unsigned short)2] = ((/* implicit */short) arr_1 [0U]);
                        arr_11 [i_0] [i_0] [6U] [i_3] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50598)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) >= (4503595332403200LL)))), (max(((+(var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50598)) ? (((/* implicit */int) (unsigned short)14936)) : (((/* implicit */int) var_12)))))))));
                    }
                    var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0])))))) ? (((/* implicit */int) (unsigned short)50598)) : (((/* implicit */int) ((unsigned char) arr_2 [i_2])))));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)50598)), (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_2])))))));
                }
                /* vectorizable */
                for (short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_4 - 1] [i_0] [(short)4])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_4 + 1] [i_1] [i_1]))));
                    arr_15 [i_0] [i_4] [i_4 - 1] = ((/* implicit */long long int) var_14);
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1] [(signed char)2] [i_1]))));
                    var_20 -= ((/* implicit */unsigned long long int) (unsigned short)8972);
                }
                var_21 ^= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) arr_14 [i_0] [i_1]))))) : (((((/* implicit */_Bool) -2134038695)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4299026035578416259ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3656771156U)))))) : (min((3368858686U), (((/* implicit */unsigned int) (short)4092))))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        var_23 = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned char)192)))), ((~(((/* implicit */int) arr_16 [i_5 + 1]))))));
        var_24 = ((/* implicit */long long int) max(((+((~(-2134038695))))), (((/* implicit */int) min((arr_16 [i_5]), (arr_16 [i_5 - 2]))))));
        var_25 -= ((/* implicit */signed char) ((unsigned short) (~(14989443442612807723ULL))));
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5 + 1])) ? (((/* implicit */int) ((2341216000U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) : (min((((/* implicit */int) (unsigned char)252)), (((var_7) ? (arr_17 [i_5 - 1]) : (arr_17 [i_5])))))));
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((-2134038697), (((/* implicit */int) (short)-17506)))), (arr_21 [i_6])))) || (arr_20 [i_6])));
        arr_23 [i_6] [i_6] = ((/* implicit */long long int) ((((arr_17 [9LL]) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) : (((((/* implicit */_Bool) 0)) ? (3217408641775966752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1670))))))) - (197ULL)))));
        var_26 |= ((/* implicit */signed char) max((arr_19 [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) 4178220428U)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (short)-1670)))))));
        var_27 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)14951)))), (((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) (signed char)-80)) + (99)))))));
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (long long int i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1686467172541078407LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) 0U)))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))), (arr_35 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9])))));
                                arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 393216)), (3419018386U)))) ? ((-(9183849812629996452ULL))) : (((/* implicit */unsigned long long int) (~(max((2341216000U), (((/* implicit */unsigned int) var_1)))))))));
                            }
                        } 
                    } 
                    var_29 &= ((/* implicit */unsigned int) arr_19 [i_7]);
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (arr_17 [i_7])))));
    }
    var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_2) & (var_2))))))), (1953751292U)));
}
