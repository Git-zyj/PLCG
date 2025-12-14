/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213966
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
    var_13 = ((/* implicit */long long int) var_1);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (short)-5592)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) (short)10098);
                var_16 -= min((((/* implicit */unsigned long long int) ((var_2) ? (arr_5 [i_0 - 1] [(_Bool)1] [i_0]) : ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))), (max((((/* implicit */unsigned long long int) ((long long int) var_2))), (max((((/* implicit */unsigned long long int) var_10)), (var_6))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) == (var_3)));
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((((/* implicit */int) max((arr_6 [i_2]), (arr_6 [i_2])))), (((int) arr_8 [i_2]))));
        var_19 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        var_20 = ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_21 = ((/* implicit */short) var_6);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)167)) || (((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_6])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned char) (short)-346);
                            var_24 = ((/* implicit */short) arr_20 [i_5 - 3] [i_5 - 2] [i_5] [i_7 + 1]);
                            var_25 = ((/* implicit */int) min((var_25), (((int) ((_Bool) (unsigned char)211)))));
                            var_26 = ((/* implicit */signed char) (short)0);
                            var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_19 [i_7] [i_7] [i_5] [i_7]));
                        }
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_4] [i_8 + 2] [i_5 + 2] [i_4])) ? (((((/* implicit */_Bool) arr_20 [i_3] [i_5] [i_4] [i_8])) ? (((/* implicit */long long int) var_12)) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))));
                            var_29 -= ((/* implicit */signed char) (((-(arr_8 [i_5 + 3]))) - (((((/* implicit */_Bool) var_8)) ? (210728774) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_5] [i_6] [i_8 - 1]))))));
                            var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30397))) + (var_3));
                            var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((var_10) - (((/* implicit */long long int) arr_19 [i_3] [i_4] [i_4] [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-14568))))));
                        }
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) var_2);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_5 - 3])) ? (((((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_5])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_5] [i_9]))))) : (((/* implicit */long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))))))));
                        var_34 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_9] [i_4]))))) ? (11889213352139581296ULL) : ((~(428692403490344030ULL))));
                        arr_31 [7ULL] [i_5] [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2])) ? (3619378219U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        arr_32 [i_5] = (((!(((/* implicit */_Bool) (unsigned char)238)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_4] [i_5] [i_5])) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) arr_12 [(unsigned char)18]))))));
                    }
                    var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11889213352139581296ULL))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 2; i_11 < 22; i_11 += 3) /* same iter space */
                        {
                            arr_38 [i_4] [i_4] [i_5 - 3] [i_5] [i_11] &= ((/* implicit */unsigned long long int) arr_34 [i_10] [10LL] [i_5 - 3] [i_5 - 3]);
                            var_36 *= ((/* implicit */short) (unsigned char)1);
                            arr_39 [i_4] [i_3] [i_4] [i_4] &= ((/* implicit */unsigned long long int) arr_28 [20ULL] [i_11]);
                            var_37 = ((13717389652346024355ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_4] [i_5] [i_4] [i_11]))));
                            var_38 = ((/* implicit */short) arr_7 [(unsigned char)18] [i_5 + 1]);
                        }
                        for (unsigned char i_12 = 2; i_12 < 22; i_12 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned char) var_6);
                            var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_12 - 2]))));
                            var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                        }
                        var_42 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_43 = (-((-(0ULL))));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(428692403490344036ULL)))) || (((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                    }
                    for (signed char i_13 = 2; i_13 < 20; i_13 += 2) 
                    {
                        var_45 = ((/* implicit */short) (-(1705751415)));
                        var_46 = ((/* implicit */short) arr_15 [i_5 + 3] [i_13 - 1]);
                    }
                    var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_18 [i_3] [i_5] [i_3] [i_4]))))))));
                }
            } 
        } 
        arr_47 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)2)) ? (var_3) : (var_3)));
        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) 2041446371)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_41 [(short)16] [(short)16] [i_3]))));
        var_49 = ((/* implicit */long long int) var_8);
    }
}
