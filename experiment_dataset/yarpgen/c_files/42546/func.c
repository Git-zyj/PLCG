/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42546
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) (!(var_9)));
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_2 - 1]))));
                        var_18 -= ((/* implicit */unsigned short) ((signed char) arr_2 [i_3 + 2]));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (unsigned char)23))));
            var_21 = ((/* implicit */unsigned int) (unsigned short)4415);
            var_22 = ((/* implicit */unsigned short) var_8);
        }
        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) max((min((((var_8) / (var_8))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_12 [i_6] [i_4])))))))));
            var_24 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_6])) ? (arr_3 [i_6]) : (arr_3 [i_4]))), ((-(arr_3 [i_6])))));
        }
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_23 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_4])) ? (((4294967284U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) arr_17 [(unsigned short)13] [i_7])))) << (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) (unsigned short)19062))))) ? (((/* implicit */int) ((short) var_4))) : ((+(arr_17 [(signed char)7] [i_4])))))));
            var_25 = ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) 10972888530771553823ULL))), (arr_19 [i_4])))) ? (((unsigned long long int) arr_0 [i_4] [i_4])) : (((/* implicit */unsigned long long int) min((((long long int) var_3)), (((/* implicit */long long int) arr_2 [i_7]))))));
        }
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_26 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [3ULL]))));
            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)14007))));
        }
        arr_28 [i_4] = ((/* implicit */unsigned short) (signed char)-76);
    }
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_39 [i_9] [1U] [i_10] [i_12] [i_10] = ((/* implicit */unsigned char) arr_30 [i_9] [(unsigned char)5]);
                        var_28 = ((/* implicit */_Bool) ((min((min((((/* implicit */unsigned int) var_13)), (var_7))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), (var_15)))))) | (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_9])) ? (arr_17 [11U] [i_12]) : (((/* implicit */int) arr_24 [i_11] [(short)3] [12ULL])))))))));
                        arr_40 [i_9] [(unsigned short)11] [i_9] [i_12] [i_12] [i_12] = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)131))))) && (((/* implicit */_Bool) arr_5 [i_9]))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_10] [i_12])) - (((/* implicit */int) var_5))))) ? (min((var_8), (((/* implicit */unsigned long long int) 4294967291U)))) : (((/* implicit */unsigned long long int) ((2735942363U) >> (((3603049888U) - (3603049866U))))))));
                        /* LoopSeq 3 */
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) arr_9 [i_9] [9U] [i_11] [i_12] [i_13] [(_Bool)1]);
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 2735942386U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) : (1559024885U))))));
                            arr_43 [i_13] [i_12] [i_12] [(signed char)8] [i_12] [i_9] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_9)), (((unsigned int) arr_41 [i_9] [i_10] [i_10] [i_12] [i_13]))));
                        }
                        for (signed char i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                        {
                            var_32 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) arr_12 [i_10] [i_14]))), (arr_38 [i_9] [i_9] [i_11] [8U] [(unsigned short)2] [i_9])));
                            arr_46 [i_10] [i_10] [(unsigned short)13] [i_12] = ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (arr_20 [i_9] [i_9] [9ULL]) : (((/* implicit */int) arr_44 [i_9] [i_10] [i_11] [i_12] [i_12] [i_12] [i_12]))));
                            arr_47 [i_9] [i_12] [i_11] [i_12] = var_2;
                            var_33 = ((/* implicit */short) (-((-(arr_36 [i_12] [i_10] [i_14] [i_12])))));
                            var_34 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_9)), (var_1)));
                        }
                        for (signed char i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
                        {
                            arr_50 [i_12] [i_12] [i_12] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_9] [(unsigned char)4] [11LL])), (5949305533053753442ULL)))))))) * (1559024934U)));
                            var_35 = ((/* implicit */unsigned short) min((min((2936437900658650753ULL), (((/* implicit */unsigned long long int) arr_30 [i_9] [i_9])))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)2)) | (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) max(((short)-18921), (((/* implicit */short) arr_0 [i_12] [i_9]))))))))));
                            var_36 &= ((/* implicit */_Bool) var_7);
                        }
                    }
                    arr_51 [i_9] [i_9] [i_11] = ((/* implicit */long long int) arr_25 [i_10]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            for (long long int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_60 [i_16] [(signed char)0] [i_18] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        var_37 |= ((/* implicit */int) ((min((8388607ULL), (((/* implicit */unsigned long long int) 1559024928U)))) << (((((/* implicit */_Bool) arr_30 [i_9] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [(signed char)0])) || (((/* implicit */_Bool) arr_8 [i_18] [i_9] [i_16])))))) : (1559024904U)))));
                        var_38 -= ((min((var_0), ((~(((/* implicit */int) var_4)))))) / (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (unsigned short)2945)) ? (((/* implicit */int) arr_45 [i_18] [i_18] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_11 [7LL])))))));
                        var_39 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (min((((/* implicit */unsigned short) var_10)), (var_11)))))) - (21035)))));
                    }
                } 
            } 
        } 
        arr_61 [i_9] [(unsigned char)9] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_9])))))));
        arr_62 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) min((arr_6 [i_9]), (((/* implicit */unsigned int) var_15))))) < (((((/* implicit */_Bool) (signed char)0)) ? (-8848269830433848228LL) : (((/* implicit */long long int) 2735942386U))))))) / ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    }
}
