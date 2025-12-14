/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238700
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59509)) | (((/* implicit */int) (unsigned short)14764))))) ? (((var_2) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)50772)))) : (((/* implicit */int) arr_0 [i_0]))))) : (((arr_1 [(_Bool)1]) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_1 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) : ((~(arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_1]))) ? (((((/* implicit */_Bool) ((unsigned char) (short)12659))) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((((/* implicit */_Bool) (unsigned short)54761)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) (unsigned short)65535))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_18 = ((unsigned char) arr_13 [i_4] [i_3] [i_3] [i_1]);
                        var_19 = ((/* implicit */unsigned char) ((((arr_1 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))))) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 2])) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_4] [i_3 - 1] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_12 [i_2] [i_4] [i_3 + 2] [i_2] [i_1]))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_1])) ? (((/* implicit */int) arr_9 [i_3] [i_3 - 1] [i_4])) : (((/* implicit */int) (unsigned short)14764))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_3] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) (-(arr_8 [i_3 + 1] [i_3 + 1] [i_5])));
                        var_21 = ((/* implicit */signed char) -8886914256966805848LL);
                        var_22 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_3 - 1] [(signed char)11] [i_5]))))) ? (((/* implicit */int) ((_Bool) var_3))) : (((((/* implicit */_Bool) -8886914256966805834LL)) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) arr_5 [i_1])))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        arr_21 [i_1] [i_2] [i_3] [i_6 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (short)7280)) : (((/* implicit */int) (signed char)54))))) ^ (((((/* implicit */_Bool) (signed char)-54)) ? (1202473949U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1])))))));
                        arr_22 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_3 - 2] [i_3 + 1] [i_6] [i_3])) & (((/* implicit */int) arr_19 [i_1] [i_3 + 1] [i_6] [i_3]))))) ? (((/* implicit */int) min((arr_19 [i_1] [i_3 + 1] [i_3] [i_3]), (arr_19 [i_3] [i_3 + 1] [i_3 + 1] [i_3])))) : (((((/* implicit */int) arr_19 [i_1] [i_3 + 1] [(unsigned char)15] [i_3])) & (((/* implicit */int) arr_19 [i_3] [i_3 + 1] [i_3] [i_3]))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_2]))) : (arr_8 [i_1] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_3 + 2] [i_3 - 2])) ? (arr_8 [i_1] [i_2] [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [(unsigned short)13] [i_3 - 1] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3] [i_6 + 1] [i_6 + 1]))))) ? (((/* implicit */int) ((_Bool) arr_6 [(unsigned char)3]))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)83)), ((unsigned short)48635)))))))));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_25 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_14 [i_1]);
                        arr_26 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (((+(((/* implicit */int) ((unsigned char) var_12))))) ^ (((/* implicit */int) ((_Bool) arr_11 [i_1] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1])))));
                    }
                    var_24 = (i_3 % 2 == 0) ? (((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)14779)) >> (((((((/* implicit */int) arr_17 [i_2])) - (((/* implicit */int) arr_19 [i_3] [i_2] [i_1] [i_3])))) + (220))))), (((/* implicit */int) arr_17 [i_2]))))) : (((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)14779)) >> (((((((((/* implicit */int) arr_17 [i_2])) - (((/* implicit */int) arr_19 [i_3] [i_2] [i_1] [i_3])))) + (220))) + (25))))), (((/* implicit */int) arr_17 [i_2])))));
                    arr_27 [i_3] [i_3] = ((/* implicit */unsigned char) min((min((arr_14 [i_3 - 1]), (((/* implicit */long long int) arr_0 [i_3 + 1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_3 + 2])))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) var_14);
                                arr_34 [i_9] [i_9] [i_3] [i_8] [i_3] [i_2] [i_1] = ((/* implicit */short) var_10);
                                arr_35 [i_3] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_3] [i_3 - 2] [i_3] [i_8])) && (((/* implicit */_Bool) -1LL))))), (var_8)));
                                var_26 = min(((!(((/* implicit */_Bool) arr_7 [i_8] [i_2] [i_1])))), (((((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_9])))) == (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)16905)) : (((/* implicit */int) arr_6 [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                {
                    arr_42 [i_1] [i_1] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) ((unsigned short) (unsigned short)16911))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14773)) << (((var_14) - (1582879681U)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_15 [i_10] [i_11 + 1] [i_11 - 1] [i_11]))))));
                    arr_43 [i_11 - 1] = ((/* implicit */_Bool) ((((((-7109316160768160034LL) + (9223372036854775807LL))) << (((2721383115U) - (2721383115U))))) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)14779)) != (((/* implicit */int) (unsigned short)14764)))))) % (171434633U))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11])) | (((/* implicit */int) arr_12 [i_11] [i_11 + 1] [i_11] [i_11 + 1] [i_1]))))) ? (((((/* implicit */_Bool) -1LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1] [i_11 + 1] [i_11] [i_11] [(signed char)2] [i_1] [i_11 - 1])) ? (((/* implicit */int) (unsigned short)2889)) : (((/* implicit */int) arr_12 [i_11] [i_11 - 1] [i_11] [i_11 + 1] [i_10])))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(min((arr_6 [i_1]), (arr_33 [i_1]))))))) + (arr_37 [i_1] [i_1])));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_20 [i_12] [i_12] [(short)11] [(signed char)14] [i_12] [i_12])))));
        arr_46 [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                {
                    arr_52 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_14]))) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned short)47738))))) >= (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [(unsigned short)7]))))))));
                    var_30 = ((/* implicit */_Bool) arr_17 [i_12]);
                }
            } 
        } 
    }
}
