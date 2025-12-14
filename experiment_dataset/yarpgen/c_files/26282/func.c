/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26282
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
    var_14 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3286625065342283256LL)))))) & (((3286625065342283274LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))))) ? (-3286625065342283274LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 = max((max((var_9), (((/* implicit */long long int) ((signed char) arr_7 [i_0]))))), (((/* implicit */long long int) max((arr_8 [i_2] [i_2 + 2] [i_2 + 2]), (((/* implicit */int) arr_11 [i_3] [i_3 - 3] [i_3] [i_3]))))));
                                var_16 *= ((/* implicit */signed char) var_8);
                                var_17 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (!(var_3)))))), (arr_8 [i_0] [i_1] [i_2 + 3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_21 [i_5 - 1] [i_2 + 1] [i_2])))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)32)) >> (((/* implicit */int) arr_17 [i_6] [i_0] [i_2] [15LL] [i_0] [i_0])))) << (((min((9223372036854775798LL), (var_11))) + (3942819697247183778LL)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((((/* implicit */_Bool) 3286625065342283274LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)16)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min(((~((~(((/* implicit */int) arr_12 [i_0] [i_1] [4ULL] [i_5])))))), (((min((1073741823), (((/* implicit */int) (signed char)-20)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
                                var_20 = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_28 [i_8] [i_2] [16LL] [i_0] = arr_25 [i_0] [i_0] [i_2] [i_2];
                                var_21 = ((/* implicit */long long int) max((var_21), (var_13)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_3))));
                    arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) ((1073741840) >> (((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0])) - (31863)))));
                    arr_32 [i_9] [(_Bool)0] &= ((/* implicit */int) arr_7 [i_1]);
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((18165630554817616830ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1]))))))));
                        arr_36 [i_10] [i_10] = ((_Bool) arr_24 [i_1 - 2] [(unsigned char)15] [(unsigned char)15] [i_1 - 2]);
                        var_24 = ((long long int) var_4);
                    }
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                        /* LoopSeq 3 */
                        for (long long int i_12 = 1; i_12 < 18; i_12 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_12 + 1])) : (((/* implicit */int) arr_1 [i_12 + 3])))))));
                            var_27 = ((signed char) arr_18 [i_1 + 1] [i_12 - 1]);
                            arr_42 [i_12] [i_11] [1] [(signed char)5] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_12] [i_12 + 3] [i_9] [i_11] [i_1 - 1] [i_9]))));
                        }
                        for (long long int i_13 = 1; i_13 < 18; i_13 += 4) /* same iter space */
                        {
                            var_28 = ((unsigned long long int) arr_17 [i_0] [i_11] [i_9] [i_1 + 1] [i_0] [i_0]);
                            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) arr_44 [i_0] [i_0] [i_9] [(unsigned short)2] [i_13 + 1] [i_0] [i_0]))));
                            arr_45 [i_13] [i_11] [i_9] [i_1] [i_0] &= (~(var_13));
                            arr_46 [i_13] [i_9] [i_1 - 1] [i_0] |= ((/* implicit */signed char) ((3286625065342283267LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                        for (int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            arr_51 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_48 [i_0] [i_0] [i_9] [(_Bool)1] [i_14]);
                            var_30 = ((/* implicit */signed char) max((var_30), (arr_38 [i_1 - 1] [i_0] [i_9] [i_11])));
                            arr_52 [i_9] [i_9] = ((/* implicit */unsigned short) (((!(var_3))) ? ((~(((/* implicit */int) arr_5 [i_14] [13LL] [i_1])))) : (((/* implicit */int) arr_47 [i_14] [i_14] [i_1 - 3] [i_1 - 3] [i_0] [i_0]))));
                        }
                        arr_53 [i_11] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_1 + 1])) * (((/* implicit */int) ((unsigned char) (signed char)-49)))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 19; i_15 += 4) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                arr_61 [i_16] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3286625065342283275LL))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) != (((((/* implicit */int) (unsigned short)47894)) * (((/* implicit */int) arr_23 [i_15] [i_16] [i_17] [i_18])))))))));
                            var_32 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (unsigned short)0)))));
                            arr_69 [i_15] [i_16] [i_15] [i_15] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -287918025))))) << (((((/* implicit */int) (unsigned short)36896)) - (36894)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_15] [5ULL] [i_15]))));
                        }
                    } 
                } 
                arr_70 [i_15] [i_15] = ((/* implicit */short) (signed char)14);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) 
        {
            for (unsigned short i_21 = 1; i_21 < 19; i_21 += 1) 
            {
                {
                    var_33 = ((/* implicit */signed char) ((((((/* implicit */int) arr_38 [i_21] [i_21] [i_21 - 1] [i_20])) + (287918011))) > (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) + (arr_4 [(short)8] [i_20] [4LL]))) <= (arr_3 [19LL] [i_21 + 1]))))));
                    arr_79 [i_19] = ((/* implicit */_Bool) ((unsigned char) (~((~(((/* implicit */int) (unsigned char)240)))))));
                }
            } 
        } 
        var_34 = ((/* implicit */short) max((((/* implicit */int) (short)19147)), (-1073741824)));
        /* LoopNest 3 */
        for (unsigned short i_22 = 0; i_22 < 20; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 2; i_23 < 17; i_23 += 3) 
            {
                for (long long int i_24 = 1; i_24 < 17; i_24 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_86 [i_19] [i_22] [i_19] [i_23 - 2]))))), (arr_43 [i_22] [i_22] [i_23 - 1] [(_Bool)1] [i_24 - 1])))) ? ((((!(((/* implicit */_Bool) (signed char)32)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)17627)) : (((/* implicit */int) arr_86 [i_19] [i_19] [i_19] [1LL]))))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15)))))) < (((long long int) var_7))))))));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) var_2))));
                        }
                        for (unsigned long long int i_26 = 2; i_26 < 17; i_26 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned short)480)) : (((/* implicit */int) (signed char)-124)))), (((/* implicit */int) (signed char)-127))));
                            arr_96 [i_19] = ((/* implicit */unsigned long long int) ((long long int) max((((long long int) var_11)), (((/* implicit */long long int) arr_71 [i_23 + 3] [i_24 + 1])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_27 = 2; i_27 < 17; i_27 += 4) /* same iter space */
                        {
                            var_38 &= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned short)50237)))));
                            arr_100 [i_19] [i_19] = ((/* implicit */_Bool) (~(13083030500016013934ULL)));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_90 [i_27] [i_23] [i_23 - 1] [i_23 + 1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((3286625065342283264LL) >= (var_9))))) : (((2196875771904LL) & (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_27]))))))))));
                            var_40 = ((/* implicit */_Bool) ((arr_41 [i_23 - 2] [(signed char)18] [i_23 + 2] [19LL] [i_23 - 1] [i_23 - 2]) + (((/* implicit */unsigned long long int) var_13))));
                        }
                        for (unsigned long long int i_28 = 2; i_28 < 17; i_28 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)47190))))));
                            arr_103 [i_19] [i_22] [i_23] [i_19] [i_23] = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)16)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)26)))))))));
                        }
                        var_42 &= ((/* implicit */_Bool) arr_50 [i_19] [i_19] [i_22] [i_23] [i_24] [i_24]);
                        var_43 *= ((/* implicit */short) (unsigned short)36909);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_29 = 0; i_29 < 24; i_29 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_30 = 1; i_30 < 23; i_30 += 1) 
        {
            var_44 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2275)) >> (((((/* implicit */int) (signed char)63)) - (58)))));
            /* LoopNest 3 */
            for (short i_31 = 0; i_31 < 24; i_31 += 2) 
            {
                for (unsigned short i_32 = 0; i_32 < 24; i_32 += 3) 
                {
                    for (long long int i_33 = 0; i_33 < 24; i_33 += 1) 
                    {
                        {
                            var_45 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_110 [i_30 + 1] [i_30] [i_30 - 1]))));
                            var_46 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 12661143049897828983ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)14897))));
                            var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_113 [i_30] [13ULL] [i_32] [i_32] [i_33] [i_33] [i_32]))));
                            arr_114 [i_33] [i_31] [i_31] [i_31] [i_29] |= ((/* implicit */_Bool) (~(arr_108 [i_29] [i_30] [i_30 + 1] [i_31])));
                        }
                    } 
                } 
            } 
            arr_115 [i_30] = ((/* implicit */signed char) var_10);
        }
        for (long long int i_34 = 2; i_34 < 21; i_34 += 1) 
        {
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_110 [i_34 - 1] [i_34 - 2] [i_34 + 3])) >> (((((unsigned long long int) arr_109 [i_29] [i_34])) - (11398965639462413442ULL)))));
            var_49 &= ((/* implicit */long long int) ((((_Bool) arr_110 [i_29] [i_34] [i_29])) ? (((/* implicit */int) arr_106 [(short)18])) : (((/* implicit */int) var_4))));
            var_50 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_106 [(short)14])) | (((/* implicit */int) var_2))));
            var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_113 [(unsigned short)8] [i_34] [i_34] [i_34] [i_34 - 1] [i_34] [i_34 + 2])) ? (var_8) : (18446744073709551615ULL)));
        }
        arr_118 [i_29] = ((/* implicit */signed char) ((var_0) - (((/* implicit */unsigned long long int) arr_107 [(unsigned short)7] [i_29] [i_29]))));
        var_52 = ((/* implicit */unsigned int) arr_112 [i_29] [i_29] [i_29] [(unsigned short)19] [i_29] [i_29] [(signed char)13]);
    }
    for (signed char i_35 = 0; i_35 < 24; i_35 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_36 = 0; i_36 < 24; i_36 += 1) 
        {
            var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_12)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((signed char)-59), (((/* implicit */signed char) (_Bool)1)))))))) : (((((/* implicit */_Bool) (~(arr_112 [i_35] [i_36] [i_35] [i_36] [i_35] [i_36] [i_35])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_122 [i_35] [i_35] [i_35])))) : (((((/* implicit */_Bool) (signed char)-10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24673))))))))))));
            var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) (~((~(var_9))))))));
            arr_123 [i_35] [i_35] [i_35] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_112 [i_36] [i_36] [i_36] [i_36] [i_35] [i_35] [i_35])) ? (((/* implicit */long long int) 8388352)) : (9223372036854775807LL))))));
        }
        /* vectorizable */
        for (unsigned short i_37 = 0; i_37 < 24; i_37 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_38 = 0; i_38 < 24; i_38 += 1) 
            {
                var_55 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 0LL)) >= (arr_124 [(unsigned char)1] [i_38]))) ? (arr_124 [i_38] [i_38]) : (arr_126 [i_35] [i_35] [i_35])));
                var_56 &= ((/* implicit */_Bool) (~(((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            }
            /* LoopNest 3 */
            for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
            {
                for (unsigned long long int i_40 = 0; i_40 < 24; i_40 += 4) 
                {
                    for (long long int i_41 = 1; i_41 < 20; i_41 += 4) 
                    {
                        {
                            arr_135 [i_41 + 3] [i_35] [i_39] [(short)10] [i_35] = ((/* implicit */short) ((arr_125 [i_35]) % (((/* implicit */unsigned long long int) arr_113 [i_39] [i_41 + 3] [i_41 + 3] [i_39] [i_40] [i_39] [i_39]))));
                            arr_136 [i_39] [2ULL] [i_37] [i_39] [i_40] [i_40] [i_37] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-5735737248750081155LL) + (9223372036854775807LL))) >> (((-8857476028118440686LL) + (8857476028118440694LL)))))) ? (10351659694660158326ULL) : (14107681302959813072ULL)));
                            arr_137 [i_39] [i_37] [i_37] [i_39] [i_40] [i_41] [i_41] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_134 [i_35] [i_37] [i_39] [i_41 - 1] [i_40])) ? (((/* implicit */int) arr_134 [i_35] [i_37] [i_35] [i_41 + 3] [i_35])) : (((/* implicit */int) (unsigned short)40862))));
                        }
                    } 
                } 
            } 
            var_57 = ((/* implicit */long long int) var_6);
        }
        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 9223372036854775807LL))));
    }
}
