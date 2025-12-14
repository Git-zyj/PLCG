/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34069
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)29711)) : (((/* implicit */int) (signed char)126))))))) ? (((/* implicit */unsigned long long int) min((-4194304), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60917))) > (5242617028287720600LL))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) & (((/* implicit */int) arr_5 [i_2]))))) : (arr_3 [i_1])))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0 + 1] [i_2 - 1] [i_3 + 2] [i_3 + 1])) & (((/* implicit */int) arr_10 [i_0 + 1] [i_2 - 2] [i_2 + 1] [i_3 - 1]))));
                        var_10 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 2])))))) & (arr_4 [i_1 + 1] [i_1 + 3]));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_4] [i_1] [i_1] [i_1 + 1] [i_0 - 2] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_5 [i_0]))))));
                            arr_16 [i_0] [i_1 + 2] [i_2 + 1] [i_1] [i_4 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_2 - 2] [i_3] [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_5 [i_2 - 1]))));
                            var_11 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [i_4 + 3] [i_3 - 1] [i_2 + 2] [i_1])) * (((/* implicit */int) (short)-16936))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] [i_2 + 1] [i_1] [i_0] = ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)43511)))) < (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (unsigned short)53241))))));
                            arr_21 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_6 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 2])) : (arr_2 [i_2 - 2] [i_0 - 2])));
                            var_12 = ((((((/* implicit */_Bool) arr_19 [i_0] [i_1])) ? (7504331171503881429ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18209))));
                            var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)16935))));
                            var_14 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) -2147483636))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_1 + 2]))));
                            arr_24 [i_0 - 1] [i_1] [i_1] [i_3] [i_6 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_2 + 1] [i_2 + 1]))) < (arr_2 [i_0 + 1] [i_6]))) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_6] [i_3] [i_3] [i_6 + 2]))));
                            var_16 = ((/* implicit */short) 0ULL);
                        }
                    }
                    for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1])))))));
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 2])) - (arr_25 [i_0] [i_1] [i_7 + 2] [i_7 + 2]))))));
                        }
                        /* vectorizable */
                        for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                        {
                            arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_29 [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9 + 3] [i_9 + 2]));
                            arr_33 [i_0 - 1] [i_1] [i_2] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_0 - 1] [i_0 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_36 [i_0] [i_1] [i_7 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_10] [i_1] [i_1]))))) | (((((/* implicit */_Bool) (unsigned short)53241)) ? (6508833316361470ULL) : (arr_25 [i_10] [i_1] [i_1] [i_0])))))) ? (((/* implicit */int) ((signed char) arr_4 [i_2 - 1] [i_1 + 3]))) : (((((/* implicit */_Bool) (unsigned short)46841)) ? (((/* implicit */int) arr_17 [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 2])) : (((/* implicit */int) (unsigned short)11978))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min((((/* implicit */unsigned short) arr_35 [i_0] [i_1] [i_1] [i_0] [i_10])), (arr_17 [i_10] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2 - 1] [i_2 - 1])))))))) | (((/* implicit */int) min((((/* implicit */signed char) ((arr_14 [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_10]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10100)))))), (max((arr_34 [i_0 - 2] [i_1] [i_0 - 2] [i_7 - 2] [i_1] [i_1 - 1] [i_10]), (arr_13 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_7] [i_1 + 2]))))))));
                            arr_37 [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_22 [i_1 + 1] [i_1 + 1] [i_2 - 2])))));
                            var_20 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-29083))) & (arr_9 [i_0] [i_0] [i_2 - 1] [i_7 + 1] [i_0] [i_10])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 12ULL))))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)193)) && (((/* implicit */_Bool) -9124518028684260176LL)))))))));
                        }
                        arr_38 [i_1] [i_1] [i_0 - 2] [i_0 - 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_0] [i_2] [i_0] [i_1] [i_0] [i_0])) >= (-4194286)))), ((~(arr_3 [i_1]))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -4194316)) && (((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2]))))) < (((((/* implicit */_Bool) 132120576LL)) ? (((/* implicit */int) (unsigned short)61612)) : (((/* implicit */int) arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 - 2]))))));
                    }
                    for (signed char i_11 = 3; i_11 < 18; i_11 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 4194267)) || (((/* implicit */_Bool) arr_18 [i_1] [i_2 + 2]))))) ^ (((((/* implicit */int) arr_18 [i_1] [i_2 + 2])) + (((/* implicit */int) arr_18 [i_1] [i_2 + 2]))))));
                        arr_41 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 3] [i_11 - 2] [i_11 + 1])))) + (((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 - 2] [i_1 + 2] [i_0 - 2] [i_2] [i_1 + 2])) ? (6442619039830412904LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_2] [i_2] [i_2] [i_11 - 2] [i_2] [i_2] [i_2])))))))));
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_0 - 2])) ? (arr_19 [i_0 + 1] [i_0 - 2]) : (arr_19 [i_0 - 2] [i_0 - 2]))) - (arr_19 [i_0 - 2] [i_0 - 1])));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            arr_44 [i_0] [i_1 + 2] [i_0] [i_11 - 2] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_14 [i_0] [i_1] [i_2 - 1] [i_2 + 2] [i_11 - 1] [i_12] [i_2 - 1]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58878))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 + 1]) && (((/* implicit */_Bool) arr_7 [i_2 - 2] [i_1] [i_12])))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))));
                            arr_45 [i_0] [i_0] [i_0] [i_1] [i_12] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_14 [i_11 - 3] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 3]) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_2 - 1])))))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_2 + 2]))) & (arr_14 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 3] [i_11 - 3] [i_11 + 1] [i_11 - 2])))));
                            var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ^ (((/* implicit */int) (unsigned short)27327))))) ? (((/* implicit */int) arr_28 [i_0 - 2] [i_1] [i_11 - 1] [i_11 - 1] [i_11 - 1])) : ((+(((/* implicit */int) arr_26 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_0 - 1])))))) < (((/* implicit */int) (unsigned char)136))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((_Bool) 2147483647));
                        arr_48 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)120))))));
                        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_13] [i_1 - 1] [i_1 - 1] [i_13]))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_0] [i_1 + 2] [i_2 - 2])) & (((/* implicit */int) arr_43 [i_1] [i_2 + 1] [i_13]))));
                    }
                }
            } 
        } 
    } 
    var_28 = var_7;
    var_29 = ((/* implicit */unsigned char) ((((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (((/* implicit */long long int) (+(min((var_1), (((/* implicit */int) var_6)))))))));
}
