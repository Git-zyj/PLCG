/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215359
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned char) ((unsigned short) var_1))))));
        }
        for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) ((_Bool) (signed char)4))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_3 [i_4]);
                            var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (-6978722670173505935LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) var_10))))) : (min((((/* implicit */long long int) arr_10 [i_0] [(short)5] [i_0] [2U])), (6978722670173505935LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_20 [i_2] [(_Bool)0] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [1ULL] [1ULL])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_6]))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [i_4] [i_2 - 3] [i_3 + 2] [i_2 - 3] [i_6] [i_6] [i_2])) << (((((/* implicit */int) arr_2 [i_0] [i_2 - 1])) - (69))))) != (((/* implicit */int) ((signed char) arr_14 [i_0] [i_2 - 2] [i_3] [i_3] [i_4] [i_2 - 2] [i_6])))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) (signed char)11)) : (3067220196U)));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((var_1) ^ (((/* implicit */unsigned int) (~(var_5)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) var_2);
                            var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_10)))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        {
                            arr_29 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((+(((/* implicit */int) (signed char)-12)))) : (((/* implicit */int) ((unsigned short) var_3)))));
                            arr_30 [i_0] [i_0] [i_2 + 2] [(short)5] [0U] [i_9] [(short)5] = ((/* implicit */_Bool) ((arr_10 [i_0] [i_9] [i_0] [i_2 - 1]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) : ((+(arr_19 [i_0] [i_8] [i_2] [i_2 - 2] [i_2 - 2])))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) + (var_9)))) ? (((var_6) ? (3841798807U) : (3841798814U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))));
                            var_22 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((var_6) ? ((-(((/* implicit */int) arr_3 [i_2])))) : ((-(((/* implicit */int) var_6))))))) > (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (unsigned short)21559)))))));
                        }
                    } 
                } 
            } 
            var_23 += ((/* implicit */signed char) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35116)))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            arr_33 [i_0] [i_0] [i_11] = ((/* implicit */unsigned int) var_3);
            var_24 = ((/* implicit */short) ((int) 1271995352));
            /* LoopSeq 3 */
            for (long long int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_34 [i_11]))) & ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_11] [i_0] [i_11] [i_0]))))))))));
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_11] [i_11] [i_11] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) : (((var_6) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((arr_35 [i_13] [i_13]) / (((/* implicit */unsigned long long int) var_5))));
                arr_38 [i_11] [i_11] [i_11] [i_0] = ((/* implicit */unsigned int) var_7);
            }
            for (unsigned char i_14 = 3; i_14 < 12; i_14 += 3) 
            {
                var_28 = ((/* implicit */signed char) ((1227747100U) != (arr_37 [(_Bool)0] [i_11] [i_11] [i_11])));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        {
                            var_29 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_11] [i_0] [i_15] [i_11])) > (((/* implicit */int) (signed char)21)))) ? (var_9) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                            arr_45 [5] [i_11] [i_15] [i_15] [i_11] [5] [i_11] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0))))));
                            var_30 = ((/* implicit */int) (_Bool)1);
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((_Bool) arr_15 [i_14 - 1] [i_14] [i_14] [i_16] [i_14 - 2])))));
                        }
                    } 
                } 
                var_32 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -6978722670173505910LL)))))));
                /* LoopSeq 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_48 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                    arr_49 [i_0] [i_0] [i_0] [i_17] [(signed char)10] = ((/* implicit */long long int) var_11);
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_15 [i_14 - 1] [i_17] [i_14 - 2] [i_17] [i_11]))));
                    var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3632250439U))) << (((arr_34 [i_17]) - (1590302116U)))));
                }
                for (unsigned char i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)20))))));
                    var_36 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - ((+(arr_23 [i_0] [1])))));
                }
                for (unsigned char i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    arr_57 [i_0] [(signed char)12] [i_14] [i_19] = ((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_14 + 1] [i_14 - 2] [i_14 + 1] [i_14 + 1]))));
                    arr_58 [(unsigned char)9] [i_11] [i_11] [i_11] [i_19] = ((/* implicit */unsigned char) (~((+(-1)))));
                }
                var_37 = ((/* implicit */short) (+(var_3)));
            }
        }
        var_38 = ((/* implicit */short) ((int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_1)))) != (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_41 [6U] [6U] [i_0] [i_0])))))));
        arr_59 [i_0] = ((/* implicit */unsigned long long int) var_5);
        var_39 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)17))) && (((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))))));
        var_40 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((6978722670173505935LL), (((/* implicit */long long int) arr_32 [i_0])))))))));
    }
    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_42 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
    {
        for (short i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            {
                var_43 = ((/* implicit */short) min((((arr_63 [i_20]) >> (((((((/* implicit */_Bool) (unsigned char)92)) ? (2811076871U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_20] [i_20]))))) - (2811076833U))))), (((/* implicit */long long int) var_8))));
                /* LoopSeq 1 */
                for (unsigned short i_22 = 1; i_22 < 21; i_22 += 2) 
                {
                    arr_69 [i_22] [i_21] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_63 [i_20]), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)63))))))))));
                    arr_70 [i_20] [i_22] [i_20] = ((/* implicit */short) (+(((((/* implicit */int) var_2)) << (((((/* implicit */int) var_6)) << (((arr_62 [i_21]) - (3614997123U)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 4; i_23 < 23; i_23 += 2) 
                    {
                        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_64 [i_24 + 1] [i_23 - 1] [i_22 - 1])) : (((/* implicit */int) var_7))))) ? (1964549599) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3)))) ? (((/* implicit */int) ((var_4) > (var_1)))) : (((/* implicit */int) var_6))))));
                                arr_77 [i_22] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-13)), (((((((/* implicit */int) var_2)) > (((/* implicit */int) (signed char)(-127 - 1))))) ? (0U) : (max((var_1), (((/* implicit */unsigned int) var_10))))))));
                            }
                        } 
                    } 
                    var_45 *= ((/* implicit */unsigned char) min(((+(var_9))), (((/* implicit */unsigned long long int) ((arr_62 [i_22 + 3]) & (arr_62 [i_22 + 2]))))));
                }
                arr_78 [i_20] [14] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) arr_72 [i_20] [i_21] [i_21] [i_21] [i_21])), ((-(var_9)))))));
            }
        } 
    } 
}
