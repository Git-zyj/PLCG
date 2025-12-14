/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237832
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (5030320176300425627ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))))) : (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) var_14)), (var_15)))))));
    var_20 = ((/* implicit */_Bool) (signed char)0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        var_21 ^= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((signed char) arr_3 [i_0 - 4] [i_0 - 1]))), (((short) arr_3 [i_0 - 2] [i_0 - 2]))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_5 [i_1] [i_0 - 2])))) >> ((((~(((/* implicit */int) var_4)))) + (30)))));
            var_23 = ((/* implicit */_Bool) (-(var_3)));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_11)))) >= (((/* implicit */int) ((unsigned char) arr_6 [i_2])))));
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_6 [i_0 - 2]) : (arr_6 [i_0 - 1])));
            var_25 *= ((/* implicit */signed char) var_15);
            var_26 &= ((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 6; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 4; i_4 < 9; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((arr_3 [i_0 - 2] [i_3 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3849770399U)))))) : (((3120434450769746167LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            arr_18 [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))));
                            arr_19 [i_5] = ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_5]))) >= (18446744073709551615ULL))))));
                            arr_20 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 - 3]))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)7152)) : (((/* implicit */int) arr_4 [i_3])))) >> ((((~(((/* implicit */int) (unsigned char)228)))) + (258)))));
        }
        /* vectorizable */
        for (signed char i_7 = 3; i_7 < 7; i_7 += 1) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((short) var_2))) : ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))));
            var_30 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) != (arr_15 [i_0 - 1] [i_7 - 2] [i_7] [i_0 + 1] [i_0 + 1]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)-1))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)65535)))))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)21))))));
                        var_34 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) min((arr_14 [i_0] [i_8] [i_9] [i_8]), (((/* implicit */unsigned long long int) var_6))))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0])) ? (var_12) : (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_9]))))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116)))))) != (((long long int) 2957589175854202824ULL)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 1; i_11 < 6; i_11 += 3) 
                    {
                        var_35 *= ((/* implicit */unsigned char) var_3);
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (var_8)));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) var_6);
                        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (8442423448349478531ULL)));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) << (((/* implicit */int) var_11))))) != (arr_26 [i_0] [i_0 - 2]))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_12))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))))) : (((((var_16) == (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_17)))) : ((-(var_10)))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 2; i_13 < 21; i_13 += 1) 
    {
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (var_9)));
        var_41 = ((unsigned long long int) arr_36 [i_13 - 1]);
        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_13 - 2])) ? (((((/* implicit */_Bool) -6866464571083849683LL)) ? (arr_37 [i_13 - 1]) : (arr_37 [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_36 [i_13])) : (((/* implicit */int) var_7))))))))));
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 1; i_15 < 21; i_15 += 4) 
            {
                for (signed char i_16 = 1; i_16 < 21; i_16 += 1) 
                {
                    {
                        var_43 *= ((/* implicit */signed char) ((((var_2) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_34 [i_13 - 2])) + (9098)))));
                        /* LoopSeq 4 */
                        for (long long int i_17 = 4; i_17 < 19; i_17 += 4) 
                        {
                            arr_48 [i_13] [i_15] [i_15] [i_15] [i_17 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) == (((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_49 [i_13] [i_15] [i_15 - 1] [i_15] [i_17 + 2] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15))));
                        }
                        for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_17))) ? (var_16) : (((/* implicit */int) (signed char)104))));
                            var_45 = ((/* implicit */unsigned long long int) var_1);
                            var_46 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_13 - 1] [i_14])) < (((/* implicit */int) var_14))));
                        }
                        for (short i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-21188)) + (21211)))));
                            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((short) (_Bool)1)))));
                            arr_55 [i_13] [i_15] = ((/* implicit */unsigned short) (~(arr_43 [i_13 - 1] [i_13 - 1])));
                            var_49 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_39 [i_15 - 1])) * (var_9)));
                        }
                        for (short i_20 = 0; i_20 < 22; i_20 += 3) /* same iter space */
                        {
                            var_50 += ((/* implicit */unsigned int) var_7);
                            var_51 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) arr_37 [i_13]))) : (((/* implicit */int) var_14))));
                        }
                    }
                } 
            } 
            var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) arr_56 [i_13] [(unsigned char)10] [(unsigned char)10] [i_14] [i_13 - 2]))));
            /* LoopNest 2 */
            for (signed char i_21 = 4; i_21 < 19; i_21 += 3) 
            {
                for (int i_22 = 2; i_22 < 20; i_22 += 1) 
                {
                    {
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_13 + 1] [i_14] [i_22 - 2] [i_22])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_16)))) : (arr_59 [i_14] [i_14] [i_14])));
                        arr_65 [i_22 - 2] [i_22] [i_22] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_62 [i_13 - 2] [i_13 - 1] [i_22 + 1] [i_22] [i_13 - 2] [i_21 + 1]))));
                        arr_66 [i_13 - 1] [i_13 - 1] [i_21 + 1] [i_22] [i_13 + 1] [i_21 + 3] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 6656915100184359820ULL)))))));
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) (unsigned char)232))));
                        arr_67 [i_13] [i_14] [i_14] [i_22] = ((/* implicit */short) (~(var_12)));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_23 = 1; i_23 < 20; i_23 += 3) 
            {
                var_55 = ((/* implicit */int) (-(arr_41 [i_23 + 1])));
                /* LoopSeq 1 */
                for (int i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    var_56 = ((((long long int) (signed char)-110)) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_59 [i_13] [i_13] [i_23 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_13 + 1] [i_13 + 1] [i_23 - 1] [i_13 + 1] [i_13 + 1]))))))));
                    var_57 = var_13;
                }
                /* LoopSeq 2 */
                for (unsigned char i_25 = 1; i_25 < 19; i_25 += 3) 
                {
                    var_58 = ((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)114))))));
                    arr_75 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_13 - 2] [i_23] [i_14] [i_23 + 1] [i_23])) ? (((/* implicit */int) ((short) arr_60 [i_13] [i_14] [i_13]))) : (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) arr_42 [i_13] [i_13] [i_13] [i_25 - 1])) : (((/* implicit */int) var_6))))));
                }
                for (unsigned char i_26 = 2; i_26 < 21; i_26 += 3) 
                {
                    var_59 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) var_17)))));
                    var_60 = ((/* implicit */signed char) (~(arr_73 [i_13 + 1] [i_23 + 2] [i_23 - 1] [i_26 - 2])));
                    var_61 = (i_23 % 2 == 0) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_78 [i_23 - 1])))) << (((((arr_51 [i_13] [i_14] [i_23 + 1] [i_23] [i_26 - 2] [i_26 - 1]) * (((/* implicit */unsigned long long int) arr_73 [i_13 + 1] [i_14] [i_23 + 2] [i_26 + 1])))) - (9105620249811954844ULL)))))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_78 [i_23 - 1])))) << (((((((arr_51 [i_13] [i_14] [i_23 + 1] [i_23] [i_26 - 2] [i_26 - 1]) * (((/* implicit */unsigned long long int) arr_73 [i_13 + 1] [i_14] [i_23 + 2] [i_26 + 1])))) - (9105620249811954844ULL))) - (9850755722339610715ULL))))));
                }
            }
            for (unsigned int i_27 = 1; i_27 < 20; i_27 += 4) 
            {
                var_62 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) != (6558076151972779482LL))));
                var_63 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (signed char)-33))));
                arr_82 [i_13] [i_14] [i_27 + 2] = ((/* implicit */signed char) var_0);
                var_64 += ((/* implicit */unsigned long long int) var_12);
            }
            for (signed char i_28 = 0; i_28 < 22; i_28 += 2) 
            {
                var_65 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-112)) == ((-(((/* implicit */int) (signed char)-120))))));
                var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) arr_58 [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_13 - 1]))));
                arr_86 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((short) arr_56 [i_13] [i_28] [i_13 - 1] [i_13 - 1] [i_13 + 1]));
                var_67 = ((/* implicit */signed char) ((unsigned int) var_2));
            }
            for (signed char i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                arr_90 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) arr_79 [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13 + 1])) : ((~(var_1)))));
                arr_91 [i_29] [i_14] [i_14] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((19ULL) == (((/* implicit */unsigned long long int) 16773120)))))) : ((-(var_3)))));
                var_68 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))));
            }
        }
        for (short i_30 = 0; i_30 < 22; i_30 += 1) 
        {
            var_69 = ((/* implicit */unsigned long long int) ((signed char) arr_40 [i_13 - 2]));
            var_70 = ((/* implicit */long long int) max((var_70), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) / (((((/* implicit */_Bool) (signed char)115)) ? (var_13) : (18446744073709551615ULL))))))));
            var_71 = ((/* implicit */unsigned char) (signed char)-16);
        }
    }
    for (int i_31 = 1; i_31 < 14; i_31 += 1) 
    {
        var_72 = ((/* implicit */unsigned int) 9522941417092223333ULL);
        var_73 = ((/* implicit */_Bool) var_13);
    }
    var_74 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_9))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) >> (((((/* implicit */int) min(((unsigned char)146), (((/* implicit */unsigned char) (signed char)-115))))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_10))) - (210ULL)))))));
}
