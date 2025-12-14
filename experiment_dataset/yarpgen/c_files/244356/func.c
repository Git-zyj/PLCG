/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244356
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
    for (short i_0 = 4; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_16 += var_2;
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) (unsigned short)52534)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((var_4) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))))) ? ((+(((/* implicit */int) ((var_0) <= (((/* implicit */long long int) var_3))))))) : (((/* implicit */int) arr_2 [i_0 - 4]))));
            arr_4 [i_0 - 2] [i_0 - 2] [9U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_0]) ? (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((6308251739189263071LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)92))))))) : (((arr_3 [i_0 - 1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (arr_0 [i_0 + 1])))));
            var_18 = max((((/* implicit */long long int) arr_3 [i_1] [i_0])), (max((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (max((((/* implicit */long long int) var_12)), (var_2))))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
    }
    for (short i_2 = 4; i_2 < 18; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_19 &= max((((/* implicit */long long int) max((((/* implicit */int) max((var_11), (((/* implicit */short) arr_3 [i_2] [i_3]))))), ((+(((/* implicit */int) var_7))))))), (((((long long int) 6308251739189263071LL)) + (((/* implicit */long long int) ((/* implicit */int) max(((short)992), (((/* implicit */short) arr_3 [i_2 - 1] [i_2 - 1])))))))));
                    var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_4])) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))))) >= (((/* implicit */unsigned int) arr_8 [i_2 - 2] [i_3 - 2])))) ? (((/* implicit */int) (((+(2199023255551LL))) != (((/* implicit */long long int) (-(var_9))))))) : (767653075)));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-32764))));
        arr_15 [i_2] = ((/* implicit */int) arr_2 [(signed char)5]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_12 [4U] [i_5] [i_5] [i_6])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_6] [i_5]))))) : (((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5] [i_5]))) : (arr_0 [i_6])))));
                /* LoopSeq 2 */
                for (short i_7 = 4; i_7 < 12; i_7 += 1) 
                {
                    arr_23 [i_5] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) (signed char)0);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned char)93)))) >= (((/* implicit */int) (unsigned short)9902)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_5] [i_5]))))) : (((max((((/* implicit */unsigned long long int) var_10)), (18446744073709551612ULL))) & (((/* implicit */unsigned long long int) (~(4294967285U))))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */long long int) max(((+(((/* implicit */int) arr_2 [i_5])))), (((/* implicit */int) arr_24 [i_6] [i_9 - 1] [i_6] [i_9] [i_9] [i_9 + 1]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [i_5] [i_6] [(short)2] [i_8] [i_6])) ? (((/* implicit */int) arr_19 [i_6] [i_9])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)7] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (-2199023255557LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_6])) << (((arr_0 [i_5]) - (1781759700U)))))))))))));
                                arr_30 [i_7] = ((/* implicit */signed char) ((max((((/* implicit */long long int) max(((signed char)-11), ((signed char)126)))), (((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [i_5] [(unsigned char)10] [i_5] [i_7])) ? (4266502597771775519LL) : (arr_20 [i_5]))))) - (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) arr_24 [i_7] [i_6] [i_6] [i_7] [8U] [i_6])) : (((/* implicit */int) arr_11 [i_7] [i_7] [i_7]))))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [3U] [i_6] [i_6] [i_6] [i_7]))) : (arr_6 [i_9])))))));
                                var_25 = ((/* implicit */unsigned int) arr_29 [i_7]);
                                var_26 -= (~((~((-(((/* implicit */int) arr_19 [(unsigned char)2] [2U])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) arr_20 [i_7]);
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(short)6] [i_7 + 2])) ? (((/* implicit */unsigned int) arr_18 [(signed char)6] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_19 [i_5] [1])) ? ((-(33554431U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-2017420430541567871LL) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
                        var_29 = ((/* implicit */unsigned int) (signed char)83);
                    }
                }
                for (unsigned short i_11 = 3; i_11 < 13; i_11 += 3) 
                {
                    var_30 |= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) arr_18 [i_5] [i_6] [i_11 + 1])) : (arr_20 [7LL])))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_5] [i_11 - 2] [i_11] [i_11 - 1] [i_11] [i_11])) % (((/* implicit */int) arr_26 [i_5] [i_11 - 3] [i_11] [i_11 + 1] [i_5] [i_11]))))) ? (((/* implicit */int) arr_26 [i_5] [i_11 - 3] [6U] [i_11 - 1] [12U] [i_11])) : (((((/* implicit */_Bool) arr_26 [i_11] [i_11 - 3] [(_Bool)1] [i_11 - 1] [(short)0] [i_11])) ? (((/* implicit */int) arr_26 [i_5] [i_11 - 3] [i_11] [i_11 - 1] [i_11] [i_11])) : (((/* implicit */int) arr_26 [i_6] [i_11 - 3] [i_11 - 3] [i_11 + 1] [i_11] [i_11]))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 4; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_11] [i_11])) ? (33554431U) : (arr_10 [i_12] [i_11] [(unsigned short)1])))) ? (((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) arr_37 [i_13 - 2] [6LL] [6LL] [i_6] [i_5])) : (((/* implicit */int) (unsigned char)76)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_11] [8LL] [i_5])) ? (arr_14 [i_5] [i_6]) : (((/* implicit */int) arr_33 [i_6] [i_6]))))) ? (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_5))))) : ((~(((/* implicit */int) arr_33 [(short)4] [i_11])))))));
                                var_33 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_11 - 2] [i_13 + 1] [i_11 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_21 [i_6]))))) ^ ((-(((unsigned int) (signed char)1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 10; i_14 += 2) 
                    {
                        var_34 = (+((+(arr_12 [(short)11] [i_11] [i_11 + 1] [i_14]))));
                        var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-11))));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_6] [4] [i_6] [i_6] [i_14 + 4] [i_14 + 4])) & (8191))))));
                    }
                    for (int i_15 = 1; i_15 < 12; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [(_Bool)1])) ? (2815657351U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) arr_47 [i_5] [i_11 - 2] [i_15 + 1] [4ULL] [i_15 + 1])) : (((((/* implicit */long long int) 8191)) + (var_13))))))))));
                        arr_48 [i_11] [i_11 - 3] [i_11] [i_6] [i_5] [i_11] = ((/* implicit */_Bool) (unsigned short)197);
                        var_38 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_19 [2] [2])))), (((((/* implicit */_Bool) -8193)) ? (arr_14 [i_6] [i_11]) : (((/* implicit */int) (unsigned short)197))))))) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) arr_46 [i_15] [i_5]))));
                        var_39 = (unsigned char)222;
                    }
                    for (int i_16 = 1; i_16 < 12; i_16 += 1) 
                    {
                        arr_52 [i_11] [i_11] = ((/* implicit */unsigned char) max(((~(max((((/* implicit */long long int) 4294967295U)), (var_0))))), (((/* implicit */long long int) max((-1), (((/* implicit */int) arr_36 [5ULL] [5ULL] [i_11] [i_11])))))));
                        var_40 += ((/* implicit */_Bool) max(((unsigned short)65535), ((unsigned short)206)));
                    }
                    var_41 = ((/* implicit */signed char) max((-8190), (((/* implicit */int) (_Bool)1))));
                }
                var_42 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
            }
        } 
    } 
    var_43 = (-(((((1638402991U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))))) & (((((/* implicit */_Bool) 4294967295U)) ? (1U) : (2519315386U))))));
    var_44 = ((/* implicit */short) 16U);
    var_45 -= ((/* implicit */unsigned long long int) ((((var_5) ? ((+(16777215U))) : (3998096546U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
