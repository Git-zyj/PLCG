/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193708
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_11 += ((/* implicit */signed char) min((((unsigned char) arr_2 [i_1 - 2] [i_1 + 1])), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))))));
                    var_12 = ((/* implicit */int) arr_2 [i_0] [i_0]);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_0) / (arr_5 [i_0] [i_0]))), (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15001)) - (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_2]))))))) : (min((arr_5 [i_0] [(signed char)12]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))))));
                    var_14 *= ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
                    arr_8 [i_2] = ((/* implicit */unsigned char) max((280311613), (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) arr_2 [i_2] [i_0]))), (var_6))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) arr_10 [i_5]);
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (arr_11 [i_3] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [(unsigned short)5] [i_5] [12U]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15006)))))))) || (((/* implicit */_Bool) arr_14 [i_3] [i_5] [i_5] [(_Bool)1]))));
                }
            } 
        } 
        var_17 = arr_9 [i_3];
    }
    for (short i_6 = 2; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_15 [i_6] [i_6])))) == (((/* implicit */int) ((unsigned short) (unsigned short)14989)))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 4; i_7 < 14; i_7 += 3) 
        {
            for (long long int i_8 = 2; i_8 < 13; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((arr_4 [i_6 + 1] [i_7]), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)15007)))))))));
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_8 - 2])) && (((/* implicit */_Bool) arr_15 [i_7] [i_7])))))));
                        arr_28 [(short)13] [i_7] [i_8] [i_7] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_17 [i_7] [i_7]))) >> (((/* implicit */int) arr_6 [i_7] [i_7] [i_8] [i_9]))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_17 [i_7] [i_7]))) >> (((((/* implicit */int) arr_6 [i_7] [i_7] [i_8] [i_9])) + (16))))));
                        var_21 = ((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_6] [i_6])), (arr_27 [i_7] [i_9] [i_9] [i_9] [i_6] [(unsigned short)10])));
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) arr_11 [i_7] [i_8 - 2] [i_10]);
                            var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)33))))), (min((7778616078226269688ULL), (10668127995483281948ULL)))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                        {
                            var_24 = (i_7 % 2 == zero) ? (((/* implicit */short) ((arr_5 [i_9] [i_7 - 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [(short)14]))) : (arr_21 [i_6 + 1])))) ? (((/* implicit */int) arr_18 [i_6 + 3])) : ((~(((/* implicit */int) var_2)))))))))) : (((/* implicit */short) ((arr_5 [i_9] [i_7 - 1]) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [(short)14]))) : (arr_21 [i_6 + 1])))) ? (((/* implicit */int) arr_18 [i_6 + 3])) : ((~(((/* implicit */int) var_2))))))))));
                            var_25 |= var_9;
                        }
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                        {
                            var_26 = ((short) var_4);
                            var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_8))))), (arr_7 [i_8] [i_7] [i_12])));
                            arr_35 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2654154685655454427LL)) - (7778616078226269688ULL)))) ? (((/* implicit */int) (unsigned short)15009)) : (((/* implicit */int) (signed char)-34))));
                            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((max((var_9), (((/* implicit */unsigned short) var_7)))), (max((var_1), (((/* implicit */unsigned short) arr_6 [i_7] [18] [15U] [i_9])))))))));
                        }
                        for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
                        {
                            arr_38 [i_7] [i_7 + 1] [i_8 - 1] [i_9] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_23 [i_8 + 2] [i_9] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_9] [i_9])) ? (arr_36 [(_Bool)1] [i_7] [i_7] [i_9] [(_Bool)1]) : (var_5)))) : (min((((/* implicit */long long int) arr_4 [i_6] [i_9])), (arr_5 [(short)9] [i_7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_7] [i_7])), (var_7)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_22 [i_13 + 1] [i_7] [i_7] [i_6])), ((unsigned char)123)))))))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) max((arr_12 [i_6] [i_13 - 1]), (((arr_32 [i_6 - 1]) == (((/* implicit */unsigned long long int) arr_27 [i_6] [i_6 - 2] [i_6 + 3] [i_6 + 1] [i_6 + 2] [i_6 + 2])))))))));
                            arr_39 [i_6] [i_7] [i_6] [i_9] [i_7] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_13 + 1])) : (((/* implicit */int) arr_0 [i_13 + 1])))));
                            var_30 &= ((((/* implicit */_Bool) arr_1 [i_6])) ? (((((/* implicit */int) (signed char)-39)) & (((((/* implicit */_Bool) arr_4 [i_6] [18ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_22 [i_9] [i_6] [i_9] [i_9])))))) : (((/* implicit */int) arr_18 [i_9])));
                            arr_40 [i_6] [i_7] [9] [i_7] [i_9] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_9] [i_7] [i_7])) ? (((/* implicit */int) arr_30 [i_6] [i_6] [i_8] [i_9] [i_7] [i_9])) : (((/* implicit */int) arr_3 [i_6 - 1] [i_7 - 3] [i_8 + 1]))))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50528))))) ? (((/* implicit */unsigned long long int) var_0)) : (((unsigned long long int) arr_24 [i_7] [i_7] [i_7]))))));
                        }
                    }
                } 
            } 
        } 
        arr_41 [14LL] [i_6] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) 765793468)) ? (((/* implicit */unsigned long long int) 364872633)) : (7778616078226269696ULL))), (((/* implicit */unsigned long long int) (unsigned char)136))));
    }
}
