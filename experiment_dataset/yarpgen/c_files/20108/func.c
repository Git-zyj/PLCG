/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20108
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    arr_10 [i_0] [i_2] [i_1] [i_0] [(unsigned short)6] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)154)) ? (-1) : (-29))));
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (~(18446744073709551615ULL))))));
                    var_12 ^= ((/* implicit */unsigned short) ((short) var_3));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((signed char) var_2)))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) <= (-788530353)));
                        var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-47) : (((/* implicit */int) (short)-25919))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) -29)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))));
                        var_16 = 1186032647U;
                    }
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        arr_17 [i_3] [i_2] [i_3] [i_3] [(signed char)16] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1271471045)) ? (var_9) : (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (131071U));
                        arr_18 [i_0 - 2] [i_2] [i_0 - 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_7)) : (var_9)))));
                        var_17 -= ((/* implicit */long long int) 47);
                        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (short)-25946))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25918)) ? (4278190080U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1090)))))) ? (((/* implicit */int) (unsigned short)0)) : (((int) -41))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        arr_21 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25918)))));
                        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)25908)) == (((/* implicit */int) (short)0))))) > (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_7) : (((/* implicit */int) (unsigned char)20))))));
                        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1271471043)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) var_5))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)7936))));
                    }
                }
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */int) (signed char)28)) != (((/* implicit */int) var_2)))))));
                arr_22 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) (short)-25919)) < (((/* implicit */int) (unsigned char)48)))))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    arr_25 [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (short)8160)) : (((/* implicit */int) (unsigned short)65527)))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741822)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-891))))) || (((/* implicit */_Bool) (short)10513)))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25914)) ? (((/* implicit */int) (unsigned short)11883)) : (((/* implicit */int) (unsigned short)0)))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */long long int) 536870400)) > (-3541907032139795505LL)));
                        var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) (unsigned short)32640)) ? (((/* implicit */int) (short)9512)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) > (var_7))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)238)) >> (((((/* implicit */int) var_0)) - (30823)))));
                    }
                    arr_28 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_6);
                    arr_29 [i_2] = ((/* implicit */signed char) var_9);
                }
            }
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (19754056391147247LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)25903)) : (var_7))))));
                var_30 ^= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)11880));
            }
            for (int i_10 = 4; i_10 < 15; i_10 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
                {
                    var_31 ^= ((/* implicit */unsigned char) ((((unsigned long long int) var_8)) << (((-134217728) + (134217741)))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned char) -23)))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) >> (((var_7) + (1461888590)))));
                }
                for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 1) /* same iter space */
                {
                    var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11883)) ? (-23) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)887)) ? (((/* implicit */int) (unsigned short)17159)) : (((/* implicit */int) (unsigned short)48377)))))));
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        arr_46 [i_0] [i_1] [i_0] [i_0] [(unsigned char)10] &= ((/* implicit */signed char) var_10);
                        var_36 = ((int) (unsigned short)11883);
                    }
                    for (signed char i_14 = 1; i_14 < 18; i_14 += 3) 
                    {
                        arr_51 [i_14] [i_1] [4LL] [i_1 + 1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 909180519U)) && (((/* implicit */_Bool) var_9))));
                        var_37 = ((/* implicit */unsigned long long int) 511);
                    }
                    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-27755)) : (((/* implicit */int) ((short) var_8)))));
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1813729562) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) -30))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))));
                }
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 4; i_16 < 18; i_16 += 3) 
                    {
                        var_41 ^= ((/* implicit */short) ((unsigned long long int) var_6));
                        var_42 = ((((/* implicit */_Bool) (signed char)15)) ? (2692725868U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))));
                    }
                }
                for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) == (var_10)));
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (short)7))));
                        var_45 = ((/* implicit */unsigned short) min((var_45), (var_3)));
                        var_46 = ((/* implicit */unsigned short) 3385786776U);
                        var_47 ^= ((/* implicit */unsigned short) ((((-9) > (var_7))) ? (((/* implicit */int) (short)27754)) : (((/* implicit */int) (short)(-32767 - 1)))));
                        arr_63 [(unsigned char)16] [(unsigned char)16] [i_17] [14ULL] &= ((((/* implicit */int) (short)-25919)) | (((/* implicit */int) (unsigned char)32)));
                    }
                }
                /* LoopSeq 3 */
                for (int i_19 = 0; i_19 < 19; i_19 += 2) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3026027561046529412LL)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (_Bool)1))));
                    arr_66 [i_0] [i_19] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)36))));
                    var_49 = ((/* implicit */short) ((signed char) 4294967277U));
                }
                for (int i_20 = 0; i_20 < 19; i_20 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */short) max((var_50), (((short) (_Bool)1))));
                    arr_69 [i_0] [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_20] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3026027561046529412LL)) ? (((/* implicit */int) (short)32767)) : (504)));
                }
                for (int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                {
                    arr_72 [i_10] [0] [i_1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (short)-1))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((-9223372036854775807LL - 1LL))));
                    arr_73 [i_10] [i_1 + 1] [(short)12] [i_1 + 1] [(short)12] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (-3026027561046529412LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_22 = 0; i_22 < 19; i_22 += 1) /* same iter space */
                {
                    arr_76 [i_0] [i_10] [i_10] [4U] [10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)0))))));
                    /* LoopSeq 1 */
                    for (short i_23 = 3; i_23 < 18; i_23 += 1) 
                    {
                        var_51 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-3))))) ? (((/* implicit */int) (short)256)) : (((/* implicit */int) var_1))));
                        arr_81 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_7))) : (((/* implicit */int) (_Bool)1))));
                        arr_82 [(signed char)12] [i_0 - 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 909180513U)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_9)) : (9223372036854775802LL))) : (((/* implicit */long long int) var_7))));
                        var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535)))))));
                    }
                }
                for (unsigned char i_24 = 0; i_24 < 19; i_24 += 1) /* same iter space */
                {
                    var_53 ^= ((/* implicit */int) ((signed char) 2410164950224281071ULL));
                    var_54 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((19U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-4187)))))) - (((((/* implicit */_Bool) var_1)) ? (-3026027561046529414LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21755)))))));
                    var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) (+(4294967291U))))));
                }
                for (unsigned char i_25 = 0; i_25 < 19; i_25 += 1) /* same iter space */
                {
                    var_56 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)4))));
                    var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned char)178))))) ? ((((_Bool)1) ? (((/* implicit */int) var_2)) : (var_7))) : (((/* implicit */int) var_3))));
                    var_58 += ((/* implicit */short) ((((/* implicit */int) (short)3055)) / (((/* implicit */int) (short)25817))));
                    var_59 = var_0;
                }
            }
            var_60 = (~(((((/* implicit */_Bool) 3263909132U)) ? (((/* implicit */unsigned int) 302350687)) : (2397471673U))));
            arr_89 [14LL] [i_1 + 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -858292323)) : (var_9)))) ? (858292323) : (((/* implicit */int) (unsigned short)49152))));
        }
        /* LoopSeq 2 */
        for (int i_26 = 0; i_26 < 19; i_26 += 3) 
        {
            var_61 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) 302350665)))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))));
            var_62 += ((/* implicit */short) ((((/* implicit */_Bool) ((4054636438U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (268433408) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)24562)) : (((/* implicit */int) var_1))))));
        }
        for (short i_27 = 0; i_27 < 19; i_27 += 1) 
        {
            var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-1))));
            var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2076))));
        }
        var_65 = ((/* implicit */unsigned int) max((var_65), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (-2144004323))) * (((/* implicit */int) var_1)))))));
        var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)1)) && (((/* implicit */_Bool) (short)-21774))));
    }
    /* LoopNest 2 */
    for (long long int i_28 = 0; i_28 < 18; i_28 += 2) 
    {
        for (unsigned char i_29 = 1; i_29 < 17; i_29 += 1) 
        {
            {
                arr_102 [i_28] [i_29] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)217)), (((((/* implicit */_Bool) 364831480U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) (short)-1))))) : (min((((/* implicit */long long int) 4294967293U)), (-4690393782780799606LL)))))));
                var_67 = ((/* implicit */signed char) var_7);
                arr_103 [i_29] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((0ULL) * (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)1016)))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))));
                var_68 -= ((/* implicit */short) var_2);
            }
        } 
    } 
    var_69 = ((/* implicit */unsigned long long int) max((var_69), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((((/* implicit */_Bool) -586126299)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)248)))))))));
}
