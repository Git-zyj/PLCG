/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48097
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_18 |= ((/* implicit */signed char) min((((((/* implicit */int) (signed char)12)) / (((/* implicit */int) arr_1 [i_0])))), ((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-18)), ((unsigned char)56))))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? ((+(((/* implicit */int) (unsigned char)149)))) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) 10383534036863099338ULL);
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 3; i_5 < 8; i_5 += 3) 
            {
                var_20 *= arr_2 [i_3];
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 8; i_7 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max(((unsigned short)1), (((/* implicit */unsigned short) (signed char)71))))) ? (arr_4 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30741)))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)56))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5 - 3])))))) : (min((arr_4 [i_5 - 2] [i_6]), (((/* implicit */unsigned long long int) (unsigned short)20566))))));
                        }
                    } 
                } 
                var_23 |= ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_17 [i_5 - 3] [i_5 + 2] [i_5 - 1] [i_5 + 2])))));
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12))))))))));
            }
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                var_24 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_3] [i_4] [i_4]))));
                arr_23 [i_8] [i_8] [i_3] [i_3] = ((short) arr_2 [i_3]);
            }
            var_25 *= ((unsigned int) max(((+(((/* implicit */int) (unsigned short)44940)))), (((/* implicit */int) ((_Bool) 3U)))));
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_9])) : (((/* implicit */int) arr_25 [i_3] [i_3] [i_3])))))) ^ (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_25 [i_3] [i_3] [i_3])) & (((/* implicit */int) arr_25 [i_9] [i_9] [i_3])))) : ((~(((/* implicit */int) (unsigned char)232))))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64686)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (short)-1))));
        }
        arr_27 [i_3] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
    }
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)27374)) >= (((/* implicit */int) arr_40 [i_14 + 2] [i_14 - 1] [i_14 + 2] [i_14] [i_14 + 2] [i_14 + 2]))));
                            var_29 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (unsigned short)31413)) <= (((/* implicit */int) (short)16878)))));
                            arr_42 [i_11] [i_14] [i_11] [i_12] [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 + 2] [i_14 + 1]))));
                            var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_11] [i_14] [i_14] [i_11] [i_14 - 1] [i_14 + 2])) ? (((/* implicit */int) arr_40 [i_10] [i_12] [i_10] [i_12] [i_10] [i_14 + 2])) : (((/* implicit */int) (short)32767))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (unsigned short)44962)) : (((/* implicit */int) (short)(-32767 - 1))))))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
                        {
                            var_32 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-23745))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31755)) <= (((/* implicit */int) arr_39 [i_10] [i_11] [i_11] [i_12] [i_15])))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_39 [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_31 [i_10] [i_11] [i_10])))))));
                            var_35 *= ((/* implicit */short) ((unsigned char) ((_Bool) arr_32 [i_10])));
                        }
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) /* same iter space */
                        {
                            arr_47 [i_12] [i_11] [i_12] [i_11] [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) (+(19U)));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)221)) ? (10745984073359090153ULL) : (((/* implicit */unsigned long long int) 3837139595U)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22381)) | (((/* implicit */int) (unsigned short)65510))))))))));
                        }
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */int) arr_38 [i_10] [i_10] [i_10] [i_12] [i_10] [i_10])) + (((((/* implicit */_Bool) arr_28 [i_11] [i_11])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)22266)))))))));
                        var_38 *= ((/* implicit */short) (unsigned short)11575);
                        arr_48 [i_10] [i_11] [i_12] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_11] [i_13])) ? (((/* implicit */int) (short)-30857)) : (((/* implicit */int) arr_30 [i_10]))));
                    }
                    for (unsigned char i_17 = 1; i_17 < 9; i_17 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_11] [i_11] [i_12] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_10] [i_11] [i_12] [i_12] [i_12]))) : (arr_4 [i_10] [i_10]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_10] [i_11] [i_10] [i_12] [i_17])) ? (10745984073359090144ULL) : (arr_6 [i_17] [i_11] [i_12] [i_17])))) ? (((/* implicit */int) ((unsigned short) (short)-13))) : (((/* implicit */int) arr_40 [i_17] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 2] [i_17 + 2])))))));
                        var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)30833)) ? (((/* implicit */int) ((unsigned short) arr_36 [i_17] [i_11] [i_12] [i_11] [i_10]))) : (((/* implicit */int) arr_45 [i_11] [i_12] [i_12] [i_10] [i_10] [i_11])))) | ((~((~(((/* implicit */int) arr_49 [i_10] [i_10] [i_11] [i_12] [i_10]))))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
                        {
                            var_41 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_33 [i_10] [i_10] [i_10]))));
                            arr_56 [i_10] [i_11] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)152))));
                        }
                        arr_57 [i_10] [i_10] [i_11] [i_11] [i_10] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) (signed char)89)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) != (7700760000350461473ULL))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243))))), ((~(((/* implicit */int) arr_52 [i_18] [i_18] [i_12] [i_12] [i_11] [i_10])))))) : ((~(((/* implicit */int) max((arr_40 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned char) (signed char)-91)))))))));
                        arr_58 [i_11] [i_11] = max((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-1))))));
                        arr_59 [i_10] [i_12] [i_11] [i_18] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) (+(3700464608U)))))))));
                    }
                    arr_60 [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)1))));
                    arr_61 [i_11] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)129)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12] [i_11] [i_10] [i_11] [i_10]))) >= (1595113043U))))));
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */_Bool) var_16);
}
