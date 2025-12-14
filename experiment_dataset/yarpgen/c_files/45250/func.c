/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45250
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
    var_12 -= ((/* implicit */_Bool) var_9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)4] [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-43)) | (((/* implicit */int) (short)-32764))));
        arr_4 [i_0 + 2] = ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_7))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
        var_14 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -16LL)) ? (9LL) : (((arr_5 [i_1] [i_1]) * (((/* implicit */long long int) 4U)))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)78)) : (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (2147483643))))))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_18 [i_3] [(unsigned short)1] [i_4] [i_4] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (-15LL)))) ? (((((/* implicit */_Bool) (unsigned char)78)) ? (-13LL) : (((/* implicit */long long int) arr_8 [i_4])))) : (((/* implicit */long long int) var_0)))) + (9223372036854775807LL))) >> (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_9 [i_4])), (17750314079811268940ULL))) < (((((/* implicit */_Bool) -21LL)) ? (696429993898282665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            var_15 *= ((/* implicit */_Bool) var_5);
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (~((((~(696429993898282674ULL))) ^ (((((/* implicit */_Bool) (signed char)69)) ? (4593109171178949119ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16)))))))));
                        }
                        var_16 = ((/* implicit */unsigned short) (-(min((arr_13 [i_3] [(unsigned short)13]), (((/* implicit */unsigned int) arr_19 [i_2] [i_2] [i_2] [i_5]))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) var_5);
            arr_22 [i_2] = ((/* implicit */short) -43LL);
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_27 [(unsigned char)8] [(unsigned char)8] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) var_10);
                        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 24LL)) ? (63LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))));
                        arr_28 [i_2] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_16 [i_8] [i_8] [i_8] [i_8] [i_3])), (((((/* implicit */_Bool) arr_26 [i_2] [(unsigned char)8] [(unsigned char)8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_7]))) : (696429993898282658ULL)))));
                        arr_29 [i_2] [(signed char)3] [i_3] [i_7] [i_8] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */int) (unsigned char)210)), (2147483647))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                arr_33 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((var_5), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2])))))));
                arr_34 [i_2] [i_3] [i_2] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_19 [i_2] [i_9] [i_9] [i_9]))));
            }
            for (long long int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            arr_43 [i_2] [8U] [i_10] [i_11] [8U] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)97))) % (-9LL)))))));
                            var_20 ^= ((/* implicit */unsigned int) max((max((var_7), (((/* implicit */int) arr_20 [8U] [i_12] [i_10] [10U] [8U])))), (((/* implicit */int) ((((/* implicit */_Bool) 9041173220594733397LL)) || (((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_10] [i_11] [(short)7])))))));
                            var_21 = ((/* implicit */long long int) (signed char)85);
                        }
                    } 
                } 
                arr_44 [i_2] = ((/* implicit */long long int) min((min((17750314079811268937ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) >> (((3965148346U) - (3965148323U)))))))), (((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))))));
                arr_45 [5U] [(signed char)1] = ((/* implicit */unsigned long long int) 4469387041551316957LL);
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (short i_14 = 3; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (+(max((arr_38 [i_14 + 1] [i_14 - 2] [(unsigned char)1] [i_14 - 1] [i_14]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2294521324U)))))))));
                            arr_53 [i_14 - 3] = -27LL;
                        }
                    } 
                } 
            }
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) (~((+((-(((/* implicit */int) var_8))))))));
                arr_56 [i_2] [i_2] [i_2] [i_2] = (((~(-32LL))) ^ (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_2] [i_3] [i_15] [i_15] [i_15]), (arr_17 [i_2] [i_2] [i_2] [2LL] [i_2]))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            arr_59 [i_2] [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) arr_49 [i_2] [i_2] [(signed char)5] [i_2] [i_2] [i_2]))));
            var_24 = ((/* implicit */unsigned char) ((arr_51 [(signed char)5] [i_2] [(signed char)7] [i_16] [i_16]) && ((!(((/* implicit */_Bool) 1254898969U))))));
            arr_60 [i_16] [i_16] = ((/* implicit */_Bool) arr_13 [i_2] [i_16]);
        }
        /* vectorizable */
        for (int i_17 = 3; i_17 < 11; i_17 += 2) /* same iter space */
        {
            arr_65 [i_17] [i_2] [i_17] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_17] [(unsigned char)3])) <= (696429993898282675ULL))))));
            arr_66 [i_17] [i_17] [i_2] = ((/* implicit */_Bool) 3040068314U);
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 11; i_18 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_0))));
                /* LoopNest 2 */
                for (unsigned short i_20 = 1; i_20 < 13; i_20 += 3) 
                {
                    for (unsigned short i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((unsigned short) arr_47 [i_18 + 1] [i_18 - 3] [i_18 - 3] [(unsigned char)9] [i_20 - 1]));
                            var_27 = ((long long int) (_Bool)1);
                        }
                    } 
                } 
            }
            arr_75 [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_18 - 3] [i_18 - 3] [i_18] [i_18 - 2] [(unsigned short)13]))));
            arr_76 [i_18] = ((/* implicit */unsigned int) arr_57 [i_18] [i_18]);
            arr_77 [i_18] = ((/* implicit */signed char) (-(arr_24 [i_2] [i_18] [i_2] [i_2])));
        }
        arr_78 [i_2] = ((/* implicit */long long int) (short)32751);
        var_28 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((~(18U))))))));
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 3) 
    {
        var_29 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_5) : (((/* implicit */unsigned int) var_0))))));
        var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */unsigned long long int) 4294967272U)) : (18446744073709551611ULL)));
    }
    /* LoopNest 2 */
    for (long long int i_23 = 0; i_23 < 25; i_23 += 3) 
    {
        for (long long int i_24 = 0; i_24 < 25; i_24 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    var_31 ^= ((/* implicit */unsigned long long int) (~(4294967292U)));
                    /* LoopSeq 1 */
                    for (unsigned char i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_87 [i_23] [i_26])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_91 [i_23] [(_Bool)1] [17] [i_25] [i_26] [i_26]))) : (arr_90 [i_23] [16LL] [i_24] [i_25] [i_24]))))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775786LL)) ? (arr_87 [i_23] [i_24]) : (arr_87 [i_23] [i_23])));
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) < (4469387041551316956LL))))));
                    }
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_91 [i_25] [i_23] [i_23] [i_23] [i_23] [i_23])))))));
                }
                for (unsigned short i_27 = 0; i_27 < 25; i_27 += 3) 
                {
                    arr_94 [23LL] [i_24] [i_24] [i_24] |= ((/* implicit */unsigned char) 17U);
                    arr_95 [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned short) (+(14578050502484719271ULL)));
                    /* LoopSeq 2 */
                    for (long long int i_28 = 1; i_28 < 24; i_28 += 2) 
                    {
                        arr_98 [i_23] [i_28] [i_28] [i_28] = var_8;
                        /* LoopSeq 2 */
                        for (long long int i_29 = 0; i_29 < 25; i_29 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_93 [(short)8] [(short)8] [i_27] [i_27])) ? (17750314079811268940ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) & (5274349505711347700ULL))), (((/* implicit */unsigned long long int) (short)22355)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 3442694857U))))))))))));
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) 34LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (arr_86 [i_24]))) >= ((+(arr_90 [i_23] [0] [(unsigned char)24] [i_23] [i_24])))))))))));
                        }
                        /* vectorizable */
                        for (short i_30 = 0; i_30 < 25; i_30 += 3) 
                        {
                            var_38 = ((/* implicit */_Bool) var_0);
                            arr_103 [i_28] [i_28] [i_28] [i_28] [i_28] [(unsigned short)7] [i_30] = ((/* implicit */int) ((unsigned int) ((arr_83 [(_Bool)1] [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                            arr_104 [i_30] [i_28] [i_28] [i_27] [(signed char)14] [i_28] [i_23] = ((((/* implicit */int) arr_102 [20U] [i_28 - 1] [i_28 - 1] [i_28] [i_28] [i_28 + 1] [i_28])) >> (((/* implicit */int) arr_102 [i_28] [(_Bool)1] [i_28] [i_28 - 1] [i_28] [i_28 - 1] [i_28])));
                            arr_105 [i_23] [(unsigned char)15] [i_28] [(unsigned char)15] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_91 [i_28 + 1] [i_28 - 1] [i_28] [i_28 + 1] [i_28] [i_28 + 1]))));
                        }
                    }
                    for (unsigned int i_31 = 0; i_31 < 25; i_31 += 2) 
                    {
                        arr_109 [(unsigned char)4] [i_24] [i_27] [i_27] [(unsigned char)4] [i_31] = ((/* implicit */unsigned char) arr_81 [i_27]);
                        arr_110 [i_23] [i_23] [i_23] [i_27] [(short)20] [23] = ((/* implicit */unsigned short) (+((+((+(-17LL)))))));
                    }
                    var_39 &= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((short) var_3))), (var_9))), (((/* implicit */long long int) min((max((((/* implicit */unsigned char) var_6)), (arr_91 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))), (((/* implicit */unsigned char) ((_Bool) 4294967293U))))))));
                }
                var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_106 [i_24])) ? (((/* implicit */int) arr_106 [i_24])) : (((/* implicit */int) arr_106 [i_23]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)196)) / (((/* implicit */int) arr_106 [i_23])))))));
                /* LoopSeq 1 */
                for (unsigned int i_32 = 0; i_32 < 25; i_32 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        for (unsigned int i_34 = 0; i_34 < 25; i_34 += 3) 
                        {
                            {
                                var_41 = max((((/* implicit */unsigned long long int) ((unsigned char) arr_115 [i_23] [i_24] [i_32]))), ((~(5274349505711347718ULL))));
                                var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */long long int) (-((-(((/* implicit */int) arr_96 [(_Bool)1] [i_33] [(_Bool)1] [(_Bool)1]))))))) ^ (max((((/* implicit */long long int) arr_112 [i_23] [i_24] [i_32] [i_33])), (arr_118 [i_24] [i_24] [i_24] [i_34] [i_34] [i_24]))))))));
                                var_43 = ((/* implicit */unsigned int) ((int) min((arr_90 [i_34] [i_33] [i_24] [i_24] [i_34]), (((/* implicit */unsigned int) arr_81 [i_32])))));
                            }
                        } 
                    } 
                    var_44 -= ((/* implicit */short) arr_100 [(unsigned short)4] [(unsigned short)4] [i_32] [i_32] [i_32] [i_32]);
                    arr_120 [i_23] [i_24] [i_32] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_111 [i_23] [i_23] [i_24] [i_32])) || (var_10)))), (((((/* implicit */_Bool) 2LL)) ? (arr_87 [i_24] [i_32]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (var_7)))))));
                }
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) arr_90 [i_24] [i_24] [i_24] [i_24] [i_24]))));
                /* LoopNest 3 */
                for (long long int i_35 = 0; i_35 < 25; i_35 += 2) 
                {
                    for (long long int i_36 = 0; i_36 < 25; i_36 += 2) 
                    {
                        for (unsigned int i_37 = 0; i_37 < 25; i_37 += 3) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)73))))) ? (((/* implicit */int) min((arr_99 [i_35] [i_35]), (arr_99 [i_36] [i_24])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32738)))))));
                                var_47 = ((/* implicit */short) arr_107 [i_35] [i_35] [i_35] [i_35]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_4))))))));
}
