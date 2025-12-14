/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222346
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_12 [i_0] [(signed char)2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_10))))))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [(unsigned char)3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (min((arr_10 [i_1 + 3]), (((/* implicit */unsigned int) var_1))))));
                        var_18 = ((/* implicit */signed char) ((var_7) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (min((var_5), (((/* implicit */unsigned int) arr_6 [(unsigned char)10] [i_1] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) : (arr_5 [i_4] [i_1]))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_5 [i_0] [i_1 + 2])) : (var_10)));
                        var_21 = ((/* implicit */int) arr_11 [i_0] [i_0]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_17 [i_1 + 2] [i_2] [i_5] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? ((+(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [5ULL] [i_1] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) var_13)))))))));
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_10 [i_1])))) ? (((/* implicit */int) var_6)) : (((var_14) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((unsigned int) var_4)))))));
                    }
                    for (short i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        var_24 ^= ((((/* implicit */_Bool) (((+(var_0))) << (((((unsigned int) arr_13 [i_0] [i_1])) - (4294967170U)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [4] [i_6])));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_9 [i_6 + 1] [i_6 + 2] [i_6] [i_6 + 2] [i_6])))) ? (((/* implicit */int) ((var_4) != (((/* implicit */int) arr_18 [i_6] [i_1] [i_1] [i_1] [i_6] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6 + 3] [i_6] [i_6] [i_6])))))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_13) : (arr_0 [i_0])))) ? (((((/* implicit */long long int) ((var_12) ? (arr_7 [i_0] [i_1] [2ULL]) : (((/* implicit */unsigned int) arr_4 [i_0]))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_1] [(_Bool)1] [(signed char)4] [i_1]))) / (var_10))))) : (((/* implicit */long long int) var_8))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            var_27 += ((/* implicit */signed char) var_16);
                            var_28 = var_17;
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2] [i_2])) ? (((var_14) ? (arr_11 [i_9] [i_2 - 2]) : (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                            arr_29 [i_0] [i_1] [(signed char)0] [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_2 - 1] [i_2] [i_7 - 1] [i_7 - 2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            arr_30 [i_0] [i_1 + 1] [i_2] [i_7 + 2] [i_9] = ((var_14) && (((/* implicit */_Bool) arr_15 [i_0])));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 - 1] [i_1 + 3])))));
                        }
                    }
                    var_31 = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
    } 
    var_32 ^= ((/* implicit */int) ((long long int) ((((var_5) >> (((var_4) + (451673723))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_9)) - (49853)))))))));
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        arr_33 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_32 [i_10]))))) ? (var_17) : (((/* implicit */unsigned int) ((var_4) - (((/* implicit */int) var_9))))))))));
        /* LoopSeq 4 */
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    {
                        arr_42 [i_13] [i_12] [i_12] [i_11] [i_10] [i_10] &= ((/* implicit */unsigned char) var_7);
                        arr_43 [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) var_12);
                    }
                } 
            } 
            var_33 += ((/* implicit */long long int) (+(((/* implicit */int) arr_32 [i_10]))));
        }
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                for (unsigned char i_16 = 1; i_16 < 20; i_16 += 2) 
                {
                    for (signed char i_17 = 3; i_17 < 17; i_17 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) var_2);
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_10]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_10] [i_14]))) | (var_5))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) ((((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_39 [i_10] [i_14] [i_16 - 1] [i_14]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_14] [i_16])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_10] [i_14])) >> (((var_5) - (1721602232U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((((/* implicit */unsigned long long int) arr_53 [i_17] [i_14])), (var_7))))))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_53 [i_10] [i_10])) : (arr_47 [i_10] [i_14] [i_14] [i_14])))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_10] [i_14] [i_10] [i_10] [i_10] [i_10]))) : (arr_38 [i_10] [i_14])))))));
        }
        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) var_5)))))) == ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_17)))))));
            var_38 = ((/* implicit */signed char) arr_56 [i_18]);
            var_39 = ((/* implicit */_Bool) var_0);
            var_40 = ((/* implicit */_Bool) (+(arr_36 [i_10] [i_10])));
        }
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) <= (((arr_56 [i_10]) ? (((((/* implicit */_Bool) arr_55 [i_10] [i_19] [i_19] [i_19] [i_19] [i_10])) ? (var_7) : (((/* implicit */unsigned long long int) var_10)))) : ((-(var_7))))))))));
            arr_62 [i_10] [i_19] = ((/* implicit */unsigned int) var_3);
        }
    }
    /* LoopSeq 2 */
    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            for (unsigned int i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        for (long long int i_24 = 0; i_24 < 11; i_24 += 2) 
                        {
                            {
                                var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_20] [i_21] [i_22] [i_23] [i_24]), (arr_9 [i_20] [i_21] [i_22] [i_23] [i_24])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_20]))) : (min((((((/* implicit */_Bool) arr_64 [i_20])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_20] [i_21] [i_20] [i_23] [i_24] [i_21]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (var_5))))))));
                                arr_76 [i_20] [i_21] [i_22] [i_23] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_74 [i_22] [i_24] [i_24] [i_23] [i_24])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) arr_15 [i_23]))))) ? (((/* implicit */int) arr_58 [i_20])) : (((/* implicit */int) var_3))))) : (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_11)))))))));
                                var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((arr_3 [i_23] [i_21] [i_23]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_40 [i_20] [i_21] [i_22] [i_23] [i_24]) > (var_5))))))) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_14)) >= (((/* implicit */int) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_24] [i_23])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(var_16)))))))))));
                            }
                        } 
                    } 
                    arr_77 [(unsigned char)6] [i_20] [i_22] = ((/* implicit */short) ((int) (-(((var_6) ? (((/* implicit */int) arr_25 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) var_1)))))));
                }
            } 
        } 
        arr_78 [i_20] [i_20] = min((((/* implicit */unsigned long long int) ((_Bool) max((var_7), (((/* implicit */unsigned long long int) var_12)))))), (var_7));
    }
    for (unsigned short i_25 = 0; i_25 < 21; i_25 += 4) 
    {
        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((((/* implicit */int) arr_57 [i_25])) < (((/* implicit */int) arr_57 [i_25])))) ? (((/* implicit */int) arr_57 [i_25])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_56 [i_25])), (var_11)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_26 = 0; i_26 < 21; i_26 += 2) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned char) var_4);
            /* LoopNest 2 */
            for (signed char i_27 = 0; i_27 < 21; i_27 += 2) 
            {
                for (unsigned int i_28 = 0; i_28 < 21; i_28 += 4) 
                {
                    {
                        var_46 ^= ((/* implicit */unsigned short) var_6);
                        var_47 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                    }
                } 
            } 
            var_48 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_25] [i_26] [i_26])))))));
        }
        for (int i_29 = 0; i_29 < 21; i_29 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_30 = 0; i_30 < 21; i_30 += 2) 
            {
                for (signed char i_31 = 2; i_31 < 20; i_31 += 1) 
                {
                    {
                        var_49 ^= ((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_95 [i_29])) : (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) var_12)), (var_9)))))));
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((unsigned char) max((var_15), (var_3)))))));
                        arr_99 [i_30] [(unsigned char)18] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */int) arr_54 [i_31 - 1] [i_31 + 1] [i_30] [i_31] [i_31] [i_30])) : (((int) arr_61 [i_29] [i_31 + 1])))))));
                    }
                } 
            } 
            var_51 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_29])) ? (((/* implicit */int) arr_59 [i_29] [i_29])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) arr_40 [i_25] [i_25] [i_25] [i_29] [i_29])) : (var_0)));
            /* LoopSeq 1 */
            for (short i_32 = 0; i_32 < 21; i_32 += 3) 
            {
                var_52 = arr_35 [i_32];
                var_53 += ((/* implicit */int) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_86 [i_25] [i_29] [i_32] [i_29])))))))) : (((unsigned long long int) var_10))));
                arr_102 [i_32] [i_32] [i_32] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_14) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_29]))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_16))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_25] [i_29] [i_32] [i_25] [i_32] [1U])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_3))))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_96 [i_29]))))))) : (((long long int) ((var_12) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
            }
            var_54 = ((/* implicit */unsigned char) (+(((unsigned int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_2)))))));
        }
    }
}
