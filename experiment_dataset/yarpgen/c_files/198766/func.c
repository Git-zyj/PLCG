/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198766
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((251658240) | (((/* implicit */int) ((unsigned short) var_1))))) << (((((/* implicit */int) ((signed char) ((((/* implicit */int) var_12)) | (var_9))))) + (17)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                                arr_16 [i_4] [i_3 - 2] [i_4] [i_1] [i_0] = max((((((/* implicit */unsigned long long int) max((((/* implicit */int) var_16)), (251658253)))) + (((((/* implicit */_Bool) var_14)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), ((~(arr_12 [i_0] [i_1] [i_1] [i_1] [i_0]))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) | (((((/* implicit */unsigned long long int) arr_1 [i_0])) & (18446744073709551598ULL)))))) ? (((/* implicit */int) (short)13314)) : (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_3])) : (-251658240))) : (((/* implicit */int) (unsigned char)122))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_17))));
                                arr_19 [i_0] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1ULL) << (((((((/* implicit */int) var_12)) & (var_1))) - (503))))))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_22 [i_6] [i_3] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) (+(18342593479550235710ULL))));
                                var_22 = ((/* implicit */signed char) var_17);
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_21 [i_2] [i_1] [i_2] [i_2] [i_6] [i_1] [i_2]))));
                                arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18342593479550235710ULL)) ? (104150594159315925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (104150594159315913ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((4294967286U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned int) arr_8 [i_3] [i_2] [i_0]))))));
                                var_24 = ((((/* implicit */_Bool) arr_3 [i_3] [(_Bool)1])) ? (((/* implicit */unsigned int) var_9)) : (min((((/* implicit */unsigned int) max((((/* implicit */signed char) var_11)), ((signed char)-1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_10 [9] [9] [i_2] [i_2]))))));
                            }
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (max((((((/* implicit */unsigned int) arr_1 [i_3 - 3])) - (var_13))), (((/* implicit */unsigned int) var_15))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_26 = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_1] [i_7] [i_1] [i_7] [i_7]);
                    arr_27 [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_7)), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (104150594159315915ULL)))))));
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) (~(min((((/* implicit */int) var_16)), ((~(var_3)))))));
                    var_28 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((18446744073709551598ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_29 [i_1] [i_1] [i_8] [i_8]) : (min((((/* implicit */unsigned long long int) var_17)), (var_5)))))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_8] [i_8]))));
                }
                for (signed char i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    arr_33 [i_9] [i_9] [i_9] = ((/* implicit */int) ((_Bool) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18342593479550235679ULL)) ? (var_9) : (((/* implicit */int) var_6))))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ ((+(((/* implicit */int) var_16))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_4))));
                    }
                    arr_38 [i_9] [i_9] [i_1] [i_9] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (((((/* implicit */_Bool) 7346022837508515251LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60460))) : (14639408529407900264ULL)))))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)176)), (104150594159315918ULL))))));
                }
                var_33 = ((/* implicit */unsigned long long int) -1225847147);
                /* LoopNest 3 */
                for (signed char i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1417968940U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) 1953327625U))));
                                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (signed char)-116))));
                                var_36 = ((/* implicit */signed char) max((((((/* implicit */int) arr_13 [i_0] [i_1] [i_12] [i_12] [i_1])) >> (((/* implicit */int) (_Bool)1)))), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                {
                    arr_54 [i_15] [i_15] [13ULL] = ((/* implicit */unsigned long long int) var_9);
                    arr_55 [i_14] [i_15] [i_15] [i_15] = ((/* implicit */long long int) arr_48 [i_14]);
                }
            } 
        } 
        arr_56 [i_14] [i_14] = var_11;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                {
                    var_37 = (-(var_13));
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (long long int i_20 = 1; i_20 < 18; i_20 += 2) 
                        {
                            {
                                arr_68 [i_20 + 2] [i_19] [14U] [i_19] [i_14] = ((/* implicit */int) 25U);
                                arr_69 [i_19] = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) > (arr_64 [i_14] [i_14] [i_14] [i_19] [12ULL]))) ? (((var_11) ? (var_0) : (-1852768897267316753LL))) : (((/* implicit */long long int) ((unsigned int) var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_67 [i_14] [i_17] [i_19] [i_17] [i_20 + 2])) % (14639408529407900251ULL)))) ? (((/* implicit */unsigned long long int) (-(27LL)))) : (14639408529407900257ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_19)) : (arr_63 [i_14] [i_14] [i_14] [i_14])))))));
                                var_38 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_63 [i_14] [i_18] [i_19] [i_20])), (((unsigned long long int) min(((_Bool)1), ((_Bool)1))))));
                                var_39 = (_Bool)1;
                                var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_19)) - (((/* implicit */int) (signed char)52))))) <= (4294967295U)))) ^ (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    arr_70 [i_14] [i_17] = ((/* implicit */int) min((((/* implicit */long long int) (~((-2147483647 - 1))))), (min((((/* implicit */long long int) arr_47 [i_14])), (var_0)))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_21 = 1; i_21 < 19; i_21 += 4) 
    {
        var_41 = ((/* implicit */_Bool) 1799514500);
        arr_73 [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (unsigned short)6987))) <= (((/* implicit */int) min((var_7), (arr_57 [i_21 + 1] [i_21 + 1] [i_21 + 1]))))));
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (max((var_5), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_22 = 3; i_22 < 19; i_22 += 1) 
        {
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                for (unsigned int i_24 = 0; i_24 < 20; i_24 += 4) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) var_7)) + (32))))))));
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1784348873)) % (((unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) ^ (var_5))))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (1916885963362618063ULL)));
                    }
                } 
            } 
            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)7004)) : (((/* implicit */int) var_8)))) | (min((((/* implicit */int) arr_24 [(unsigned char)4])), (var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 0ULL))))))) : (min((((/* implicit */unsigned int) (signed char)-101)), (max((var_13), (((/* implicit */unsigned int) var_8))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_25 = 0; i_25 < 20; i_25 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_43 [i_21] [i_21] [i_21 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        arr_91 [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_61 [i_22])) : (((3801774215546385759LL) & (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        var_48 = ((/* implicit */_Bool) (~(((/* implicit */int) var_16))));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) arr_40 [i_21] [i_21] [i_25]))))) ? (((/* implicit */unsigned int) arr_88 [i_21] [i_21])) : (arr_49 [i_21])));
                        var_50 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7)) >> (((/* implicit */int) arr_13 [i_27] [i_26] [i_25] [i_22] [4ULL]))));
                    }
                }
                for (unsigned short i_28 = 1; i_28 < 17; i_28 += 4) 
                {
                    arr_95 [i_21] = ((/* implicit */_Bool) (~(6418861082350604557LL)));
                    arr_96 [i_21] [i_25] [i_21] = ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((var_18) / (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                    var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) (-(((/* implicit */int) var_2)))))));
                    var_52 = ((/* implicit */long long int) (+(((var_1) / (((/* implicit */int) var_8))))));
                }
                arr_97 [i_21] [i_21] [i_25] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6418861082350604531LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6207773769557582982ULL)))) || (((/* implicit */_Bool) arr_17 [i_21] [i_22 - 2] [i_22 - 1] [i_22] [(_Bool)1] [i_25] [i_25]))));
            }
            /* vectorizable */
            for (unsigned long long int i_29 = 2; i_29 < 19; i_29 += 4) 
            {
                arr_101 [i_22] [i_22 + 1] [i_21] [i_22] = ((/* implicit */signed char) 8ULL);
                var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) arr_41 [6U] [i_22 - 1] [i_22]))));
                var_54 = ((((((/* implicit */int) var_2)) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned char)0)))) + (30))) - (29))));
            }
            for (unsigned short i_30 = 2; i_30 < 18; i_30 += 1) 
            {
                var_55 = ((/* implicit */long long int) 2147483632);
                var_56 = ((/* implicit */long long int) (signed char)-17);
            }
            /* LoopNest 2 */
            for (long long int i_31 = 1; i_31 < 17; i_31 += 2) 
            {
                for (int i_32 = 0; i_32 < 20; i_32 += 4) 
                {
                    {
                        var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) var_11))));
                        arr_111 [i_21] [i_21] = ((/* implicit */signed char) arr_99 [i_21 - 1] [i_21 - 1] [i_21 - 1]);
                        var_58 = ((/* implicit */_Bool) (~(var_18)));
                    }
                } 
            } 
        }
        for (unsigned short i_33 = 1; i_33 < 19; i_33 += 4) 
        {
            var_59 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_114 [i_21 + 1]))))));
            var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (8569597382419974585ULL) : (((/* implicit */unsigned long long int) max((arr_113 [i_21] [i_21] [i_21]), (((/* implicit */int) var_8)))))))))))));
            /* LoopNest 2 */
            for (unsigned int i_34 = 0; i_34 < 20; i_34 += 4) 
            {
                for (int i_35 = 0; i_35 < 20; i_35 += 3) 
                {
                    {
                        var_61 = ((/* implicit */unsigned long long int) max((var_61), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((arr_52 [i_33 - 1]) ? (var_9) : (((((/* implicit */_Bool) arr_37 [i_21] [i_21] [i_34])) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (unsigned short)5))))))) : (min((((6207773769557582982ULL) + (8082052451187958149ULL))), (max((arr_12 [i_21] [i_21] [i_21] [i_34] [i_21]), (((/* implicit */unsigned long long int) var_15))))))))));
                        var_62 = ((/* implicit */_Bool) var_14);
                    }
                } 
            } 
            var_63 = ((/* implicit */long long int) min((var_63), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_21] [16LL])) : (((/* implicit */int) (unsigned short)65529))))))) ? ((~(((/* implicit */int) (signed char)124)))) : ((~((~(((/* implicit */int) (unsigned short)6)))))))))));
        }
        arr_121 [i_21] [i_21] = min((((/* implicit */unsigned long long int) (unsigned char)55)), (min((((/* implicit */unsigned long long int) var_12)), (6207773769557582982ULL))));
    }
}
