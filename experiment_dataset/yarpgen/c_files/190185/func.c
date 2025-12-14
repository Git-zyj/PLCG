/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190185
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
    var_17 = ((/* implicit */int) 1880176231U);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_3))));
    var_19 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_13))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned char)255)) ? (5467781675600892758LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) < (((/* implicit */long long int) max(((+(((/* implicit */int) var_15)))), ((+(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            arr_6 [i_1] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1]);
            var_20 ^= var_10;
            var_21 |= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) min(((short)31), (((/* implicit */short) var_12))))), (var_11))), (((/* implicit */unsigned short) (((((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))))) || (((/* implicit */_Bool) 9223372036854775807LL)))))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            var_22 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) + (2147483647))) << (((((/* implicit */int) var_13)) - (39)))));
            var_23 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_2 [i_2])) * (((/* implicit */int) var_11))))))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_1 [i_0] [i_2]))));
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 4; i_4 < 18; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), ((-9223372036854775807LL - 1LL))));
                            var_26 = ((/* implicit */long long int) max((arr_18 [i_0] [i_3] [i_3] [i_4] [i_5] [i_6]), (((/* implicit */unsigned long long int) var_7))));
                            arr_20 [i_0] [i_3] [i_4] [i_3] [i_6] [i_6] = ((/* implicit */_Bool) var_0);
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */short) ((int) (-2147483647 - 1)));
                            arr_22 [i_0] [i_3] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */short) arr_15 [i_3] [i_4 + 4] [i_3] [i_6]);
                        }
                    } 
                } 
            } 
            arr_23 [(_Bool)0] &= ((/* implicit */unsigned char) arr_0 [i_0] [i_3]);
            arr_24 [i_3] = ((/* implicit */unsigned char) (_Bool)1);
            var_27 -= (((+(max((((/* implicit */long long int) var_2)), (arr_16 [(_Bool)1]))))) ^ (((/* implicit */long long int) (-(((((/* implicit */_Bool) 1073741823LL)) ? (arr_9 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [(_Bool)1] [i_3])))))))));
        }
        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) > ((-(-1210299787)))));
                var_29 *= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_8])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_10)))) << (((min((arr_16 [i_8]), (((/* implicit */long long int) var_16)))) - (49170LL))))), (((/* implicit */int) var_14))));
                var_30 = ((/* implicit */long long int) max(((short)-3295), (((/* implicit */short) var_0))));
            }
            for (long long int i_9 = 1; i_9 < 19; i_9 += 3) 
            {
                var_31 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_7] [i_9]))) / (var_1));
                var_32 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))))) >= (arr_9 [i_0] [i_7] [i_9 - 1])));
            }
            arr_31 [10U] [i_7] &= ((/* implicit */unsigned short) min((((_Bool) (+(((/* implicit */int) var_4))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_7]))) > (arr_14 [(unsigned short)14] [i_0] [(unsigned short)14])))));
            arr_32 [18LL] &= ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [6LL] [i_7]);
            arr_33 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_7] [i_0])))));
            var_33 = ((/* implicit */long long int) var_1);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_11 = 4; i_11 < 19; i_11 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) arr_38 [i_0] [i_10] [i_11] [i_11])) <= (((/* implicit */int) (unsigned short)1)))))));
                arr_39 [i_0] [i_0] [i_11] = ((/* implicit */int) (short)-32);
            }
            for (short i_12 = 4; i_12 < 19; i_12 += 1) /* same iter space */
            {
                var_35 -= ((((/* implicit */int) (short)-4575)) >= (((/* implicit */int) ((unsigned char) arr_12 [i_10] [i_10]))));
                /* LoopSeq 3 */
                for (unsigned short i_13 = 3; i_13 < 21; i_13 += 2) 
                {
                    arr_46 [i_10] [i_12] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_10] [i_10]))) & (arr_1 [i_12 - 1] [i_13])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_13 [i_0] [i_10] [i_13]))))));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((unsigned short) var_7)))));
                    var_37 &= ((/* implicit */unsigned int) (short)7627);
                    arr_47 [i_13] = arr_1 [i_0] [i_0];
                }
                for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (-9223372036854775807LL - 1LL)))));
                    var_39 = ((/* implicit */unsigned int) arr_41 [i_0] [i_0] [i_12]);
                    arr_51 [i_0] [i_10] [i_14] [i_12] [i_14] = arr_10 [i_10];
                    arr_52 [i_10] &= ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_12 + 3] [i_12])) % (((/* implicit */int) (short)-1))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    arr_55 [i_15] = ((/* implicit */int) ((long long int) var_16));
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (+(var_2))))));
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                    {
                        arr_59 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) arr_45 [i_0] [i_10] [i_10] [i_10]);
                        var_41 = ((/* implicit */_Bool) min((var_41), (var_7)));
                    }
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
                    {
                        var_42 -= ((/* implicit */short) ((((/* implicit */_Bool) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)42054))));
                        arr_62 [i_15] [i_15] [i_10] [i_10] [i_15] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_15] [i_10] [i_10] [i_10]))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0] [i_10] [i_12] [i_15]))) | (var_6))));
                        arr_63 [i_10] [i_10] [i_12] [i_15] [i_17] [i_0] |= ((/* implicit */short) 17728587815304446044ULL);
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (-(((/* implicit */int) var_16)))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned char) ((arr_57 [i_0] [i_10] [i_12]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        arr_66 [i_0] [i_10] [i_12] [i_15] [i_10] = ((/* implicit */unsigned int) var_0);
                        var_45 = ((/* implicit */unsigned short) (_Bool)1);
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) var_5))));
                    }
                    var_47 -= ((/* implicit */short) -9223372036854775807LL);
                }
                /* LoopSeq 4 */
                for (unsigned char i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    var_48 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) var_9)))) == (((/* implicit */int) arr_7 [i_0] [i_10] [i_12 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        arr_73 [i_20] [i_20] [i_10] [i_19] [i_12] [i_10] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (short)19091)) < (((/* implicit */int) var_10)))));
                        arr_74 [i_0] [i_10] [i_12] [i_0] = arr_7 [i_0] [i_19] [i_20];
                    }
                    for (short i_21 = 3; i_21 < 20; i_21 += 2) 
                    {
                        arr_77 [i_12] [i_21] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) & (arr_65 [i_10] [i_19] [i_10])))));
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2258559943U)) / (var_6))))));
                        arr_78 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                    }
                    var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((arr_9 [i_0] [i_10] [i_12 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                }
                for (int i_22 = 4; i_22 < 21; i_22 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_23 = 3; i_23 < 19; i_23 += 2) 
                    {
                        var_51 -= ((/* implicit */unsigned short) ((unsigned char) var_15));
                        arr_85 [i_0] [i_23] [i_12 + 1] [i_22] [i_23] [i_23] = ((/* implicit */int) var_5);
                        arr_86 [i_10] [i_10] &= ((/* implicit */unsigned char) (_Bool)0);
                        var_52 = ((/* implicit */unsigned long long int) ((short) var_13));
                    }
                    var_53 *= ((/* implicit */unsigned short) ((arr_17 [i_0] [i_10]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_81 [i_12 - 3] [i_10] [i_22 - 2] [i_12 - 3] [i_22 + 1]))));
                }
                for (unsigned int i_24 = 1; i_24 < 20; i_24 += 1) /* same iter space */
                {
                    arr_89 [i_0] [i_0] = ((/* implicit */unsigned short) 3544859708157979381LL);
                    arr_90 [i_0] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned int) 9249612438951001020ULL);
                }
                for (unsigned int i_25 = 1; i_25 < 20; i_25 += 1) /* same iter space */
                {
                    arr_95 [i_10] [i_10] &= ((/* implicit */short) ((((/* implicit */int) arr_61 [i_0] [i_0] [i_10])) != ((+(((/* implicit */int) arr_44 [i_0] [i_0] [i_10] [i_10] [i_12 - 2] [i_25]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 1; i_26 < 21; i_26 += 1) 
                    {
                        var_54 = arr_0 [i_10] [i_12];
                        var_55 = ((/* implicit */short) arr_48 [i_25] [i_12] [i_26 - 1] [i_26]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_27 = 2; i_27 < 21; i_27 += 2) 
                    {
                        arr_103 [i_27] [i_10] &= ((/* implicit */unsigned int) var_12);
                        arr_104 [i_0] [i_10] [i_12] [i_25] [i_27 - 1] [i_12 - 3] [i_12] = ((/* implicit */short) arr_45 [i_12 + 1] [i_12] [i_25] [i_27 - 2]);
                    }
                    for (unsigned long long int i_28 = 3; i_28 < 20; i_28 += 4) 
                    {
                        arr_107 [i_0] [i_25] [i_12] [i_0] [i_25] [i_25] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)0))));
                        var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) 3558180264U))));
                        var_57 *= var_8;
                    }
                    for (unsigned long long int i_29 = 2; i_29 < 20; i_29 += 4) 
                    {
                        arr_111 [i_0] [i_10] [i_0] [i_12] [i_25] [i_29] [i_29 - 1] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
                        arr_112 [i_0] [i_0] [i_0] [i_10] [i_0] [i_25] [i_29 - 1] &= ((/* implicit */unsigned long long int) arr_43 [i_0] [i_10] [i_25] [i_29]);
                        arr_113 [i_10] [i_25] [i_25] = (-(((/* implicit */int) (unsigned char)83)));
                    }
                }
            }
            var_58 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_10] [i_10])) ? (((0LL) / (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) arr_12 [i_0] [i_10]))));
            arr_114 [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_10]);
        }
        for (unsigned char i_30 = 3; i_30 < 19; i_30 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                for (signed char i_32 = 0; i_32 < 22; i_32 += 4) 
                {
                    for (long long int i_33 = 0; i_33 < 22; i_33 += 3) 
                    {
                        {
                            var_59 ^= ((/* implicit */short) var_9);
                            var_60 = ((/* implicit */_Bool) var_14);
                            var_61 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)9)), (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_60 [i_30 + 3] [i_32] [i_30 - 2] [i_32] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) (-(-1851224462068371072LL))))));
            arr_128 [i_30] = ((/* implicit */_Bool) arr_101 [20ULL] [i_0] [i_0] [i_30] [i_30]);
            var_63 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_61 [i_0] [i_30] [(_Bool)1])) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) arr_117 [i_0]))))) ? (((/* implicit */int) arr_76 [i_0] [i_30])) : (((/* implicit */int) arr_43 [i_30 - 2] [i_30 + 3] [i_30] [i_30 - 3])))) + (8569)))));
        }
    }
    /* vectorizable */
    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_35 = 0; i_35 < 22; i_35 += 1) 
        {
            var_64 = ((/* implicit */unsigned char) var_11);
            var_65 += ((/* implicit */unsigned short) arr_37 [i_34] [i_35] [i_35]);
        }
        var_66 = ((/* implicit */unsigned int) min((var_66), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_34] [i_34])))))));
        var_67 *= ((/* implicit */unsigned long long int) arr_25 [i_34] [i_34] [i_34]);
    }
}
