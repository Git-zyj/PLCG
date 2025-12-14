/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244425
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6))))))));
                                var_17 = ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)166))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_9 [i_4] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_4] [i_3 - 2] [i_2] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)223)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                            arr_20 [i_0] [i_0] [(unsigned char)9] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)76), (((/* implicit */signed char) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_12 [i_5] [i_0])))))))) && (((/* implicit */_Bool) ((((long long int) arr_0 [i_0])) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~(((((/* implicit */int) max((((/* implicit */short) var_6)), (arr_9 [i_1] [i_1])))) * (((/* implicit */int) (!((_Bool)1))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_19 [i_0] [i_1] [(short)6] [i_7] [i_0] [i_8])) <= (((/* implicit */int) (unsigned char)162)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)158)) << (((/* implicit */int) arr_6 [i_0]))))) : (((long long int) var_11))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_10 [i_8])))) >= ((+(((/* implicit */int) (signed char)123))))))) : (((/* implicit */int) arr_9 [i_0] [i_0]))));
                            var_22 = ((int) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_0] [i_0]))))));
                            var_23 = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 14; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (signed char i_12 = 3; i_12 < 14; i_12 += 2) 
                    {
                        {
                            arr_35 [i_9] [3U] [i_10] [1ULL] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_26 [i_9] [i_12])) ? (((((/* implicit */_Bool) (unsigned char)97)) ? (2136039675U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9] [i_10] [i_10] [i_12])))))));
                            var_24 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)167))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 2) 
                {
                    for (unsigned int i_14 = 1; i_14 < 14; i_14 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (signed char)-5);
                            var_26 = ((/* implicit */long long int) (unsigned char)207);
                            var_27 = min((min((((/* implicit */int) ((797850462U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) arr_32 [2] [2] [i_14])) - (((/* implicit */int) var_9)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_9] [i_9] [(unsigned char)4] [i_9 - 1] [i_9 + 2]))))) >> (((/* implicit */int) ((((/* implicit */int) arr_30 [i_9 - 1] [i_9] [i_9] [i_9])) < (arr_37 [i_9 + 3] [i_10])))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_8))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_27 [i_14] [i_14 + 2])) <= (((/* implicit */int) arr_27 [i_14] [i_14 + 1]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            {
                                var_30 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 4222917151U))));
                                var_31 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)255)), ((-2147483647 - 1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_62 [i_15] [i_16] [i_17] [i_15] [i_20] = ((((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) - (arr_48 [i_15] [(unsigned char)17])))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)56)))) || (((/* implicit */_Bool) min((arr_60 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_20] [i_20] [i_20] [i_20]), (((/* implicit */long long int) arr_48 [i_15] [i_16])))))))) : (max((((/* implicit */int) var_9)), ((+(((/* implicit */int) arr_42 [i_15])))))));
                                arr_63 [(unsigned char)7] [i_16] [2] [2] [i_21 - 1] = ((/* implicit */int) (!(((arr_50 [i_20] [(signed char)1]) && (((/* implicit */_Bool) ((int) var_14)))))));
                                var_32 = ((/* implicit */int) max((((unsigned long long int) 5252617685844280191LL)), (((/* implicit */unsigned long long int) ((((int) (unsigned char)66)) >= (((int) var_3)))))));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_60 [i_15] [i_16] [i_17] [i_20] [i_21] [i_16] [i_17])) >= (var_2))))))) ? (arr_55 [i_15] [i_15] [i_15] [i_15]) : (11435391936776788292ULL)));
                                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((max((-8332129416477403696LL), (((/* implicit */long long int) (unsigned char)90)))) / (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_22 = 2; i_22 < 10; i_22 += 2) 
    {
        for (long long int i_23 = 0; i_23 < 13; i_23 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
                {
                    for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */int) min((max((((/* implicit */long long int) arr_36 [i_22 + 1] [i_23] [i_22 + 1] [i_25])), (((((/* implicit */_Bool) arr_33 [i_25] [i_24] [i_23] [1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) min((min((((/* implicit */int) (_Bool)1)), (-819803359))), (var_8))))));
                            arr_72 [i_22 + 1] [i_25] [i_24] [i_25] [i_25] [i_22 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_22] [(signed char)7] [i_24] [(signed char)18])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) != ((-(arr_60 [i_22] [i_22] [i_23] [i_22] [6LL] [i_22] [i_25])))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11435391936776788298ULL))))), (((unsigned long long int) (unsigned char)196)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_26 = 1; i_26 < 11; i_26 += 2) 
                {
                    for (int i_27 = 0; i_27 < 13; i_27 += 2) 
                    {
                        {
                            arr_77 [i_22 + 3] [i_23] [i_26 + 2] [i_27] = ((/* implicit */int) arr_47 [i_22] [i_27]);
                            var_37 ^= 402653184;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_28 = 0; i_28 < 13; i_28 += 2) 
                {
                    for (signed char i_29 = 0; i_29 < 13; i_29 += 2) 
                    {
                        for (int i_30 = 0; i_30 < 13; i_30 += 2) 
                        {
                            {
                                arr_87 [i_22] [i_29] [i_22] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_44 [i_22 + 1] [i_29])))) % (var_1))) * (min((((arr_46 [17] [i_30]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))))), (((/* implicit */long long int) arr_33 [(signed char)16] [i_23] [i_28] [i_29]))))));
                                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((_Bool) 1966080U)) ? (((/* implicit */int) (_Bool)1)) : (arr_68 [i_22] [3U] [i_28])))), (min((arr_45 [i_28]), (((/* implicit */unsigned int) ((4) / (((/* implicit */int) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 13; i_31 += 2) 
                {
                    for (int i_32 = 0; i_32 < 13; i_32 += 2) 
                    {
                        {
                            var_39 ^= ((/* implicit */int) (((+(var_2))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_81 [i_22 - 2] [i_31] [11U] [i_32])))));
                            var_40 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-100))));
                            var_41 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_31 [i_32] [i_32] [i_31] [i_22 - 1]))));
                            var_42 = ((/* implicit */_Bool) min((((min((arr_60 [i_22 - 1] [i_22 + 1] [i_22] [i_22] [i_22] [i_22 + 2] [i_22 - 2]), (((/* implicit */long long int) (unsigned char)32)))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) arr_55 [i_31] [i_31] [i_22 - 2] [i_22 - 2]))))), (arr_67 [i_22]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
