/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22235
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            arr_13 [1] [i_1] [i_2 + 1] [i_3] [6LL] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (arr_3 [i_2 + 1] [i_2] [i_2 + 1])));
                            var_18 = ((/* implicit */short) arr_12 [i_3 - 2] [i_4] [i_1] [i_4] [i_1 - 1]);
                            arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) ((short) (short)-32759)))));
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1020))));
                        }
                        var_20 = ((/* implicit */signed char) var_13);
                        var_21 -= ((/* implicit */int) (signed char)(-127 - 1));
                    }
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_1 - 1]))));
                        var_22 = ((/* implicit */int) (~((+(561391296U)))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */int) (signed char)-80);
                            var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_11 [i_1] [i_6] [i_1] [i_6] [i_1])) ? (arr_0 [i_5]) : (3004890927U)))));
                            var_25 *= arr_17 [i_1 - 3] [i_1 - 3] [0LL] [i_2 + 1] [i_5] [i_5 - 2];
                            var_26 *= ((/* implicit */unsigned int) var_13);
                        }
                        var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */short) (+(((8907445701060539449LL) >> (((-725292132) + (725292145)))))));
                        arr_24 [i_0] [i_1] [i_2] [i_7] = arr_23 [i_0] [i_0] [i_0] [i_7 - 1] [i_7 - 1];
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_29 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)114)) || (((/* implicit */_Bool) (short)-30903))));
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)101))));
                        arr_27 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_1 - 2] [i_2 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 1]))));
                        arr_28 [i_8] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) (short)-32760)) / (((/* implicit */int) var_5))))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1)))))));
                    }
                    arr_29 [i_0] [i_0] [i_1] [13] = ((/* implicit */short) ((arr_20 [i_1 + 1] [i_2 + 1]) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_20 [i_1 - 1] [i_1 + 1]))));
                    var_32 ^= ((/* implicit */short) arr_20 [i_2 + 1] [i_2 + 1]);
                    arr_30 [(short)0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_16)))));
                }
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (long long int i_10 = 4; i_10 < 16; i_10 += 1) 
                    {
                        for (short i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_39 [i_0] [i_0] [i_9] [i_9] [i_11] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (-(arr_1 [i_11 - 1] [i_11 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (signed char)116)))));
                                var_33 = ((/* implicit */signed char) arr_15 [(signed char)12] [i_1] [i_9] [i_9] [i_9] [i_11 + 1]);
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (signed char)-52)))), (arr_25 [i_11] [i_9] [i_1 - 3]))))));
                            }
                        } 
                    } 
                } 
                arr_40 [i_0] [i_0] = (-(((/* implicit */int) max((arr_37 [i_1 + 1] [10LL] [i_1] [10LL] [i_0]), (((unsigned short) var_0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        for (short i_13 = 1; i_13 < 10; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                {
                    arr_51 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) (short)32747);
                    var_35 = ((/* implicit */_Bool) var_7);
                    arr_52 [i_12] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) -1758420651);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        for (long long int i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            {
                arr_61 [i_16] [i_16] |= ((/* implicit */unsigned int) (-(min((arr_56 [i_15]), (((/* implicit */long long int) -1))))));
                arr_62 [i_15] [i_16] = (!((!(((/* implicit */_Bool) 141313706)))));
                /* LoopSeq 1 */
                for (long long int i_17 = 2; i_17 < 20; i_17 += 4) 
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_59 [i_17 + 1] [i_17 - 2] [i_17 - 2]), (arr_59 [i_17 - 1] [i_17 - 1] [i_17 + 1])))) ? (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (short)32759)))) : (((int) var_12))));
                    arr_65 [1] [1] [i_16] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) (short)9455)) ? (arr_53 [i_15] [i_15]) : (((/* implicit */int) (short)8315))))))));
                    arr_66 [i_16] = ((/* implicit */int) max((min(((short)8701), (((/* implicit */short) (signed char)-117)))), (((/* implicit */short) (signed char)-113))));
                    var_37 ^= ((/* implicit */int) arr_57 [i_15]);
                }
                var_38 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)120)), (((short) arr_63 [i_15]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (((5U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761)))))));
                var_39 = ((/* implicit */unsigned int) (short)-32749);
            }
        } 
    } 
    var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) var_14))));
}
