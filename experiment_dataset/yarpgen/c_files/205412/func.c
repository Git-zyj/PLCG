/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205412
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
            arr_4 [i_0] [i_0] [i_0] = (signed char)-65;
            var_20 = ((/* implicit */_Bool) 4294967295U);
            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)64)) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_22 |= ((/* implicit */short) min((var_5), (min((((/* implicit */int) var_14)), (1073610752)))));
            arr_8 [i_2] = ((/* implicit */unsigned long long int) min((((var_18) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) var_0))))), (((/* implicit */int) (_Bool)1))));
            var_23 ^= ((/* implicit */unsigned int) var_15);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_13 [i_4] [i_4] [(unsigned char)14] [i_4] [i_4 - 1] [i_4 - 1] |= ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (0U)));
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned int) min((((/* implicit */short) var_12)), (var_14))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_7)))) ? (var_5) : (min((((/* implicit */int) (_Bool)1)), (var_5))))) : (max((((/* implicit */int) max((var_1), (((/* implicit */short) var_10))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        }
        var_25 *= ((/* implicit */signed char) ((((/* implicit */int) min(((short)-28670), (((/* implicit */short) var_4))))) != (min((((((/* implicit */int) var_17)) / (var_9))), (((((/* implicit */int) var_12)) % (var_5)))))));
        var_26 ^= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) % (var_7)))) ? (-1659303043) : (((/* implicit */int) var_10))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))), (min((6141907602623986461LL), (var_7)))))));
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))), (((int) var_16))))))))));
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                {
                    var_28 ^= ((/* implicit */long long int) var_8);
                    var_29 = ((/* implicit */int) var_0);
                }
            } 
        } 
        arr_21 [i_5] = ((/* implicit */int) var_16);
    }
    for (short i_8 = 3; i_8 < 13; i_8 += 4) 
    {
        arr_26 [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-104))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (signed char)58))))) : (min((var_7), (((/* implicit */long long int) var_8))))))));
                        arr_35 [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((unsigned char) (short)-6131)), (((/* implicit */unsigned char) (_Bool)1))))), (((unsigned long long int) var_9))));
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (65472)));
                        var_32 = var_13;
                        var_33 ^= ((/* implicit */unsigned long long int) (signed char)0);
                        arr_38 [i_8] [i_9] [i_9] [2] = ((/* implicit */int) var_1);
                    }
                    for (short i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */short) var_12)), (var_2))), (((/* implicit */short) var_4))))) ? (((/* implicit */unsigned long long int) ((var_13) ? (((var_13) ? (2872001968U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((var_6) ? (var_9) : (((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) ((signed char) 898866672U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) != (((/* implicit */int) (signed char)65)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2022733993U)) : (1796864350387928109ULL))))))))));
                        arr_41 [i_8] = ((/* implicit */_Bool) min((((/* implicit */int) ((short) ((var_9) | (((/* implicit */int) var_1)))))), (min((((/* implicit */int) ((((/* implicit */int) var_12)) != (var_9)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)65))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            {
                                arr_46 [i_8] [i_9] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((int) (-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) (signed char)65)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) 2272233302U)) : (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)-59)))))))));
                                arr_47 [i_8] [i_8] [i_8 + 2] [i_10] = ((/* implicit */int) ((short) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_14)))));
                                arr_48 [i_15] |= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (short)32767)))))))) ? (min((var_8), (((unsigned int) var_11)))) : (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_16))), (((/* implicit */unsigned int) min((((/* implicit */short) var_13)), (var_14))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_16 = 1; i_16 < 15; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                {
                    var_35 = ((/* implicit */_Bool) var_3);
                    arr_53 [i_8] [i_16] [i_8] = min((min((var_5), (((/* implicit */int) (short)30654)))), (((/* implicit */int) ((short) 2022733993U))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
    {
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((short) var_3)))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_5)) : (1796864350387928109ULL))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) var_10)))) - (100))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (signed char)-125)) ? (-1315405213) : (((/* implicit */int) (unsigned char)198))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_19 = 1; i_19 < 19; i_19 += 2) /* same iter space */
        {
            var_37 = (signed char)-85;
            arr_59 [i_18] [i_19] = ((/* implicit */unsigned char) var_5);
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) var_3)))))));
        }
        for (short i_20 = 1; i_20 < 19; i_20 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned int) var_17);
            arr_62 [i_18] [i_20 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) var_13)), (var_7))) : (((/* implicit */long long int) max((min((var_9), (var_5))), (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) var_6)))))))));
            arr_63 [i_18] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)897)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((var_13) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) min((var_10), (var_4))))))) ? (min((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_15))))), (min((((/* implicit */unsigned long long int) var_2)), (8589934591ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)28929))) : (1795962445404772366LL))))));
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-6342), (((/* implicit */short) (unsigned char)0))))) ? (min((((/* implicit */long long int) var_14)), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))))))));
        }
        for (short i_21 = 1; i_21 < 19; i_21 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                var_41 = ((/* implicit */signed char) min((((int) (signed char)-124)), (((/* implicit */int) var_15))));
                arr_70 [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_4)))))) : (var_8))) : (min((((((/* implicit */_Bool) var_12)) ? (3067189932U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-57)) : (var_3))))))));
                var_42 = ((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-6342))))) < ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_16)) : (var_7))))));
            }
            var_43 = (_Bool)0;
        }
        arr_71 [i_18] |= ((/* implicit */unsigned char) 581572907U);
    }
    for (long long int i_23 = 0; i_23 < 19; i_23 += 2) 
    {
        var_44 = ((/* implicit */_Bool) ((signed char) min(((short)3558), ((short)17566))));
        arr_75 [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) min(((signed char)-65), ((signed char)64))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_12)), (var_14)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) var_18))))) ? (min((var_0), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (var_17)))))));
    }
    /* vectorizable */
    for (unsigned char i_24 = 2; i_24 < 16; i_24 += 2) 
    {
        arr_78 [i_24] [i_24] = ((/* implicit */long long int) var_10);
        /* LoopSeq 3 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_83 [i_25] = ((/* implicit */signed char) var_15);
            /* LoopNest 3 */
            for (unsigned char i_26 = 0; i_26 < 19; i_26 += 2) 
            {
                for (int i_27 = 1; i_27 < 17; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 19; i_28 += 2) 
                    {
                        {
                            arr_92 [i_24] [i_24 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (var_16) : (2272233304U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)9005)))));
                            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) var_3))));
                            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))));
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */_Bool) 12031398948673520711ULL);
            arr_93 [i_24] [i_24] [i_24] = ((/* implicit */int) var_0);
        }
        for (short i_29 = 0; i_29 < 19; i_29 += 1) 
        {
            var_49 = ((/* implicit */long long int) var_1);
            arr_97 [i_24] [i_29] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_1)));
        }
        for (short i_30 = 0; i_30 < 19; i_30 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 0; i_31 < 19; i_31 += 1) 
            {
                for (long long int i_32 = 3; i_32 < 17; i_32 += 2) 
                {
                    for (int i_33 = 1; i_33 < 17; i_33 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned int) var_3);
                            arr_107 [i_31] [i_31] [i_31] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))));
                        }
                    } 
                } 
            } 
            var_51 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (6415345125036030905ULL))));
            var_52 = var_17;
            /* LoopSeq 1 */
            for (long long int i_34 = 1; i_34 < 18; i_34 += 1) 
            {
                arr_111 [i_24] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2022733993U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
                var_53 = ((/* implicit */_Bool) var_1);
                var_54 = ((((((/* implicit */int) ((signed char) (signed char)-80))) + (2147483647))) >> (((((/* implicit */int) (short)7168)) - (7142))));
            }
        }
    }
    /* LoopNest 2 */
    for (long long int i_35 = 1; i_35 < 17; i_35 += 2) 
    {
        for (short i_36 = 0; i_36 < 21; i_36 += 3) 
        {
            {
                var_55 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((long long int) (unsigned char)0))), (min((4246095403899244898ULL), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_1))))))))));
                arr_118 [i_35] [i_35] |= ((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15))))) : (min((1227777363U), (((/* implicit */unsigned int) (_Bool)0))))));
            }
        } 
    } 
}
