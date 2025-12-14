/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239146
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (3096792720653149112LL));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(arr_1 [i_0]))))));
        var_17 ^= ((/* implicit */long long int) arr_2 [(unsigned char)10] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_18 *= arr_12 [i_2];
                        arr_14 [i_2] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) (~(arr_4 [i_0])));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_23 [i_4] [i_5] [i_4] [i_6] = min(((+(((arr_22 [i_4] [i_5] [i_6] [i_6]) + (((/* implicit */unsigned long long int) arr_16 [i_5])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) - (arr_22 [(unsigned short)1] [i_5] [4U] [4U]))))))));
                    arr_24 [7ULL] [i_5] [i_4] [7ULL] = ((/* implicit */unsigned long long int) arr_15 [i_4]);
                    arr_25 [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) arr_15 [9ULL]);
                }
            } 
        } 
        arr_26 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) arr_21 [i_4] [i_4] [i_4] [i_4]))), (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) % (var_2))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                arr_38 [(signed char)3] [i_8] [i_7] [i_7] [i_11] = ((/* implicit */signed char) ((unsigned short) arr_32 [i_7] [i_8] [i_9] [(unsigned short)4]));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_15 [i_7]))))))) ? (((unsigned long long int) 3096792720653149137LL)) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_33 [i_7] [(_Bool)1] [i_9])), ((-(var_10))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_2 [2ULL] [i_9]))));
                }
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (~(((unsigned int) var_1))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        arr_46 [i_7] = -3096792720653149112LL;
                        arr_47 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_7])) && (((/* implicit */_Bool) 261632ULL))));
                        arr_48 [i_7] [i_8] [i_13] [i_7] = ((/* implicit */unsigned short) ((var_5) + (arr_39 [i_7] [i_8] [i_13])));
                        var_22 = ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_7] [i_7] [i_8] [i_12] [(signed char)3]))) / (arr_21 [i_7] [i_8] [i_12] [i_7]));
                    }
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        arr_52 [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)35389))));
                        arr_53 [i_7] [i_8] [i_8] [i_7] [6ULL] = ((/* implicit */unsigned short) ((arr_39 [i_7] [i_8] [i_12]) - (arr_39 [i_8] [i_12] [i_14])));
                    }
                    var_23 = ((/* implicit */unsigned long long int) var_3);
                    arr_54 [i_7] [i_8] [i_7] [i_12] = ((/* implicit */unsigned int) var_5);
                }
                for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            {
                                var_24 = arr_7 [i_7];
                                arr_61 [i_7] [i_16] [i_17] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_59 [i_17] [i_8] [i_15] [i_16] [i_17])) - (((((/* implicit */_Bool) 15673944032221400799ULL)) ? (((/* implicit */int) arr_59 [4ULL] [(unsigned char)2] [i_15] [i_16] [0LL])) : (((/* implicit */int) arr_43 [2LL] [i_8] [i_15] [i_16] [i_17]))))))));
                            }
                        } 
                    } 
                    arr_62 [i_7] = ((/* implicit */long long int) max((max((arr_12 [i_7]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)165))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_7] [i_8])) ? (((/* implicit */int) (signed char)-107)) : (((((/* implicit */int) (unsigned char)5)) * (((/* implicit */int) var_1)))))))));
                }
                var_25 *= ((/* implicit */signed char) max((arr_1 [i_7]), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) - (((/* implicit */int) arr_15 [i_7])))))))));
                /* LoopNest 3 */
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((/* implicit */long long int) arr_42 [i_7] [i_8] [i_19] [i_19])), (((((/* implicit */long long int) (~(((/* implicit */int) arr_45 [i_7] [i_8] [i_7] [i_19] [i_20]))))) - (((((/* implicit */_Bool) arr_29 [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [2ULL] [i_8] [i_7] [i_19] [i_8]))) : (arr_36 [i_8]))))))))));
                                var_27 = ((/* implicit */unsigned long long int) ((long long int) (((!(((/* implicit */_Bool) arr_40 [i_8] [(unsigned short)3] [(unsigned short)8])))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) (unsigned short)30147)))))));
                                arr_71 [i_7] [i_7] [i_18] [i_7] [i_7] = ((/* implicit */unsigned char) -3096792720653149131LL);
                                var_28 = ((/* implicit */_Bool) var_12);
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_7] [i_8] [i_18] [i_19] [i_20]))))))))));
                            }
                        } 
                    } 
                } 
                var_30 = max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_7]))))), (arr_63 [i_7] [i_8]));
            }
        } 
    } 
}
