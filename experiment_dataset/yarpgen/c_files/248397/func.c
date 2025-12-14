/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248397
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+(((((/* implicit */int) (unsigned short)60896)) - (((/* implicit */int) (short)63)))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((int) var_4)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((arr_4 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)-16384))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1])))));
                            var_13 = ((/* implicit */unsigned short) (~(7614991805335891545ULL)));
                            var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (arr_4 [i_0]))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-66)) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])) : (-1LL))))))));
                            var_16 = ((/* implicit */_Bool) var_9);
                        }
                        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_2] [8ULL] [i_1] [i_2] &= ((/* implicit */unsigned char) (short)511);
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) arr_16 [i_3] [(short)0] [i_3] [i_3 - 1] [(short)9])) ? (((((/* implicit */_Bool) var_9)) ? (10799308133929941483ULL) : (16586870788542105769ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -658849635)) ? (((/* implicit */int) var_10)) : (-1943338378))))))));
                            arr_19 [(short)0] [i_0] [i_0] [(short)0] [(short)0] = ((/* implicit */long long int) var_3);
                            arr_20 [i_2] [i_5] [i_0] [i_0] [i_2] [i_1] [(unsigned short)0] = ((/* implicit */int) (+(7614991805335891545ULL)));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) -7344911570764581611LL)) ? (((/* implicit */unsigned long long int) -5012172643722066037LL)) : (4754096342930910463ULL))))));
                        }
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [1LL] [(short)8] [i_1] [i_1] [10LL] [1LL] [(short)8])) ? (((/* implicit */int) var_8)) : (1459908644))))));
                        var_20 *= ((((/* implicit */_Bool) (+(((/* implicit */int) (short)24647))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (0U));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_27 [(unsigned short)5] [i_1] [i_2] [(unsigned short)5] [i_0] = ((/* implicit */unsigned short) min(((~((~(arr_8 [i_0] [(unsigned short)7] [i_0] [1LL]))))), (max((var_0), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))));
                            var_21 -= ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_1])), (arr_7 [i_6])))), ((-(((/* implicit */int) ((short) var_0)))))));
                            arr_28 [6] [(short)0] [i_2] [i_0] [i_6] [4ULL] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_0] [i_0])), (var_1)))) ? (((/* implicit */unsigned long long int) ((int) arr_16 [i_0] [4] [i_2] [i_6] [i_7]))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_0] [i_6] [i_7])) ? (arr_16 [i_0] [i_1] [i_0] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1])))))));
                        }
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_6] [i_0] [i_6] = min((((/* implicit */long long int) max((var_7), (((/* implicit */int) arr_32 [i_1] [i_1] [i_2] [i_1] [i_0] [0]))))), ((+(3614411014207363126LL))));
                            arr_34 [i_0] [i_1] [i_0] [i_2] [i_6] [i_8] = (_Bool)1;
                        }
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((_Bool) var_1))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10110))) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) (short)0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_1] [i_9]))));
                            var_24 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((short) (short)-87))) ? (min((var_6), (var_6))) : (((/* implicit */long long int) arr_6 [i_2] [(unsigned char)3] [8])))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_3))));
                            arr_40 [i_0] [i_0] [i_2] [2ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1943338377)) ? (((/* implicit */long long int) 3221225472U)) : (-2LL)));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (short)15404)) - (15393)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_1] [i_0] [i_10] [i_6])) && (((/* implicit */_Bool) (short)1023))))) : (((/* implicit */int) var_9)))))));
                            var_27 = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (short i_11 = 1; i_11 < 7; i_11 += 3) 
                        {
                            arr_44 [10] [(unsigned char)8] [i_1] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max((var_4), (var_5))))))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) 12387966753803909582ULL))));
                        }
                    }
                    for (unsigned char i_12 = 2; i_12 < 10; i_12 += 3) 
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_12 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12]))))) ? (((/* implicit */int) arr_43 [i_12 - 1] [0] [i_12 - 1] [0] [0])) : (((((/* implicit */_Bool) arr_43 [i_12 - 1] [i_12 - 1] [i_12 - 1] [(_Bool)1] [i_12 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)61))))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))) > (arr_37 [(unsigned char)9] [(unsigned char)9] [(unsigned short)8] [5] [i_12] [4LL]))))));
                        /* LoopSeq 4 */
                        for (int i_13 = 1; i_13 < 9; i_13 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (1943338378) : (-583860475))))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_45 [9LL] [i_1] [i_2] [(unsigned short)8] [i_0] [(_Bool)1])) != (((/* implicit */int) max((var_4), (var_4)))))))) / (6058777319905642034ULL)));
                            var_32 = ((/* implicit */long long int) arr_1 [i_12 - 2] [i_0]);
                        }
                        for (int i_14 = 1; i_14 < 9; i_14 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) (+(var_0)));
                            arr_53 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (arr_37 [i_12 - 2] [i_12 - 2] [i_12] [i_14] [i_14 + 1] [i_14 - 1]) : (arr_37 [i_12 - 2] [i_14] [i_14] [i_14] [i_14 + 1] [i_14 - 1]))) < (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_5)))) : (-1609341763)))));
                        }
                        for (int i_15 = 1; i_15 < 9; i_15 += 3) /* same iter space */
                        {
                            arr_56 [i_0] [i_1] [i_2] [i_0] [i_15 + 1] = ((/* implicit */short) max((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))), ((~(((/* implicit */int) var_10))))));
                            arr_57 [i_1] [i_15] [i_15] |= ((/* implicit */long long int) ((((/* implicit */int) var_4)) <= ((+(var_1)))));
                        }
                        for (short i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            arr_62 [i_12] [i_12] [i_12] [(short)2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (var_1)));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (_Bool)0))));
                        }
                    }
                }
                for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    var_35 -= ((/* implicit */short) ((arr_4 [i_1]) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_29 [i_0] [(unsigned char)8] [(unsigned short)7] [i_17] [(unsigned short)7] [(unsigned short)7])) : (var_7)))) ? ((~(arr_10 [i_0] [i_0] [(short)1] [(unsigned short)5] [i_17] [6]))) : (((/* implicit */unsigned int) 1943338377)))))));
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        arr_68 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) 4194303)) > (3855834800560089229LL)));
                        var_36 = ((/* implicit */_Bool) max((var_36), ((((!(((/* implicit */_Bool) ((unsigned short) arr_59 [i_0] [(_Bool)1] [i_17]))))) && (((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) var_4)) : (-1817486634))), (((/* implicit */int) (unsigned short)4613)))))))));
                        arr_69 [(short)4] [(short)4] [(short)4] [i_18] [i_0] [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) ((arr_24 [i_0] [i_0] [2LL] [i_1] [i_17] [i_18]) >= (((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_17] [i_18])))))))) + (arr_0 [i_18])));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_73 [(_Bool)1] [i_0] [i_0] [i_19] = ((/* implicit */signed char) max((((/* implicit */long long int) ((3221225472U) / (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) -199806212)) : (511U)))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22871))) : (-8660955001465172028LL)))));
                        arr_74 [(short)4] [i_0] [(unsigned short)9] [(unsigned short)9] [i_0] [(unsigned short)9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [8ULL] [i_1] [i_17] [i_19])) ? (var_1) : (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_3)))) : (2025708186))) > (((((/* implicit */_Bool) (~(arr_46 [i_19] [10] [(unsigned short)1] [i_0])))) ? (var_1) : (((/* implicit */int) var_9))))));
                        /* LoopSeq 3 */
                        for (short i_20 = 1; i_20 < 9; i_20 += 4) 
                        {
                            arr_79 [(unsigned char)2] [(unsigned char)2] [i_0] [i_19] [(unsigned short)1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)83)) & (((/* implicit */int) (short)16382))))));
                            arr_80 [(_Bool)1] [i_0] [i_17] [5] [i_17] [i_0] [i_0] = ((/* implicit */unsigned short) ((((_Bool) (~(((/* implicit */int) arr_29 [(short)5] [8] [i_19] [i_17] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_43 [i_0] [i_1] [i_17] [i_19] [i_17])), (var_0)))) ? ((-(18446744073709551615ULL))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_6)))))))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                        {
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_8))));
                            var_38 = ((/* implicit */long long int) min((var_38), ((+(min((arr_48 [8] [8] [(_Bool)0] [7] [(_Bool)0] [i_19] [8]), (arr_48 [(short)2] [3] [i_19] [i_19] [(unsigned char)8] [i_19] [i_19])))))));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_85 [i_0] [i_1] [i_17] [i_1] [7] [i_22] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_36 [i_0] [i_1] [i_1] [i_1] [i_19] [i_22]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_17] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) arr_51 [i_17] [1]))));
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) 0ULL))));
                        }
                        /* LoopSeq 3 */
                        for (short i_23 = 0; i_23 < 11; i_23 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned short) var_2);
                            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31)))))));
                            arr_89 [5] [i_0] [i_17] [(short)6] [(short)6] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_36 [0LL] [i_1] [i_1] [i_1] [i_1] [i_1]))))) || (((/* implicit */_Bool) -5653820769979751130LL)))) || (arr_66 [5ULL] [10LL] [10LL] [i_17])));
                        }
                        for (short i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
                        {
                            arr_92 [i_0] [4] [i_17] [i_19] [i_0] = ((/* implicit */_Bool) arr_46 [i_17] [i_17] [i_1] [i_0]);
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_43 [i_0] [8LL] [i_17] [i_19] [i_24])) : (((/* implicit */int) var_2)))))) : (((1734243604) << (((min((((/* implicit */unsigned long long int) 2025708175)), (18446744073709551615ULL))) - (2025708175ULL)))))));
                            arr_93 [i_1] [i_17] [(short)4] |= ((/* implicit */unsigned char) arr_84 [i_17] [i_1] [i_24] [i_19] [i_17] [i_1] [i_0]);
                        }
                        /* vectorizable */
                        for (short i_25 = 0; i_25 < 11; i_25 += 3) 
                        {
                            arr_96 [i_0] [0ULL] [i_1] [i_0] [i_19] [i_25] [i_25] = ((/* implicit */short) ((_Bool) var_4));
                            var_44 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_19])) ? (((/* implicit */int) (short)13409)) : (((/* implicit */int) arr_87 [i_0] [(short)7] [i_0] [i_25] [i_1] [i_0] [i_25]))))) | (var_6));
                            var_45 ^= (+(((/* implicit */int) (_Bool)0)));
                        }
                    }
                    var_46 = ((/* implicit */long long int) arr_78 [i_0] [i_1] [i_1] [i_0] [(short)6]);
                }
                arr_97 [i_0] [i_0] = ((((/* implicit */_Bool) min((min((arr_72 [(short)8] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) (unsigned short)39252)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (arr_39 [i_0] [i_0] [i_1] [(unsigned short)10] [3ULL] [i_0])))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)173))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_43 [i_1] [(unsigned short)1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1889202900390277426LL))))));
            }
        } 
    } 
}
