/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226419
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
    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (var_16)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-19236))))) ? ((+((-(((/* implicit */int) (short)19236)))))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [(unsigned char)5] = min(((-((~(var_8))))), (((/* implicit */unsigned int) (short)19230)));
        var_18 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)1))))), (min((var_15), (((/* implicit */unsigned int) var_16)))))), (((/* implicit */unsigned int) (unsigned char)255))));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_6))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_4 [10ULL])) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_5 [i_1 + 2])))), (((/* implicit */int) var_3)))) - ((-(((/* implicit */int) arr_5 [21U])))))))));
        var_21 = ((/* implicit */unsigned int) var_3);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_22 = arr_5 [(unsigned char)7];
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) var_3);
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned long long int) arr_17 [(unsigned char)14] [i_2] [i_2] [i_5 + 2] [i_5 - 2] [i_5 - 2]);
                                var_25 = ((/* implicit */unsigned char) 9U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_7]))));
                                var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -9080579)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) << (((/* implicit */int) arr_7 [i_2]))));
                            }
                        } 
                    } 
                    var_28 = (~(((/* implicit */int) arr_15 [i_4] [i_3] [(unsigned short)20] [(unsigned short)20])));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) 9080563))));
    }
    for (unsigned int i_9 = 2; i_9 < 14; i_9 += 1) 
    {
        arr_28 [(short)8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_23 [i_9 + 3] [i_9 + 3] [i_9] [i_9] [i_9]), (var_6)))))))));
        arr_29 [(unsigned short)1] [(unsigned short)1] = ((/* implicit */int) arr_7 [i_9]);
        /* LoopSeq 3 */
        for (short i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            var_30 *= ((/* implicit */short) var_7);
            var_31 = ((/* implicit */unsigned char) arr_11 [i_9] [i_10] [i_10]);
        }
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_11])) ? (((((/* implicit */_Bool) (unsigned char)155)) ? (arr_34 [i_9 - 2]) : (arr_34 [i_9 - 1]))) : (((/* implicit */int) (short)32757))));
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) min((4294967285U), (((/* implicit */unsigned int) (short)-32749))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)14699))))))) : (var_8)));
            var_34 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_34 [i_11])) | (arr_11 [i_9 - 2] [i_11] [i_11])))) ? (((((/* implicit */_Bool) arr_17 [i_9] [20U] [i_11] [(unsigned char)20] [20U] [i_11])) ? (((/* implicit */int) arr_32 [i_9] [(short)12])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_7 [i_9 - 2]))))) >= (arr_3 [i_11] [i_11])));
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 13; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))) <= (1221126949U))))));
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            var_36 -= ((/* implicit */unsigned char) min((min(((-(var_7))), (arr_18 [3U] [i_12 + 1] [i_12 + 4] [i_13] [i_12 + 1] [i_12]))), (min((((/* implicit */unsigned int) (short)-32749)), (arr_33 [i_9 + 3] [i_9 - 2] [i_9 - 2])))));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_9 - 1] [i_11])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) && (((/* implicit */_Bool) (unsigned char)237))))) : (((/* implicit */int) (short)16951))));
                        }
                        for (short i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                        {
                            arr_45 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))) == (9060921494088585590ULL)));
                            var_38 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) 4294967286U)))) ? (((/* implicit */int) min((arr_27 [i_9]), (var_1)))) : (((/* implicit */int) ((signed char) arr_26 [(unsigned char)2])))))));
                            var_39 = ((/* implicit */short) (((-(((/* implicit */int) arr_19 [i_9 + 2] [i_13] [i_15] [i_15] [i_15] [i_15])))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_41 [i_9 + 1] [(unsigned char)11] [i_11] [i_15] [(short)9])) : (((/* implicit */int) arr_19 [i_9 + 2] [1U] [i_11] [i_13] [i_13] [i_15]))))));
                        }
                        var_40 = ((/* implicit */unsigned char) arr_5 [i_12]);
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_23 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 2] [i_11]), (arr_30 [i_9 + 3])))) + (2147483647))) << (((((((int) arr_23 [i_11] [i_11] [i_11] [i_11] [i_11])) + (10325))) - (25)))));
        }
        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
        {
            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_9 [i_16] [i_16])) : (((/* implicit */int) arr_46 [i_9 - 1] [i_16] [i_9])))) != (((((/* implicit */_Bool) arr_46 [i_9] [(unsigned char)15] [i_16])) ? (((/* implicit */int) arr_46 [i_9] [i_9 - 1] [(unsigned char)6])) : (((/* implicit */int) arr_9 [i_9 - 2] [i_16])))))))));
            var_43 = ((/* implicit */short) ((arr_34 [1U]) < (((/* implicit */int) arr_30 [i_16]))));
            arr_49 [(short)5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_9])) ? (((/* implicit */int) (unsigned char)44)) : ((-(((((/* implicit */int) var_3)) << (((((/* implicit */int) var_12)) - (1933)))))))));
        }
        var_44 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2403836378U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)39))));
        var_45 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9 - 1] [(unsigned char)4])) ? (arr_22 [(short)4] [i_9] [i_9] [8U]) : (((/* implicit */unsigned int) -751570153)))))));
    }
    var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
}
