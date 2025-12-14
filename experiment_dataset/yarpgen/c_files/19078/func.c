/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19078
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
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((arr_4 [i_1] [i_1] [i_0]) >= (((-1LL) & (((/* implicit */long long int) 2097152U))))))));
                /* LoopSeq 4 */
                for (int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_19 = max((((/* implicit */long long int) 546085883U)), (max((arr_8 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2]), (((/* implicit */long long int) var_4)))));
                        var_20 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_1]))));
                        arr_10 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */int) var_2)) << (((arr_8 [i_0] [i_1] [i_2] [i_2 - 2] [i_0] [i_2]) - (4253784011486227046LL))))), (((((/* implicit */int) (short)6503)) << (((((/* implicit */int) (short)(-32767 - 1))) + (32769)))))));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_13 [i_0] = ((/* implicit */short) max((3570411465U), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 10; i_5 += 2) 
                        {
                            var_21 ^= arr_12 [i_0] [i_0] [i_2 - 1] [i_4];
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_5 + 1] = ((/* implicit */signed char) var_15);
                            arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32771)))));
                        }
                    }
                    arr_18 [i_0] [i_1] [(short)10] [i_2 - 2] = ((/* implicit */signed char) ((-2508554271525300367LL) ^ (((/* implicit */long long int) max((((/* implicit */int) arr_1 [(_Bool)1])), (((arr_1 [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0])))))))));
                    arr_19 [i_0] [i_2 - 1] = ((/* implicit */_Bool) arr_6 [i_2]);
                    var_22 = ((/* implicit */int) 1388520162U);
                    var_23 = ((/* implicit */short) ((0U) << (((-2508554271525300367LL) + (2508554271525300397LL)))));
                }
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [(short)8] [i_1] &= ((/* implicit */short) ((((arr_21 [i_6] [i_1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) != (arr_21 [i_0] [i_0] [i_0])));
                    var_24 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_6] [i_1] [i_6] [(unsigned short)7]))))) * (((((/* implicit */_Bool) (short)32767)) ? (63488U) : (1406316601U))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]);
                        var_25 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)8166)), (524287)));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [12LL] [i_1] [(signed char)2] [i_8] [i_6] [(signed char)2] &= ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) arr_24 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1])), (arr_8 [i_8] [(signed char)3] [i_8 - 1] [i_8 - 1] [(signed char)10] [i_8])))));
                        arr_30 [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8259699903467801966LL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_14 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 - 1])), (arr_27 [5LL] [5LL] [i_8 - 1] [i_8 - 1]))))) : (7410778501959552629LL)));
                        var_26 = ((/* implicit */short) min((var_26), (max(((short)(-32767 - 1)), ((short)(-32767 - 1))))));
                        arr_31 [i_0] [i_8] = ((/* implicit */unsigned int) var_15);
                    }
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    var_27 ^= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_9]);
                    var_28 = ((((/* implicit */int) arr_1 [i_0])) & (1993661876));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [(signed char)8] [i_1] [(_Bool)1] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_6 [i_1]));
                        arr_38 [i_10] [i_9] [7LL] [i_0] = ((/* implicit */unsigned char) -1LL);
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            arr_41 [i_11] [7LL] [i_9] [i_1] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned char) 1406316601U);
                            var_29 ^= ((/* implicit */long long int) arr_27 [i_0] [i_9] [i_10] [i_11]);
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))));
                        }
                        var_31 *= ((/* implicit */unsigned long long int) arr_20 [i_10] [i_9] [i_1] [i_0]);
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    var_32 *= ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (994302126202017762LL))));
                    arr_44 [i_0] [i_12] [i_0] = ((/* implicit */int) ((arr_28 [i_1] [i_12]) & (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (max((((/* implicit */short) (_Bool)1)), ((short)31059)))))))));
                    var_33 = ((/* implicit */int) min((var_33), (min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((max(((_Bool)1), (var_7))) ? (((((/* implicit */int) arr_3 [i_1] [i_12])) & (((/* implicit */int) (short)-30324)))) : (((/* implicit */int) ((arr_35 [i_12]) > (((/* implicit */long long int) ((/* implicit */int) (short)-18761))))))))))));
                    var_34 = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (-1742484193)));
                }
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_13] [i_0]))));
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (~(var_5))))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_0] [i_1] [i_13] [i_14])) + (((/* implicit */int) (_Bool)1)))))));
                        var_38 = ((/* implicit */long long int) max((var_38), (max((((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52042)))))))));
                        var_39 ^= ((/* implicit */long long int) arr_40 [i_0] [i_0] [i_1] [i_1] [i_13] [i_14]);
                    }
                    for (short i_15 = 3; i_15 < 11; i_15 += 3) 
                    {
                        var_40 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_51 [i_15 - 3] [i_15 - 1] [i_13])) && (((/* implicit */_Bool) arr_51 [i_15 + 1] [i_15 - 2] [i_15])))), (var_2)));
                        var_41 += ((/* implicit */unsigned long long int) arr_40 [i_15 + 1] [i_15 + 2] [i_15 - 3] [i_15 + 1] [(signed char)0] [(signed char)0]);
                        var_42 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-18919)) <= (((/* implicit */int) (unsigned char)36)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), (arr_36 [i_15 - 3]))))) : (((arr_8 [i_15] [i_15] [i_15] [i_15 + 2] [i_15 - 1] [i_15 - 1]) >> (((((/* implicit */int) arr_36 [i_15 - 2])) + (174)))))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) arr_39 [i_0] [6LL] [i_13] [i_13] [6LL]))));
                        arr_56 [i_13] [i_13] [i_16 - 1] = ((/* implicit */int) (_Bool)1);
                        arr_57 [i_13] [i_1] [i_1] [i_13] [i_13] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_36 [i_16 - 1])) : (((/* implicit */int) arr_0 [i_13] [i_16 - 1])))), (((/* implicit */int) max(((signed char)-87), (((/* implicit */signed char) var_0)))))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) max((2473692895733923532LL), (((/* implicit */long long int) (unsigned char)255)))))));
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_10))))))));
                    }
                }
                arr_58 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) >= (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) ^ (-5781598029513624401LL))) & (((/* implicit */long long int) -510250111))))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 12; i_17 += 4) 
                {
                    for (long long int i_18 = 3; i_18 < 12; i_18 += 3) 
                    {
                        {
                            arr_64 [(_Bool)1] [i_1] [i_17 - 1] [i_18] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)23)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (4033812559U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (-2485184138187734040LL) : ((-9223372036854775807LL - 1LL))));
                            /* LoopSeq 4 */
                            for (unsigned char i_19 = 2; i_19 < 12; i_19 += 2) 
                            {
                                arr_68 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-91)), ((unsigned char)219)))), (((((/* implicit */_Bool) 1315400744)) ? (5781598029513624401LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16384)))))));
                                var_46 = arr_3 [i_17 - 2] [i_18 - 2];
                            }
                            for (unsigned int i_20 = 0; i_20 < 13; i_20 += 2) 
                            {
                                arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((min((((/* implicit */long long int) ((((/* implicit */int) arr_50 [i_0] [i_1] [i_17 - 2])) | (((/* implicit */int) (short)-1))))), ((-(5781598029513624401LL))))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [(short)9] [(short)9])) + (22194)))));
                                var_47 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_12))))) >= (((arr_8 [i_0] [i_0] [(short)11] [i_17] [i_18] [i_20]) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) var_14))));
                            }
                            for (unsigned int i_21 = 3; i_21 < 12; i_21 += 2) 
                            {
                                var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_0])) | (((/* implicit */int) var_3))));
                                var_50 ^= ((/* implicit */int) arr_12 [i_0] [i_1] [i_17 - 1] [10]);
                                var_51 = ((/* implicit */_Bool) arr_63 [i_17 + 1] [i_18 - 2] [i_21 - 3]);
                                var_52 += ((/* implicit */signed char) (~(max((arr_25 [i_0] [i_0] [i_17 - 1] [i_18 - 1] [i_21 - 1] [i_21 - 3]), (((/* implicit */long long int) var_4))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_22 = 4; i_22 < 10; i_22 += 4) 
                            {
                                arr_80 [i_0] [i_18 - 3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-27))));
                                arr_81 [i_22 + 3] [i_18] [i_17] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [9LL] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [7] [i_18 - 1] [i_18] [i_17 + 1]))) : (var_10)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_23 = 1; i_23 < 17; i_23 += 1) 
    {
        var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) 1002607604U)) : (2397368266229410572LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (((((/* implicit */_Bool) arr_82 [i_23 + 1])) ? (-5781598029513624401LL) : (((/* implicit */long long int) arr_82 [i_23]))))));
        arr_85 [(_Bool)1] = ((/* implicit */_Bool) arr_82 [i_23 + 1]);
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_89 [i_24] = ((/* implicit */long long int) var_5);
        /* LoopSeq 1 */
        for (int i_25 = 0; i_25 < 13; i_25 += 3) 
        {
            var_54 = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_63 [i_24] [i_25] [i_25]))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_24]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_2)), (arr_0 [i_24] [i_25]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (arr_66 [i_24] [i_24])))));
            var_55 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_22 [i_24] [i_24] [i_25] [i_25]))))));
            var_56 = ((/* implicit */_Bool) (-(-7128121375298587970LL)));
            var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) ((((/* implicit */int) ((((arr_60 [i_24] [i_24] [i_25]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-3065141650530934828LL))) <= (((arr_25 [i_24] [i_24] [(_Bool)1] [11LL] [i_25] [11LL]) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) <= (((/* implicit */int) var_4)))))));
            arr_92 [i_24] [i_24] = ((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        }
        var_58 = ((/* implicit */long long int) max((var_58), (((long long int) (short)30446))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_26 = 1; i_26 < 9; i_26 += 3) 
        {
            var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_72 [i_26 + 2]))) & (var_13))))));
            var_60 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
        }
        var_61 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (arr_45 [i_24] [i_24] [i_24] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) != (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_24] [i_24] [i_24] [i_24])))))) + (((/* implicit */int) arr_83 [i_24]))));
    }
    /* vectorizable */
    for (unsigned long long int i_27 = 2; i_27 < 14; i_27 += 4) 
    {
        arr_100 [i_27] [i_27] = ((/* implicit */short) arr_82 [i_27 + 1]);
        arr_101 [i_27] = ((/* implicit */short) var_14);
    }
    for (short i_28 = 0; i_28 < 21; i_28 += 4) 
    {
        arr_104 [i_28] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_103 [i_28])) >> (((var_13) - (686944868318598177LL)))))) || (arr_103 [i_28])));
        var_62 ^= ((/* implicit */unsigned char) arr_102 [i_28]);
        var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) arr_103 [i_28]))));
    }
}
