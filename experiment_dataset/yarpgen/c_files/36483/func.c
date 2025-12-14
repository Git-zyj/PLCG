/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36483
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) var_14);
        arr_4 [i_0] = ((/* implicit */long long int) max(((~(17486682224469800845ULL))), (((/* implicit */unsigned long long int) (!(arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) var_1);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)253)) ^ (((/* implicit */int) min((arr_11 [4ULL] [i_2] [(unsigned short)16]), ((unsigned short)25446))))));
                    arr_14 [i_2] [i_2] |= ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
        arr_15 [i_1 - 3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) var_12)))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 - 1])) ? ((~(867009289U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (max((var_5), (arr_5 [i_1 - 1] [(unsigned short)3]))) : (var_5)));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                var_17 ^= ((/* implicit */unsigned short) ((var_0) == (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255)))))));
                var_18 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [(_Bool)1]))));
                arr_23 [i_5] [i_5] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 4557486924008400807ULL))) % (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_8 [i_5] [i_4] [i_1])) : (arr_9 [i_1] [2ULL] [3])))))));
            }
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_30 [(unsigned short)8] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_22 [i_1 - 2])) : (((/* implicit */int) arr_22 [i_1 - 2]))))), (((((/* implicit */_Bool) arr_11 [(unsigned char)13] [i_7] [i_6])) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_7] [i_7]))) : (9223372036854775807LL))))))));
                        arr_31 [i_1] [i_4] [i_6] [i_4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_22 [(unsigned char)0])), (var_4)))))) ? ((+(((/* implicit */int) (unsigned short)18)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7] [i_6])) || (((/* implicit */_Bool) 4294967295U)))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (unsigned short i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_6))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (min((((/* implicit */unsigned long long int) arr_11 [(_Bool)0] [i_10] [i_9 - 2])), (arr_9 [i_10] [i_8] [i_1])))))) ? (((/* implicit */unsigned long long int) min(((~(var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_8] [i_9] [(unsigned char)8])) ? (((/* implicit */int) (unsigned short)14695)) : (((/* implicit */int) (unsigned short)65518)))))))) : (max((arr_34 [i_1 - 2] [i_9 - 2] [i_9] [i_9 - 2]), (0ULL)))))));
                        arr_39 [(unsigned short)19] [2U] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_10])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41)))))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_11 = 3; i_11 < 19; i_11 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_11 + 2] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39))) : (8373324468696403283LL))) == (((((/* implicit */_Bool) arr_25 [i_11 - 2] [i_11 - 2] [i_11] [(unsigned short)2])) ? (9223372036854775779LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                var_24 = ((/* implicit */int) var_0);
                var_25 = ((/* implicit */unsigned long long int) (~(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 691791776))))));
                var_26 = ((/* implicit */unsigned long long int) var_0);
                arr_47 [i_11] [(unsigned short)14] [17U] = var_9;
                arr_48 [i_11] [(unsigned char)19] [10LL] [i_13] = ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_25 [11U] [11U] [i_13] [i_11 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) (signed char)-62))))) : (((arr_25 [i_11] [i_12] [(unsigned short)15] [i_11 - 3]) + (arr_25 [i_11] [(unsigned short)8] [i_11] [i_11 - 1]))));
            }
        }
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 1; i_16 < 19; i_16 += 2) 
                {
                    var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_11 + 1]))));
                    var_28 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)32))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_36 [4U] [i_11 - 3] [i_16 - 1] [i_16 + 2]))))) : (max((var_10), (((/* implicit */long long int) (!(((/* implicit */_Bool) 252505115U)))))))));
                }
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            arr_66 [i_15] [i_14] [i_15] [i_17] [i_17] = ((/* implicit */unsigned int) var_14);
                            var_29 = 3551653222U;
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_11 - 1] [i_11 - 3] [i_11 + 2])))))) : (max(((((_Bool)1) ? (3161907482566787735ULL) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_3))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_50 [i_14] [(unsigned short)17])), (var_3))))));
            }
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (((~(var_10))) | (((/* implicit */long long int) 4294967294U)))))));
        }
        arr_67 [9ULL] &= (+((-(((unsigned long long int) arr_42 [19U] [i_11 - 2] [i_11])))));
        arr_68 [i_11] = ((/* implicit */unsigned char) var_8);
        /* LoopSeq 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_20 = 1; i_20 < 20; i_20 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                var_34 = ((/* implicit */int) arr_25 [i_11] [i_11] [10U] [i_11]);
            }
            for (long long int i_21 = 1; i_21 < 20; i_21 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-99))))) ? (((((/* implicit */_Bool) (signed char)62)) ? (((((/* implicit */_Bool) (unsigned short)8064)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (8373324468696403283LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_21] [i_21 - 1] [i_21 - 1]))))) : (((/* implicit */long long int) 3601427797U)))))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (var_14) : (((/* implicit */unsigned long long int) (~(var_10))))));
                var_37 = ((/* implicit */unsigned short) arr_60 [i_11] [(unsigned char)12] [i_19] [i_21] [10ULL] [i_11]);
            }
            for (long long int i_22 = 1; i_22 < 20; i_22 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 2; i_23 < 19; i_23 += 3) 
                {
                    for (unsigned short i_24 = 0; i_24 < 21; i_24 += 3) 
                    {
                        {
                            var_38 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_46 [(unsigned char)17] [i_23] [i_23 - 1]))));
                            arr_86 [i_19] [i_19] [i_24] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65518))))), ((+(9158323738402290490LL))))) == (((/* implicit */long long int) (-(arr_64 [6ULL] [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23]))))));
                            arr_87 [i_19] [i_19] [i_19] [i_23] [20] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) arr_58 [i_11] [6U] [i_23 + 1] [i_11])) : ((-(var_14))))), (((/* implicit */unsigned long long int) (unsigned short)25039))));
                            var_39 = ((/* implicit */unsigned short) ((unsigned int) ((-5446672634593580255LL) + (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63574))))))));
                        }
                    } 
                } 
                arr_88 [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (2198262693U)))))))));
            }
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_13 [i_11 - 3])))))))), ((((_Bool)0) ? (((/* implicit */long long int) (-(4294967294U)))) : (min((((/* implicit */long long int) var_0)), (-1082615016342643055LL))))))))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_91 [14U] [14U] &= ((/* implicit */long long int) (unsigned short)60556);
            arr_92 [18] [18] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1)))) >> ((((~(((/* implicit */int) (unsigned short)65518)))) + (65541)))))) && ((!(((/* implicit */_Bool) ((unsigned short) var_13)))))));
        }
        for (long long int i_26 = 1; i_26 < 20; i_26 += 1) 
        {
            arr_95 [16ULL] [i_26] [i_11 + 1] = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) >> (((((((/* implicit */int) (unsigned char)220)) + (((/* implicit */int) (unsigned short)58267)))) - (58465)))))));
            arr_96 [i_11] [i_26] [(unsigned char)17] = ((unsigned int) max((-2020125265011859419LL), (((/* implicit */long long int) (unsigned short)65518))));
            arr_97 [i_26] [i_11] [i_26 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7269)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(_Bool)1] [i_26])))))) : (arr_44 [13U] [15LL]))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-(18446744073709551615ULL))) : (((unsigned long long int) var_5))))));
            /* LoopSeq 1 */
            for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_28 = 0; i_28 < 21; i_28 += 3) 
                {
                    var_41 = ((/* implicit */unsigned int) arr_73 [i_11] [(unsigned short)20] [i_27] [i_27]);
                    var_42 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)65524))), (max((((/* implicit */unsigned long long int) var_8)), (1125899772624896ULL))))));
                    arr_103 [i_26] [i_26] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((2096704597U) | (var_5))), (var_4)))), (((((var_14) | (9757785039986875609ULL))) >> (((min((4234521641U), (((/* implicit */unsigned int) (unsigned short)25119)))) - (25066U)))))));
                    arr_104 [i_26] [11LL] [i_26] [i_26] [i_11] [i_26] = ((/* implicit */unsigned short) var_0);
                }
                for (unsigned char i_29 = 0; i_29 < 21; i_29 += 3) 
                {
                    var_43 *= ((/* implicit */unsigned short) arr_63 [i_11] [6ULL] [(_Bool)1] [2] [16LL] [(_Bool)1]);
                    arr_108 [i_26] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)185)) | (((/* implicit */int) ((unsigned short) 3201076568U)))));
                }
                for (unsigned short i_30 = 0; i_30 < 21; i_30 += 2) 
                {
                    var_44 = ((/* implicit */unsigned int) min((var_44), ((~(min((923026765U), (((/* implicit */unsigned int) arr_12 [2U] [i_30] [i_30] [8U]))))))));
                    var_45 = ((/* implicit */long long int) -588066002);
                }
                var_46 = ((/* implicit */long long int) (-(((unsigned int) ((((/* implicit */_Bool) arr_101 [i_11 - 3] [(unsigned char)12] [i_26] [i_11 - 3] [0U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62573))) : (775217044U))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_31 = 0; i_31 < 21; i_31 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_32 = 0; i_32 < 21; i_32 += 1) 
                {
                    for (unsigned char i_33 = 3; i_33 < 20; i_33 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)103))))))))));
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_33 - 3] [i_33] [i_33 - 3] [i_11 + 2]))) - (var_9)))) ? (var_6) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [(_Bool)1] [i_33 - 3] [i_33 - 3] [i_11 - 3])))))));
                            arr_121 [i_32] [i_26] [i_26] [11U] [i_32] [i_31] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_94 [i_33 + 1] [i_26 - 1])), (arr_8 [i_11 + 2] [i_26 + 1] [i_33 + 1]))) >> ((((~(2020125265011859419LL))) + (2020125265011859441LL)))));
                            var_49 ^= ((signed char) ((var_9) + (((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_34 = 0; i_34 < 21; i_34 += 1) 
                {
                    for (unsigned int i_35 = 0; i_35 < 21; i_35 += 1) 
                    {
                        {
                            arr_127 [i_26] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31445))) != (arr_115 [i_26] [i_26])))), (((((/* implicit */_Bool) arr_115 [i_26] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40417))) : (var_5)))));
                            arr_128 [i_34] [i_34] [i_34] [i_26] [i_34] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_11))), (((/* implicit */long long int) 2780729739U))))) ? (((/* implicit */long long int) arr_20 [(unsigned char)13] [15LL] [i_31] [i_35])) : (-9223372036854775807LL)));
                            var_50 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) 507904U)) % (var_12))) : (var_11)))));
                        }
                    } 
                } 
            }
            for (unsigned short i_36 = 0; i_36 < 21; i_36 += 2) 
            {
                arr_132 [i_26] [(unsigned char)19] [i_26] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(unsigned short)0] [i_26] [i_26] [i_26] [i_36]))) | (var_2)));
                arr_133 [(unsigned short)20] [i_26] [i_36] [(unsigned char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_4))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) + (var_1))))));
                arr_134 [i_26] [6U] [i_11] [i_26] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
            }
        }
        arr_135 [i_11] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)4)))) % (max((var_1), (((/* implicit */int) (unsigned char)238)))))), (((/* implicit */int) ((unsigned char) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    }
    var_51 = ((/* implicit */unsigned int) var_9);
}
