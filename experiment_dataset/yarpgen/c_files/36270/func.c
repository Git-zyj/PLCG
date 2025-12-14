/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36270
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) var_17);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)1830))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    arr_10 [i_3] [i_2] [10] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                    arr_11 [i_2 + 1] [i_0] [i_3] [i_2 + 1] = ((/* implicit */int) var_7);
                }
                var_19 = ((((/* implicit */_Bool) 28U)) ? ((+(28U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27351))));
            }
            for (int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_20 = ((/* implicit */signed char) 3U);
                arr_14 [i_0] [i_0] = ((/* implicit */long long int) var_1);
            }
            for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
            {
                arr_18 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) (short)6525);
                var_21 += ((/* implicit */_Bool) ((((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (6819097423179761595LL))))))) ? (((/* implicit */int) var_7)) : (128612262)));
                arr_19 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */signed char) (((-(var_0))) + (((((/* implicit */_Bool) arr_17 [i_5 - 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1799)))))));
            }
            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_22 [i_0] = ((/* implicit */int) ((_Bool) (unsigned short)0));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) 10756772885818404030ULL);
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_30 [i_0] [i_7] = ((/* implicit */unsigned short) arr_23 [i_8] [i_8] [i_8] [i_8]);
                        var_22 = ((/* implicit */unsigned long long int) ((min((arr_26 [i_0] [i_1] [i_7 - 1]), (((/* implicit */unsigned int) var_2)))) >= (((4294967267U) >> (((1378319608205785398ULL) - (1378319608205785370ULL)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_1] [i_1] [i_7] [14ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)29056))));
                        var_23 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]))))) | (((/* implicit */long long int) (-(28U))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_7 [i_7 - 1] [i_7 + 1] [i_7 - 1]))))) : (min((((/* implicit */unsigned int) var_15)), (((652189088U) * (var_8)))))));
                }
                /* vectorizable */
                for (long long int i_10 = 1; i_10 < 21; i_10 += 2) 
                {
                    arr_39 [i_10] [2] [i_10] [i_10] = ((/* implicit */unsigned short) (-(var_4)));
                    var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
                    var_26 = ((/* implicit */_Bool) (+(((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                }
                var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_17 [i_0])) ? (var_1) : (var_16)))));
                var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((unsigned short)63746), (((/* implicit */unsigned short) var_6))))), (var_0)));
                arr_40 [i_6] = ((/* implicit */short) var_12);
            }
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */int) var_6))))) ? ((~(var_17))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39)))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_43 [i_0] [i_1] [i_11] [i_11] = ((/* implicit */short) var_6);
                /* LoopSeq 3 */
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)25)))))), (max(((~(var_1))), (var_16)))));
                    var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) 17462740399616757410ULL)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (signed char)-94))))));
                    arr_46 [i_0] [i_12] [i_11] [i_12] = ((/* implicit */unsigned long long int) (+(var_12)));
                }
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_32 = ((/* implicit */int) ((((arr_41 [i_14] [i_14] [i_14] [i_14]) >> (((var_11) + (1591983078))))) >= (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (var_0) : (var_4))))))));
                        arr_52 [i_13] = ((/* implicit */unsigned short) 10756772885818404043ULL);
                    }
                    var_33 = ((/* implicit */signed char) var_11);
                    var_34 = ((/* implicit */_Bool) var_6);
                }
                for (unsigned char i_15 = 2; i_15 < 20; i_15 += 4) 
                {
                    arr_56 [i_0] [i_1] [i_11] [i_1] = ((/* implicit */long long int) ((unsigned int) var_6));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_15))) ? ((~(var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)69)))))));
                    arr_57 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)63714);
                }
                var_36 = ((/* implicit */unsigned int) var_16);
                var_37 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)736)) ^ (((/* implicit */int) (unsigned short)1836))));
                arr_58 [i_11] [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)63717))));
            }
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 17462740399616757410ULL))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54281))) / (arr_51 [i_1] [i_1] [i_1] [i_0] [i_0])))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_14)))));
            var_39 = ((/* implicit */unsigned int) min(((unsigned char)153), (((/* implicit */unsigned char) (_Bool)1))));
        }
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            arr_63 [i_16] = ((/* implicit */long long int) ((int) min((var_13), (min((var_11), (((/* implicit */int) var_2)))))));
            /* LoopSeq 3 */
            for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                arr_67 [i_0] [i_0] = ((/* implicit */int) var_17);
                arr_68 [(unsigned char)8] [i_17] = ((/* implicit */long long int) ((signed char) (_Bool)0));
                arr_69 [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_15))) - (max((((((/* implicit */_Bool) arr_16 [i_17] [i_17] [i_16] [i_0])) ? (var_17) : (var_12))), (((/* implicit */long long int) ((var_16) >= (var_16))))))));
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((-(var_3))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                    var_40 = ((/* implicit */int) ((unsigned long long int) 1U));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        var_41 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(1380257406U)))) | ((~(2279675759308917294LL)))));
                        arr_76 [i_0] [i_0] [12U] [i_0] [i_0] = ((/* implicit */signed char) 3122479296U);
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_20 = 1; i_20 < 21; i_20 += 4) 
                {
                    var_42 = ((/* implicit */long long int) arr_77 [i_0] [i_16] [i_16] [i_20]);
                    var_43 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_20] [i_20] [i_17] [i_0] [i_16] [i_20] [(short)5])) ? (1538280432) : (var_11))))));
                }
            }
            for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                arr_82 [i_0] [(short)16] [i_21] = ((/* implicit */unsigned char) (unsigned short)54279);
                var_44 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (short)15430)))));
                /* LoopSeq 3 */
                for (unsigned int i_22 = 1; i_22 < 18; i_22 += 1) /* same iter space */
                {
                    arr_86 [i_0] [(signed char)6] [i_21] [i_22 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((arr_34 [i_22] [i_22] [i_22 + 1] [i_22 + 1] [i_22]) / (var_14)))));
                    arr_87 [i_21] [i_21] [i_21] [i_22] = ((/* implicit */short) var_10);
                    arr_88 [i_16] [i_21] [i_21] = ((/* implicit */int) var_0);
                    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (short)10873))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_22 + 1])) < (var_16))))) : ((-(var_0)))));
                }
                for (unsigned int i_23 = 1; i_23 < 18; i_23 += 1) /* same iter space */
                {
                    arr_91 [i_23] [i_21] [i_21] [i_16] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_54 [i_21] [i_16] [i_21] [i_23])))) ? (max((((/* implicit */long long int) (unsigned char)179)), (-5855273507261284144LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) var_7))))))));
                    var_46 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)175)) << (((var_13) + (1318792622)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)114)), ((unsigned char)80))))) : ((~(var_0))))) >> (((((2147483618) + (arr_71 [i_0]))) - (1754539951)))));
                    var_47 = 2147483647;
                }
                for (signed char i_24 = 1; i_24 < 21; i_24 += 4) 
                {
                    arr_94 [i_21] [i_16] = (i_21 % 2 == zero) ? (((/* implicit */unsigned int) ((unsigned long long int) (-(((((var_11) + (2147483647))) >> (((((/* implicit */int) arr_85 [i_21] [i_16] [i_21] [i_16])) - (22))))))))) : (((/* implicit */unsigned int) ((unsigned long long int) (-(((((var_11) + (2147483647))) >> (((((((/* implicit */int) arr_85 [i_21] [i_16] [i_21] [i_16])) - (22))) - (45)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_25 = 1; i_25 < 19; i_25 += 2) 
                    {
                        arr_98 [4LL] [i_16] [i_16] [i_21] [i_25] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), (max((((var_3) ^ (((/* implicit */unsigned long long int) arr_96 [i_24] [i_24] [i_24] [i_21] [i_16] [i_0])))), (((/* implicit */unsigned long long int) ((short) (_Bool)1)))))));
                        var_48 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483645)), (arr_65 [i_21] [i_16] [9] [i_0])))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3046853289U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (2914709889U)))))) << (((((/* implicit */int) (unsigned char)68)) - (39)))));
                    }
                    for (short i_26 = 2; i_26 < 20; i_26 += 4) 
                    {
                        var_49 = ((/* implicit */signed char) var_8);
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32631)) ? (min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) var_13)) ^ (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_51 = ((/* implicit */_Bool) var_0);
                    }
                    for (unsigned short i_27 = 2; i_27 < 19; i_27 += 2) 
                    {
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0] [i_16] [i_21] [i_24 - 1] [i_24 - 1] [i_27 + 3]))) : (10756772885818404043ULL)))));
                        var_53 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3041364406U)) ? (var_17) : (var_5)))) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_15)))))));
                    }
                    var_54 -= ((/* implicit */unsigned long long int) var_8);
                }
            }
            for (short i_28 = 4; i_28 < 21; i_28 += 4) 
            {
                arr_108 [i_0] [i_28] [i_28] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(132120576U))))));
                arr_109 [i_0] [i_16] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_42 [i_28 - 1] [i_28] [i_28 - 2] [i_28 - 4])))) ? ((+(((/* implicit */int) (short)12831)))) : (((((/* implicit */int) (unsigned short)32927)) / (((/* implicit */int) arr_61 [i_28 - 4] [i_28] [i_28 - 2]))))));
                var_55 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_81 [i_28 - 1] [i_28] [i_28 - 1]))) - (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */long long int) arr_65 [i_0] [i_16] [i_28] [i_16])) : (-5855273507261284133LL)))));
            }
        }
        var_56 = ((/* implicit */unsigned int) arr_45 [i_0]);
        var_57 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (-2078930002580130727LL))) : (((((/* implicit */long long int) ((((/* implicit */int) (signed char)104)) | (((/* implicit */int) (unsigned char)77))))) | (7394322524606996701LL)))));
    }
    for (int i_29 = 0; i_29 < 20; i_29 += 4) 
    {
        arr_113 [i_29] [i_29] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((unsigned char) (unsigned char)76))), (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) var_1)) / (arr_104 [i_29] [i_29] [i_29]))))));
        /* LoopNest 3 */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            for (unsigned char i_31 = 1; i_31 < 17; i_31 += 3) 
            {
                for (unsigned int i_32 = 0; i_32 < 20; i_32 += 2) 
                {
                    {
                        var_58 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-13)), (2014566651U)));
                        arr_120 [4ULL] [i_30] [i_31] [i_31] = ((/* implicit */short) var_11);
                    }
                } 
            } 
        } 
        arr_121 [i_29] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((var_17), (((/* implicit */long long int) (signed char)-101))))), (max((((/* implicit */unsigned long long int) var_16)), ((~(var_3)))))));
    }
    var_59 = var_12;
}
