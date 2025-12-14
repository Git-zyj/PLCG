/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227370
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) (+(((arr_4 [i_2 - 1] [i_2 - 3] [i_4 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) arr_9 [i_0] [(unsigned short)9] [i_4]))))));
                                var_12 ^= ((/* implicit */long long int) (+((-(-185641186)))));
                                var_13 *= ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_13 [i_0]), (arr_5 [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((var_9), (((/* implicit */unsigned int) (signed char)41)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_5] [i_5] [(short)4] [i_0] [i_0] [i_0]))) : (var_0))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (599234596))))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 3278768249U)) > (var_0)))))))))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7180)) ? (2366610640992241026ULL) : (((/* implicit */unsigned long long int) 2804569812U))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)41866)) < (((/* implicit */int) var_5))))) : (((/* implicit */int) arr_11 [i_2]))))) : (((((/* implicit */_Bool) 16386438659423557145ULL)) ? (-3624125720254419013LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14)))))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_12 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) arr_22 [i_9] [i_9 + 2] [(signed char)10] [i_9 - 1] [i_9] [i_9 - 2] [i_9]);
                                var_17 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)124))))), (16314922685078030485ULL)))) ? ((+(arr_21 [i_1] [i_1] [i_7 + 1] [i_8] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)57271))))));
                                arr_31 [i_0] [i_1] [i_7] [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) ((short) ((signed char) (signed char)-52)));
                                var_18 |= ((/* implicit */long long int) ((unsigned int) (signed char)(-127 - 1)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) -241262326146260763LL)) ? (((/* implicit */int) arr_10 [i_1] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_10)))))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_10] [i_11] [i_12 + 1] [i_0] [i_1]);
                            var_21 ^= ((/* implicit */unsigned short) 12845158422455233538ULL);
                            var_22 = ((/* implicit */short) ((arr_8 [i_1] [i_1] [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_0]))) : (4801907624071411243ULL)));
                        }
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [10LL] [i_0])))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) arr_1 [i_10])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        var_25 = ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_10])) ? (arr_4 [i_0] [i_1] [i_10]) : (arr_4 [i_10] [i_1] [i_0]));
                    }
                    arr_39 [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17103))) : (-8700951731265350296LL)));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0])))))));
                                var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0] [i_1])) ? (arr_33 [i_0] [i_10]) : (arr_33 [i_0] [i_1])));
                            }
                        } 
                    } 
                }
                for (signed char i_15 = 2; i_15 < 8; i_15 += 2) 
                {
                    arr_49 [i_0] [(unsigned short)6] [i_15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_25 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) : (0ULL)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44028))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)24227)), (arr_48 [i_0] [i_1] [i_1] [i_0])))) || (((/* implicit */_Bool) -6062480298207961950LL)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_28 ^= ((/* implicit */short) arr_51 [i_0] [9LL] [9LL] [i_16] [i_15 + 1]);
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) var_10)), ((-(var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0)))))))));
                        var_30 = ((6145435518947276062LL) + (-9223372036854775795LL));
                        var_31 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) arr_35 [i_0] [i_1] [(unsigned char)4]);
                            var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_15 + 3] [i_15 + 2] [i_15 - 2])) ? ((-(2147483647))) : (((/* implicit */int) arr_9 [i_15 + 3] [i_15 + 3] [i_15 + 3]))));
                            arr_57 [i_17] [i_1] [(signed char)9] [i_17] [i_18] [i_18] = ((/* implicit */_Bool) 0U);
                            var_34 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-30845)) + (2147483647))) << (((((/* implicit */int) (unsigned short)45572)) - (45572)))));
                        }
                        for (unsigned long long int i_19 = 2; i_19 < 10; i_19 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) (~((~(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                            var_36 = 6105880815249428389LL;
                            arr_60 [i_0] [(unsigned short)0] [i_15] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-20203))))));
                        }
                        arr_61 [i_0] [i_1] [i_17] [i_17] = ((/* implicit */int) (~(2892101419447051945ULL)));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (~(((/* implicit */int) (short)-17539))))))))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) min((var_4), (((/* implicit */unsigned long long int) (~((~(arr_3 [i_0] [i_1])))))))))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        var_39 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)44143))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) var_9))))))));
                        arr_64 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5144200466884453810LL)) ? (-9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9341)))))) ? (((/* implicit */unsigned long long int) 3762824642U)) : (min((var_4), (arr_44 [i_20] [i_15 + 3]))))), (((/* implicit */unsigned long long int) (unsigned short)12972))));
                        var_40 = (unsigned char)16;
                        arr_65 [i_0] [i_1] [(unsigned short)4] [i_20] [5U] = ((/* implicit */int) (signed char)-117);
                        var_41 = ((/* implicit */unsigned short) min(((+(arr_42 [i_15 + 2] [i_15 + 3] [i_15] [i_15 - 1]))), (min((arr_42 [i_15 - 2] [(_Bool)1] [i_15] [i_15 - 2]), (arr_42 [i_15 + 2] [(signed char)2] [i_15 - 2] [i_15 - 2])))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_42 = ((/* implicit */_Bool) max((max((var_1), (((/* implicit */long long int) (unsigned short)18858)))), (((min((((/* implicit */long long int) var_3)), (var_6))) % (((long long int) var_9))))));
                        var_43 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7))))), (max((var_4), (((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_15] [i_21] [i_21])))))))));
                        var_44 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) ((unsigned char) (signed char)-114))) : ((~(((/* implicit */int) (_Bool)1))))));
                        var_45 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_15 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_53 [i_0] [i_1] [i_1] [i_21]))))) : ((-(((/* implicit */int) var_3)))))));
                        var_46 *= ((/* implicit */int) (_Bool)1);
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 4; i_22 < 8; i_22 += 2) 
                {
                    for (short i_23 = 4; i_23 < 10; i_23 += 1) 
                    {
                        {
                            var_47 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_51 [i_0] [i_1] [i_22 + 2] [i_23] [(unsigned short)10])) ? (((/* implicit */int) arr_51 [(signed char)10] [i_22] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_3))))));
                            var_48 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((-4159303886709153529LL) & (((((/* implicit */_Bool) arr_20 [i_1] [i_22] [i_22] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-8)))))))), (min((((/* implicit */unsigned long long int) (unsigned char)249)), (arr_50 [(signed char)2] [i_22 - 2] [i_1] [i_0])))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_24 = 2; i_24 < 9; i_24 += 4) 
                            {
                                var_49 ^= ((/* implicit */signed char) (-(var_11)));
                                arr_75 [i_22] [i_1] [i_0] = ((/* implicit */short) ((var_8) || (((/* implicit */_Bool) arr_1 [i_23 - 2]))));
                            }
                            for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) 
                            {
                                arr_79 [i_0] [i_1] [i_25] [i_23] [i_25] [i_22] |= ((/* implicit */unsigned short) (~((-(4035218585U)))));
                                var_50 = ((/* implicit */int) max((var_50), (((int) 6527269340666975434LL))));
                                arr_80 [i_1] [i_1] |= ((/* implicit */unsigned char) (((((~(var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_1] [i_22] [(short)7] [i_1]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775789LL)) ? (3173608430U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [8LL] [i_25] [i_0] [8LL] [i_0] [i_0]))))))));
                            }
                            for (unsigned short i_26 = 1; i_26 < 10; i_26 += 2) 
                            {
                                var_51 += ((/* implicit */unsigned char) min(((+((-9223372036854775807LL - 1LL)))), ((+(arr_72 [(signed char)0] [i_22 + 1] [i_22 + 2] [i_23 - 2] [i_26 + 1])))));
                                arr_84 [i_22] [i_26] [i_22] [i_22] [i_26] = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1599791755)) ? (((/* implicit */long long int) var_9)) : (arr_73 [i_0] [i_1] [i_1] [i_1] [i_0] [i_26]))) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (var_4));
                            }
                            var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_22] [i_23])) ? (((/* implicit */unsigned long long int) -6630302235652087094LL)) : (5960204182048023745ULL))) : (((unsigned long long int) arr_46 [i_0] [i_1] [i_22 + 2] [i_23]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_27 = 0; i_27 < 11; i_27 += 2) 
                {
                    var_53 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_78 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((signed char) -1846087893))) : (((/* implicit */int) var_3))));
                    arr_89 [i_0] [i_1] [i_27] = ((/* implicit */unsigned long long int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_28 = 1; i_28 < 11; i_28 += 2) 
    {
        for (unsigned int i_29 = 0; i_29 < 14; i_29 += 4) 
        {
            {
                var_54 *= ((/* implicit */_Bool) max((14061640066251515388ULL), (((/* implicit */unsigned long long int) max((arr_94 [i_28 + 3] [i_29]), (arr_94 [i_28 + 1] [i_29]))))));
                var_55 = ((/* implicit */unsigned short) arr_90 [i_28 + 1]);
            }
        } 
    } 
    var_56 = ((/* implicit */unsigned long long int) var_7);
    var_57 *= ((/* implicit */_Bool) var_3);
}
