/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210948
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)-1))) >= (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) var_3)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 |= ((/* implicit */unsigned short) ((arr_0 [(short)2] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51902)))));
        var_15 &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)13634)) << (((arr_1 [8U]) - (9155991944108843822LL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)3)) * (((/* implicit */int) ((short) arr_2 [i_0])))));
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)13659)) : (((/* implicit */int) (short)3609))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [8ULL])) : (((/* implicit */int) ((unsigned short) var_1)))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(var_2))))));
                }
            } 
        } 
    }
    for (short i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        arr_11 [1U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13634)) > (((/* implicit */int) (unsigned char)7))));
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */unsigned short) (short)32755)), ((unsigned short)13655)))))), (((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) >= (7374333221548413960LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_10 [i_3] [i_3])))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_13 [i_3] [i_4 + 3] [i_5]))));
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (unsigned short)13659)), (4168207254U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [7ULL] [i_5 - 1] [i_5 - 1]), (((/* implicit */long long int) 2873405938U))))) || (((((/* implicit */_Bool) arr_17 [(unsigned char)2] [i_6] [i_5] [(unsigned char)2])) && (((/* implicit */_Bool) (unsigned short)51884)))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 739249870U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) : (3324834555170361809LL)));
                                arr_22 [i_3] [i_3] [(unsigned short)15] [i_4] [(unsigned short)15] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)127)), (arr_15 [i_4] [(unsigned char)8] [i_7])))) ? (arr_21 [i_4] [18ULL] [i_4 + 2] [i_4]) : ((+(arr_21 [i_4] [i_4] [i_5] [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((0LL), (((/* implicit */long long int) (-(arr_15 [(unsigned short)16] [i_3] [2LL])))))))));
            /* LoopSeq 3 */
            for (short i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (min((arr_23 [i_8]), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)39568))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_8] [i_8] [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
                arr_28 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */signed char) ((long long int) min((((/* implicit */int) arr_25 [i_8] [i_3 + 2])), ((~(((/* implicit */int) (signed char)-98)))))));
            }
            for (short i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                var_25 = ((/* implicit */int) arr_25 [i_8] [i_8]);
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((((unsigned long long int) min((4818393028385115660ULL), (((/* implicit */unsigned long long int) (unsigned short)25968))))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)84)))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) var_11))))) : (((arr_29 [1U] [(_Bool)1] [i_8] [i_3 - 2]) ^ (((/* implicit */unsigned long long int) arr_26 [i_11] [i_8])))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [(short)18])) ? (((/* implicit */int) (unsigned short)25955)) : (((/* implicit */int) ((short) (unsigned short)25968))))))))));
                        }
                    } 
                } 
                var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(short)6] [i_3 + 2])) >> (((((/* implicit */int) arr_25 [(short)4] [i_3 + 2])) - (63400)))))) ? (min((3142417672U), (((/* implicit */unsigned int) (unsigned char)133)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-54)) | (((/* implicit */int) arr_25 [12ULL] [i_3 - 2]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13865)) / (1099147777)))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4168207251U)))));
                var_30 = ((/* implicit */unsigned short) ((int) arr_37 [i_13] [i_8] [i_8] [(signed char)8] [i_3] [(signed char)8] [i_3]));
            }
            arr_41 [(short)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)123))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13849))) : (18446744073709551611ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 3487777211U)) == (7374333221548413960LL))))) : (((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_3 - 2] [i_8]))))))))));
            var_31 = ((/* implicit */unsigned int) max(((~(30786325577728ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_8] [i_3 - 2])) ? (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3 - 2]) : (((/* implicit */long long int) var_0)))))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((4102763830U), (126760045U)))));
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_49 [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)13)) / (var_10)))))));
                            var_33 = ((/* implicit */signed char) min((126760045U), (((/* implicit */unsigned int) (unsigned short)13870))));
                        }
                        for (int i_17 = 0; i_17 < 19; i_17 += 3) 
                        {
                            var_34 ^= ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_6))));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) 366076182)) ? (-2147331628536024266LL) : (-7374333221548413944LL)));
                        }
                        for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
                        {
                            var_36 -= ((/* implicit */unsigned char) max((min((((/* implicit */short) ((signed char) var_9))), (var_6))), (((/* implicit */short) (!(((/* implicit */_Bool) ((3216364202U) / (126760068U)))))))));
                            arr_55 [i_8] [i_15] [i_14] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)26356), (arr_34 [i_3 + 1] [i_8] [i_8] [i_3 - 2])))) ? (((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */unsigned long long int) var_3)) : (max((0ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4717439162723942582LL)) ? (((/* implicit */unsigned int) var_10)) : (var_3))))))));
                            var_37 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)13870)) << (((3886648013U) - (3886648008U)))));
                        }
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            arr_60 [i_3] [i_3] [i_8] [(unsigned short)7] [i_19] = ((/* implicit */unsigned short) (-(2LL)));
                            arr_61 [i_19] [i_15] [i_8] [i_8] [i_3] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_45 [i_8] [i_8] [i_8]))))) / (min((arr_29 [(short)18] [(unsigned char)12] [i_14] [i_14]), (((/* implicit */unsigned long long int) (short)-13065)))))), (min((arr_32 [i_8] [i_3 - 2] [i_3] [i_3]), (arr_32 [i_15] [i_3 + 1] [i_3] [i_3])))));
                            var_38 -= ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_3] [i_3] [i_3 - 1] [i_3 + 2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_14]))) : (arr_12 [i_8] [i_15] [i_8])))) | (((/* implicit */unsigned long long int) ((arr_12 [i_3 + 2] [(unsigned char)15] [i_14]) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967293U)))))))));
                            var_39 = ((/* implicit */signed char) (~(2147483647)));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_20 = 0; i_20 < 19; i_20 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)45)))), (((arr_42 [i_3 - 2] [i_3 - 2] [i_3] [(unsigned char)16]) / (arr_35 [i_20] [i_3] [i_3 + 2] [i_3 - 1] [i_3] [i_3 - 2] [i_3 + 2]))))))));
            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned int) (unsigned char)6)), (((/* implicit */unsigned int) arr_31 [i_20] [(unsigned char)16] [i_20]))))) ? (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_16 [i_20] [i_20] [i_20] [i_20])), (arr_10 [i_3 - 2] [i_3 - 2])))) ^ (arr_29 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))))))));
            var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) arr_51 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 1]))), (max((arr_51 [i_3 + 2] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2]), (((/* implicit */unsigned long long int) arr_48 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
        }
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_43 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (-12) : (((/* implicit */int) (short)-32764))))), ((+(arr_65 [i_21])))))) ? (min((((/* implicit */unsigned int) ((3572279980651627578ULL) <= (((/* implicit */unsigned long long int) arr_66 [i_21]))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) : (min((arr_66 [0]), (((/* implicit */unsigned int) var_1)))));
        /* LoopSeq 1 */
        for (short i_22 = 4; i_22 < 20; i_22 += 4) 
        {
            var_44 |= ((/* implicit */unsigned int) ((_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)236)))));
            var_45 -= ((/* implicit */long long int) (short)-18955);
            arr_69 [i_21] = ((/* implicit */unsigned long long int) min(((signed char)-124), ((signed char)-100)));
            var_46 ^= ((/* implicit */signed char) (unsigned short)1875);
        }
        /* LoopSeq 3 */
        for (int i_23 = 0; i_23 < 21; i_23 += 3) 
        {
            var_47 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_68 [i_23] [i_23]))))), (((((var_5) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) & (((/* implicit */long long int) arr_66 [i_23]))))));
            var_48 = ((/* implicit */long long int) min((var_48), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)20), (((/* implicit */unsigned char) (signed char)100))))) >> (((/* implicit */int) ((((/* implicit */_Bool) -434027199)) || (((/* implicit */_Bool) arr_66 [i_21])))))))) : (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (arr_68 [i_23] [i_21])))), (((long long int) var_3))))))));
        }
        for (signed char i_24 = 0; i_24 < 21; i_24 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_25 = 0; i_25 < 21; i_25 += 4) 
            {
                for (unsigned short i_26 = 0; i_26 < 21; i_26 += 1) 
                {
                    for (long long int i_27 = 0; i_27 < 21; i_27 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) max((((/* implicit */long long int) min((arr_81 [i_21] [i_27] [i_27] [i_26] [i_21] [i_24]), (((((/* implicit */long long int) ((/* implicit */int) arr_81 [i_21] [(unsigned char)12] [i_25] [8] [i_21] [8]))) < (arr_68 [5ULL] [19LL])))))), (min((-3426821635449236958LL), (0LL))))))));
                            var_50 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (short)29123)), (((((/* implicit */_Bool) arr_80 [i_27])) ? (((/* implicit */long long int) 4294967288U)) : (arr_79 [i_21]))))) - (((long long int) (signed char)-120))));
                            var_51 &= ((/* implicit */short) max(((+(arr_83 [i_27] [i_26] [i_25] [i_24] [i_21]))), (((/* implicit */int) ((short) arr_83 [i_27] [i_26] [i_25] [i_24] [i_21])))));
                        }
                    } 
                } 
            } 
            var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-124))));
        }
        for (unsigned char i_28 = 0; i_28 < 21; i_28 += 4) 
        {
            var_53 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)29121))));
            var_54 += ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)1875))));
        }
    }
    /* vectorizable */
    for (unsigned char i_29 = 1; i_29 < 16; i_29 += 4) 
    {
        arr_93 [i_29] [i_29 + 1] = ((/* implicit */long long int) ((unsigned int) var_3));
        /* LoopNest 3 */
        for (signed char i_30 = 0; i_30 < 20; i_30 += 3) 
        {
            for (unsigned char i_31 = 0; i_31 < 20; i_31 += 4) 
            {
                for (unsigned char i_32 = 2; i_32 < 17; i_32 += 1) 
                {
                    {
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (8U)))))));
                        arr_102 [i_29] [i_31] [i_30] [i_30] [i_31] [i_32] &= ((/* implicit */unsigned char) ((arr_71 [i_29 - 1] [i_29 - 1]) % (((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
    }
}
