/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201602
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 *= ((unsigned char) ((((/* implicit */int) arr_0 [(signed char)16])) * (((/* implicit */int) var_14))));
        var_18 *= ((/* implicit */unsigned long long int) ((max((arr_2 [i_0]), (arr_2 [i_0]))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(_Bool)1])) - (((/* implicit */int) arr_0 [(signed char)14])))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_9 [i_1 - 1])) * (((/* implicit */int) (unsigned char)76))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) arr_4 [i_1]))));
                    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1])) ? (max((8ULL), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)11] [i_2] [(unsigned char)14] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_1] [i_1])))))) + (((/* implicit */unsigned long long int) (+(4LL))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (int i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (long long int i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_8] [i_7 - 1] [i_4] [i_4])), (var_0)))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1))))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) ((signed char) 143816532834439781ULL))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (8521215115264ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 1] [i_5 + 1] [i_7 + 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_19 [i_5 + 1] [1] [i_9] [i_4] [i_9]), (arr_19 [i_5 + 1] [i_5 + 1] [i_9] [i_4] [i_5 + 1])))) ? (((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5] [i_4] [i_4] [i_4])) ? (1048575) : (((/* implicit */int) arr_7 [i_5 + 1] [i_4])))) : (((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5 + 1] [2LL] [i_4] [i_5])) ? (348748911) : (((/* implicit */int) arr_7 [i_5 + 1] [i_4]))))));
                    var_26 = ((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_5 - 1] [(short)4] [(unsigned char)16]);
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_4] [i_5 + 1] [8]))) * (2647121780U))) + (((/* implicit */unsigned int) ((int) arr_18 [i_9] [i_5] [1U] [i_4])))));
                    var_28 = ((/* implicit */unsigned char) arr_7 [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) arr_7 [(unsigned char)7] [i_4]);
                                var_30 = ((/* implicit */long long int) ((7866550865186649803ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)154)) ? (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_12] [16LL] [(signed char)13] [i_4]))))) : (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (1332540180627766340ULL))))));
                    var_32 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_10 [i_4])))) + (2147483647))) << ((((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12]))) | (2337510680476045289ULL))))) - (2337510680476045289ULL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_31 [i_4] [i_5] [(unsigned short)3] [i_13]))));
                        var_34 = ((/* implicit */unsigned short) var_1);
                        var_35 *= ((/* implicit */signed char) 981509150177070710ULL);
                        var_36 = ((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_5 - 1] [i_4] [i_13]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)102));
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4] [i_4])) ^ (((/* implicit */int) (short)4095))))) ? ((~(((/* implicit */int) arr_21 [(unsigned char)12] [(unsigned short)8] [i_4] [i_4] [i_4])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_27 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) (unsigned char)242))))));
                                var_39 = ((/* implicit */_Bool) (-(min((((4304098902085044616LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) arr_8 [i_4] [(_Bool)1] [i_4] [i_4]))))));
                                var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_12) ? (var_4) : (((/* implicit */unsigned long long int) 7864364868844208737LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11811699870036378399ULL))))))))) ? (((arr_37 [i_4] [i_5 - 1] [i_4] [i_5] [i_4] [i_12]) ? (((/* implicit */int) arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_37 [i_4] [i_5 + 1] [i_4] [i_12] [i_14] [i_15])))) : (((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (8886471438889129210ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3069749035U)) || ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)3068)) && (((/* implicit */_Bool) 1213161790)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_42 = ((/* implicit */signed char) ((var_16) * (((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
}
