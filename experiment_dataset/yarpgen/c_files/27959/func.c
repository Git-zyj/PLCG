/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27959
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
    var_15 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_8)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-71), (((/* implicit */signed char) (_Bool)1)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [(unsigned char)7])) : (((/* implicit */int) arr_0 [0U]))))) ? (((/* implicit */int) arr_4 [(unsigned short)7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
            arr_7 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))));
            arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3040912494U)) ? (3231277892480950400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-71)))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [8LL] [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_0])) : (arr_9 [i_2] [i_0] [i_0])))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_4 [i_0])))))));
        }
        for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
            {
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3] [i_3] [i_3])) >= (((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_4])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_2 [(unsigned char)6] [(unsigned char)6]))))));
                arr_16 [i_4] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) var_6)) + (arr_5 [i_0] [i_4])))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_8))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_3] [i_0])) : (((/* implicit */int) arr_20 [i_4] [i_8]))))));
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_27 [i_0] [i_3] [i_4] [i_4] [i_4] [i_4] [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) == (((/* implicit */int) var_0)))))));
                            var_22 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            }
            for (signed char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
            {
                var_23 &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 2297165554U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)216))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0] [i_3] [i_3] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_3] [1U] [i_9])))))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_25 -= ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0]);
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_10])))))));
                    arr_33 [i_0] [4ULL] [4ULL] [(unsigned char)8] [i_0] [(unsigned char)4] |= ((/* implicit */unsigned char) arr_21 [i_0] [i_3] [i_10]);
                }
            }
            for (signed char i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
            {
                var_27 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_3] [i_11]))))) != (((((/* implicit */_Bool) arr_37 [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_3] [i_0] [i_0]))))));
                var_28 &= ((/* implicit */unsigned char) arr_31 [i_0] [i_0] [i_3] [i_11] [i_11] [i_0]);
                var_29 -= ((/* implicit */unsigned char) arr_29 [i_0] [i_3] [(unsigned char)3] [i_3]);
            }
            arr_38 [i_0] &= ((/* implicit */unsigned char) ((var_6) - (((/* implicit */unsigned int) (+(arr_11 [i_0]))))));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_0] [(unsigned short)3] [(_Bool)1] [i_0]))))) <= (arr_5 [i_0] [i_0]))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (long long int i_13 = 1; i_13 < 8; i_13 += 1) 
            {
                {
                    arr_44 [6LL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [9LL] [(unsigned char)3] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [4U])) ? (var_6) : (arr_29 [i_13] [i_13 + 2] [i_12] [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_13])))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_12] [9U] [i_13 + 2] [i_12])) ? ((-(arr_19 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (short i_15 = 4; i_15 < 7; i_15 += 1) 
                        {
                            {
                                var_32 = (-(3599204341U));
                                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) arr_26 [i_0] [i_14] [i_14] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((arr_18 [i_0] [(unsigned char)1] [i_13] [i_14] [i_15]) ? (arr_36 [i_12] [i_13 - 1] [i_12] [i_12]) : (var_4))) : (((((/* implicit */_Bool) 3231277892480950385ULL)) ? (2892282716U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))))));
                                var_34 = var_4;
                                var_35 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
    {
        arr_54 [8] [8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_27 [(short)1] [(short)1] [i_16] [i_16] [(short)1] [(short)1] [i_16])), (arr_34 [4U] [4U])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) arr_48 [i_16] [0U] [0U] [6U])) >= (((/* implicit */int) arr_2 [(unsigned char)0] [4U])))))))) ? ((~(5063002558407691630ULL))) : (max((((/* implicit */unsigned long long int) arr_43 [i_16] [i_16] [6U] [(_Bool)1])), (arr_12 [i_16] [i_16] [i_16])))));
        var_36 = ((/* implicit */unsigned long long int) arr_45 [i_16] [i_16] [i_16] [i_16]);
    }
}
