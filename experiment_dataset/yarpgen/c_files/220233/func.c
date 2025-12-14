/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220233
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) (short)4482);
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_0] [i_2 + 1] [i_1 + 2])) == (var_5))))) % (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_1] [12U]))))), (((unsigned int) var_5))))));
                    arr_9 [i_0] [(short)12] [(signed char)0] [(short)12] |= ((/* implicit */long long int) 127);
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_13 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_1] [19ULL] [i_1 - 1] [i_1 + 2] [i_4])) : (((/* implicit */int) var_4))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_0] [i_3 + 1] [i_4] [i_4] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20557))));
                            var_14 = ((/* implicit */int) ((unsigned char) arr_5 [i_1 - 2] [i_5 - 1] [i_3 + 1]));
                            arr_18 [i_3] [6LL] [i_3 + 1] [i_3 + 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (short)20557)) - (((/* implicit */int) arr_0 [i_1] [i_4])))));
                            var_15 = ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1 + 2] [i_3] [i_1] [18U] [18U]);
                        }
                        arr_19 [i_0] [i_1 + 1] [i_3] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) (short)20557))));
                        arr_20 [i_3] [i_1 + 2] [(short)19] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(16445463U)))) ? (((/* implicit */int) ((_Bool) 395368408U))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4194303)))))))), (min((((/* implicit */unsigned int) (_Bool)1)), (3899598887U)))));
                    }
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) arr_22 [i_3]);
                        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-123))));
                        arr_25 [11] [i_1] [i_3] [11] = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)20940)) : (((/* implicit */int) (signed char)-8))))))));
                        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(min((8191ULL), (((/* implicit */unsigned long long int) (unsigned char)11))))))) ? (((/* implicit */unsigned long long int) var_1)) : (max((((/* implicit */unsigned long long int) (short)-20558)), (15971875559337735918ULL)))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_3])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) == (0LL)));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((arr_3 [i_3 + 1]) % (arr_3 [i_3 + 1])));
                            var_20 = ((/* implicit */unsigned int) (short)-20558);
                            var_21 = ((/* implicit */int) max((var_21), ((~(((/* implicit */int) var_3))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+((+(9318109522801166163ULL))))))));
                        }
                        for (int i_9 = 3; i_9 < 22; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_9 - 2] [i_9 - 2] [i_1 + 2]))));
                            var_24 -= ((/* implicit */long long int) (short)20557);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_2 [i_9 + 1] [i_1 - 3] [i_1]))));
                        }
                        var_26 += (+(4396861297796077361LL));
                        arr_34 [i_0] [i_0] [i_3] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (arr_12 [22] [22] [i_3] [i_3])))) ? (((/* implicit */int) var_3)) : (arr_4 [i_1 + 2] [i_1] [i_3])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_40 [i_0] [i_3] [i_3 + 1] [i_10] [i_11] = ((/* implicit */int) ((short) (short)-20558));
                            var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 4278521830U)) ? (((((/* implicit */_Bool) (short)-20558)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-20560)))) : ((~(((/* implicit */int) arr_31 [i_3] [i_3])))))), (((/* implicit */int) var_7))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_1 - 2] [i_1] [i_3 + 1]))))), (((((/* implicit */_Bool) 4396861297796077361LL)) ? (2848430600U) : (3633221193U)))));
                            arr_42 [i_0] [i_3] [i_3] [i_10] [i_11] [17] [i_1 + 1] = ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_4)), (arr_30 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 117232949)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (min((max((-6LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)85)), ((unsigned short)51278)))))));
                        }
                        arr_43 [i_0] [i_3] [(unsigned char)21] [i_3] [(_Bool)1] [5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-20550))));
                        var_28 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 4396861297796077361LL)))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 4) 
                        {
                            arr_50 [i_13] [i_1] [i_1] [i_3] [i_3] [i_13 + 1] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_27 [i_3] [i_3 + 1]) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (10U))))))) % (max((((/* implicit */int) var_8)), (63)))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_33 [i_0] [i_1] [i_3 + 1] [i_12] [i_13 - 1] [i_3 + 1]))));
                            arr_51 [(unsigned short)2] [(unsigned short)2] [i_3] [i_12] [i_13] [i_3 + 1] = ((/* implicit */unsigned int) arr_22 [i_3]);
                        }
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (+(((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (1951196899U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-20557))))))))))));
                        arr_52 [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_12] [i_3] [i_3 + 1] [i_1 - 1])), (max((((/* implicit */unsigned short) var_3)), (arr_36 [i_12] [i_3 + 1] [i_1 - 2] [i_0]))))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                    {
                        arr_56 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) max(((~(arr_46 [i_1 + 4] [i_1 + 4] [i_3 + 1]))), ((+(arr_46 [i_1 - 2] [i_1 - 2] [i_3 + 1])))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_48 [i_0] [i_1 - 1] [i_0] [i_3] [i_14] [i_14] [6]))));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+((-(3633221183U))))))));
                    }
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) min((((unsigned long long int) arr_58 [i_1] [i_15 + 1] [i_1 + 4])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))))));
                    var_34 = ((((/* implicit */_Bool) max((arr_33 [(signed char)21] [(signed char)21] [i_15] [i_15 + 1] [i_15] [i_1]), (((/* implicit */unsigned short) (signed char)1))))) ? (((/* implicit */int) (short)-20557)) : ((-(((/* implicit */int) (!(var_10)))))));
                }
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 3; i_17 < 23; i_17 += 4) /* same iter space */
                    {
                        arr_63 [(_Bool)1] [i_16] [i_16] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3633221188U)))))))) ? (((/* implicit */unsigned long long int) (~(16445463U)))) : (288230376151711743ULL)));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-8)), (-8354594676795036282LL)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 24; i_18 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2))));
                            arr_67 [(unsigned short)9] [i_18] [i_18] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) arr_61 [i_1 - 3] [(_Bool)1] [i_1 + 2] [i_1 + 4] [i_17 - 1])), (var_5)))));
                            var_37 = ((/* implicit */long long int) max((arr_48 [i_0] [i_1] [i_18] [i_16] [i_17] [i_17] [i_18]), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (arr_57 [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
                        {
                            var_38 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_1 - 3] [i_17 + 1] [i_17 - 1])) ? (((/* implicit */long long int) 16445463U)) : (17179869183LL)));
                            var_39 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) - (-8)))));
                        }
                    }
                    for (unsigned short i_20 = 3; i_20 < 23; i_20 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            arr_79 [1U] [1U] [1U] [i_20] [1U] = ((/* implicit */long long int) arr_26 [i_0] [i_0] [i_16] [i_1]);
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (~(var_5))))));
                            arr_80 [18ULL] [i_1 - 2] = ((/* implicit */unsigned char) ((int) 3633221193U));
                            var_41 = ((/* implicit */int) (((-(((/* implicit */int) arr_31 [i_0] [i_0])))) == (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)8))))));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_0] [i_0] [12U] [12U]))))) && (((/* implicit */_Bool) var_9))));
                        }
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (arr_60 [i_1] [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */int) ((signed char) arr_77 [21LL]))) : ((((_Bool)1) ? (((/* implicit */int) arr_61 [i_16] [(unsigned short)8] [i_0] [i_20 + 1] [i_0])) : (((/* implicit */int) arr_66 [i_0] [i_1] [i_1] [i_1] [i_16] [i_0] [(short)23]))))))), (5362705138384305828ULL))))));
                    }
                    for (short i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        arr_84 [i_0] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_9)))))) == (arr_29 [i_1 - 3] [i_0]))) ? (arr_82 [i_16] [11LL] [i_16] [i_1 + 4] [i_1 + 2]) : (min((7U), (((/* implicit */unsigned int) var_9))))));
                        arr_85 [14] [i_16] [i_16] [23ULL] = ((/* implicit */unsigned char) (((((_Bool)0) ? ((-(18446744073709551595ULL))) : ((~(arr_35 [i_0] [i_0] [18]))))) * (((((/* implicit */_Bool) max((((/* implicit */long long int) 6U)), (arr_21 [i_22] [i_22] [i_0] [i_0] [i_22])))) ? (((/* implicit */unsigned long long int) ((3633221196U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0])))))) : (arr_73 [i_1 - 3] [i_1 - 3] [i_0] [i_0])))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_23 = 2; i_23 < 21; i_23 += 3) 
                    {
                        var_44 = ((/* implicit */signed char) (~(var_5)));
                        var_45 = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), ((((((_Bool)1) && (((/* implicit */_Bool) 0LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (arr_72 [i_1 - 1] [i_1] [i_23] [(unsigned char)15])))));
                        var_46 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    }
                    var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1]))));
                }
            }
        } 
    } 
    var_48 = ((((/* implicit */int) var_4)) == (((/* implicit */int) max((var_0), (var_0)))));
    var_49 = ((/* implicit */unsigned char) var_1);
}
