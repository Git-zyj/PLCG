/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245778
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_18)))), (max((1690419634U), (((/* implicit */unsigned int) arr_0 [i_0 - 2])))))), (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_14)))), (max((((/* implicit */unsigned int) 1043639168)), (4294967276U)))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))), (max((((/* implicit */unsigned short) var_0)), (arr_0 [i_0])))))), (max((((/* implicit */long long int) min((((/* implicit */int) var_0)), (1043639168)))), (min((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL))))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_8 [i_2] = ((/* implicit */unsigned long long int) max((min((min((arr_3 [i_0] [i_0 + 1]), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) max((((/* implicit */short) var_4)), (arr_5 [i_2] [i_2] [i_2])))))), (max((min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned short) (unsigned char)30)))), (((/* implicit */unsigned short) max((arr_4 [i_1]), (((/* implicit */short) var_4)))))))));
                        arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_6)), (var_3))), (((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (var_9))))))), (min((((/* implicit */long long int) min((arr_3 [i_1] [11LL]), (((/* implicit */unsigned short) var_11))))), (max((arr_7 [i_0] [i_1] [15] [15] [i_3]), (arr_7 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_3] [i_3])))))));
                        arr_10 [i_0 - 1] [11U] [i_2] [11U] = ((/* implicit */unsigned short) max((min((min((var_7), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_4 [i_1]))))))), (((/* implicit */int) min((min((var_12), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) max((arr_6 [i_0 + 2] [i_0 + 2] [i_2] [i_2]), (((/* implicit */signed char) var_4))))))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            arr_13 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) (signed char)127)), (-1312346952)))), (min((min((((/* implicit */long long int) var_1)), (arr_7 [i_0] [i_0] [i_0] [i_3] [i_0]))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)0)), (arr_5 [i_0] [18ULL] [i_0]))))))));
                            arr_14 [23U] [23U] [23U] = ((/* implicit */signed char) max((max(((unsigned short)65535), ((unsigned short)53113))), (((/* implicit */unsigned short) min(((short)32767), ((short)(-32767 - 1)))))));
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) max(((short)-18628), ((short)-30830)))), (min((((/* implicit */int) var_10)), (var_9)))))), (max((min((((/* implicit */long long int) arr_1 [i_3])), (-1021479382563601453LL))), (((/* implicit */long long int) max(((short)32752), (((/* implicit */short) var_1)))))))));
                            arr_18 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned int) (short)18626)), (534640990U))), (min((((/* implicit */unsigned int) var_16)), (var_3))))), (min((((/* implicit */unsigned int) min((((/* implicit */short) var_10)), (var_16)))), (min((var_5), (((/* implicit */unsigned int) var_8))))))));
                            var_22 = ((/* implicit */signed char) max((min((max((13578301636133728040ULL), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1 - 1] [i_0] [14U] [i_1 - 1] [i_3] [i_5])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (arr_12 [i_2] [i_2] [i_2])))))), (min((((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_0 [i_5]))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
    {
        var_23 -= ((/* implicit */long long int) min((max((min((0ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)22605)), (arr_7 [i_6] [i_6] [i_6 - 1] [i_6] [i_6])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_10)), (arr_2 [i_6] [i_6])))), (min((((/* implicit */unsigned int) var_9)), (var_3))))))));
        var_24 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned char) arr_1 [(unsigned short)14]))))), (min((1186271603U), (4294967270U))))), (max((min((2970721087U), (((/* implicit */unsigned int) (short)5383)))), (((/* implicit */unsigned int) min((arr_4 [i_6]), (arr_17 [i_6 + 2] [i_6] [i_6] [i_6] [i_6]))))))));
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */int) (short)18636)))), (((/* implicit */int) max(((unsigned short)61847), (((/* implicit */unsigned short) (short)18636)))))))), (min((min((((/* implicit */unsigned long long int) (unsigned short)22033)), (14388015069562788267ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_15 [i_6] [i_6 + 1] [i_6 + 1] [i_6])), (var_17))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 3; i_8 < 9; i_8 += 4) 
        {
            var_26 = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned int) (short)-18171)), (var_5))), (((/* implicit */unsigned int) max((var_4), ((_Bool)1)))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) min((arr_21 [i_7] [8LL]), (arr_24 [i_7] [i_7] [i_7])))), (min((((/* implicit */unsigned short) var_4)), ((unsigned short)0))))))));
            var_27 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) 3055721585U)), (arr_12 [i_8 + 1] [i_8 + 1] [i_7]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_4)), (arr_3 [i_7] [i_8 - 3]))))))), (min((max((8257357167807408797ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((arr_1 [i_8]), (arr_6 [i_7] [i_8] [i_7] [i_7]))))))));
            var_28 |= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) min((arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [(short)16] [i_7]), (((/* implicit */int) arr_5 [i_7] [i_7] [i_8]))))), (min((((/* implicit */long long int) arr_20 [(_Bool)1] [i_8])), (-2961298108519610370LL))))), (((/* implicit */long long int) max((max((3441333603U), (((/* implicit */unsigned int) (short)32744)))), (((/* implicit */unsigned int) min((var_16), (var_16)))))))));
            arr_26 [5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (_Bool)0))))), (min((((/* implicit */int) (short)18171)), (var_7)))))), (max((min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((1043639173), (((/* implicit */int) var_16)))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((max((max((arr_11 [i_7] [i_8 + 2] [(signed char)22] [i_9]), (((/* implicit */unsigned long long int) arr_27 [i_7] [i_8 - 3])))), (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_6 [i_7] [i_7] [i_7] [i_7]))))))), (max((((/* implicit */unsigned long long int) min((var_0), (arr_17 [i_9 + 1] [i_7] [i_8 + 2] [i_7] [i_7])))), (max((((/* implicit */unsigned long long int) var_13)), (arr_11 [i_7] [i_8] [i_9 - 1] [i_9 + 1]))))))))));
                var_30 = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned int) 2147483647)), (2225153110U))), (((/* implicit */unsigned int) min((arr_0 [i_7]), (((/* implicit */unsigned short) (_Bool)0))))))), (min((((/* implicit */unsigned int) min((-2147483646), (((/* implicit */int) var_11))))), (max((4294967264U), (((/* implicit */unsigned int) var_7))))))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    var_31 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (short)-26896)), (arr_22 [i_7] [i_8 - 1])))), (min((((/* implicit */unsigned int) -1563649819)), (var_5)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_1)), ((short)-32745)))), (max((4058729004146763331ULL), (((/* implicit */unsigned long long int) var_15))))))));
                    var_32 ^= ((/* implicit */unsigned char) min((min((((/* implicit */int) max((arr_3 [i_9] [i_10 + 2]), (((/* implicit */unsigned short) var_1))))), (min((((/* implicit */int) arr_3 [i_7] [i_7])), (arr_27 [i_7] [i_8]))))), (min((max((var_7), (((/* implicit */int) (short)30830)))), (((/* implicit */int) min(((short)30829), (((/* implicit */short) (_Bool)0)))))))));
                    arr_32 [i_10] [i_7] [i_7] [(_Bool)1] [i_7] [i_10] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((max((var_0), (arr_5 [i_7] [i_7] [i_7]))), (min(((short)-23913), ((short)30829)))))), (min((min((2560763892U), (((/* implicit */unsigned int) 1641598753)))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)209)), (var_7))))))));
                    var_33 = ((/* implicit */int) min((((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_3 [i_7] [i_7])), (var_3))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) var_4)))))))), (max((min((arr_23 [i_8 - 2]), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) arr_25 [(short)7])))))))));
                }
            }
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_34 = ((/* implicit */long long int) min((min((min((arr_28 [i_11]), (((/* implicit */unsigned int) (unsigned char)188)))), (((/* implicit */unsigned int) min((arr_16 [i_7] [i_8] [i_7] [i_8] [i_7] [i_11] [i_7]), (((/* implicit */int) var_18))))))), (min((max((((/* implicit */unsigned int) var_15)), (4294967286U))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_25 [i_7])), (var_16))))))));
                arr_35 [7U] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((min((arr_23 [i_8 - 1]), (((/* implicit */long long int) (short)-7492)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_21 [i_7] [i_11])), (4294967264U))))))), (min((max((((/* implicit */unsigned long long int) arr_31 [i_7] [i_11] [(unsigned char)5] [i_7])), (7655671680554289583ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_0)), (var_6))))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_39 [i_7] [i_7] [i_12] [i_12] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_0)), (arr_23 [i_7]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_29 [i_7] [i_7] [i_8] [i_8])), (4249679008U))))))), (min((((/* implicit */unsigned long long int) max(((short)32744), (arr_20 [i_12] [i_12])))), (max((15011865647569500847ULL), (((/* implicit */unsigned long long int) 32U))))))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 7; i_14 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) max((arr_43 [(unsigned char)6] [i_8] [i_8] [i_12] [i_12] [i_12] [(unsigned char)6]), (arr_15 [i_8] [i_12] [(short)18] [i_14])))), (max((var_17), (((/* implicit */unsigned int) (unsigned short)63952)))))), (((/* implicit */unsigned int) max((max((var_16), (((/* implicit */short) arr_38 [i_7] [i_7] [i_12] [i_13])))), (max(((short)7491), (var_16))))))));
                            var_36 = ((/* implicit */unsigned short) min((max((max((((/* implicit */int) (_Bool)1)), (var_8))), (min((var_7), (((/* implicit */int) arr_33 [i_8])))))), (((/* implicit */int) min((min((var_11), (((/* implicit */short) arr_30 [i_7] [i_8] [i_12] [i_8] [(unsigned char)7] [i_14 + 3])))), (max((((/* implicit */short) var_4)), (arr_33 [i_13]))))))));
                            var_37 *= ((/* implicit */unsigned short) min((min((max((((/* implicit */unsigned long long int) arr_21 [i_7] [i_13])), (6183214651554119120ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_20 [i_13] [i_12])), (4294967286U)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_9), (((/* implicit */int) var_2))))), (max((-1285403860387310306LL), (((/* implicit */long long int) var_18)))))))));
                            arr_44 [i_7] [i_12] [i_7] [i_13] [i_14 + 3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1678874665U)), (18446744073709551615ULL)));
                        }
                    } 
                } 
            }
        }
        var_38 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((min((911962373), (((/* implicit */int) var_14)))), (((/* implicit */int) min((var_10), (((/* implicit */signed char) (_Bool)1)))))))), (min((((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (var_8)))), (max((((/* implicit */unsigned int) var_8)), (var_3)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_15 = 1; i_15 < 24; i_15 += 3) 
    {
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            {
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) min((((/* implicit */unsigned int) min(((short)-10983), ((short)7492)))), (max((max((arr_46 [i_15 - 1]), (((/* implicit */unsigned int) var_7)))), (min((((/* implicit */unsigned int) arr_47 [i_15])), (2842830325U))))))))));
                arr_49 [i_16] [i_15] [i_16] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((min((arr_45 [i_16]), (((/* implicit */unsigned short) arr_47 [i_15 - 1])))), (max((arr_45 [i_15 + 1]), ((unsigned short)18)))))), (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_47 [i_16])), (var_14)))), (min((((/* implicit */unsigned int) (_Bool)1)), (3297845629U)))))));
                arr_50 [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) 2147483645)), (9223372036854775807LL))), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)37314)))))))));
                /* LoopNest 3 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    for (int i_18 = 3; i_18 < 22; i_18 += 4) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */int) max((arr_45 [i_19]), (((/* implicit */unsigned short) (signed char)109))))), (min((((/* implicit */int) var_6)), (var_9)))))), (max((min((((/* implicit */unsigned int) var_8)), (var_17))), (min((0U), (((/* implicit */unsigned int) var_11))))))));
                                var_41 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_56 [i_15] [i_15] [i_15] [i_17 - 1] [i_18] [i_19]))))), (max((((/* implicit */int) var_11)), (arr_54 [i_15] [i_16] [i_15] [i_17] [i_15] [(signed char)0])))))), (min((min((((/* implicit */unsigned int) (unsigned char)136)), (2815298531U))), (((/* implicit */unsigned int) max((2147483630), (((/* implicit */int) (_Bool)1)))))))));
                                var_42 = ((/* implicit */int) min((max((max((((/* implicit */long long int) var_11)), (arr_51 [i_15] [i_16] [i_15]))), (((/* implicit */long long int) max(((short)6484), (((/* implicit */short) var_15))))))), (((/* implicit */long long int) min((max((-2147483646), (((/* implicit */int) (short)-737)))), (((/* implicit */int) min((arr_48 [i_16]), ((short)11720)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    for (short i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        {
                            arr_61 [i_15 + 1] [i_15 + 1] [i_15] [i_16] = ((/* implicit */short) min((max((min((arr_51 [i_15] [i_16] [i_15]), (((/* implicit */long long int) arr_60 [(signed char)5] [i_20] [i_16] [i_15])))), (min((((/* implicit */long long int) (unsigned char)45)), (803864782638978957LL))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_7)), (4294967295U))), (max((4294967295U), (((/* implicit */unsigned int) arr_45 [i_15])))))))));
                            arr_62 [i_15] [i_16] [19] [i_16] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((min((arr_46 [i_21]), (((/* implicit */unsigned int) (unsigned short)6472)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_2))))))), (max((min((((/* implicit */unsigned long long int) var_9)), (arr_57 [i_16]))), (((/* implicit */unsigned long long int) max((1953097268U), (1840302752U))))))));
                            var_43 = ((/* implicit */signed char) max((-6668304943223944904LL), (((/* implicit */long long int) (unsigned char)240))));
                            var_44 = min((min((max((arr_60 [i_20] [i_20] [i_15] [i_15]), (((/* implicit */unsigned int) arr_48 [i_16])))), (((/* implicit */unsigned int) min((1665072919), (((/* implicit */int) (_Bool)1))))))), (max((1134297608U), (0U))));
                            arr_63 [i_16] [i_20] [(short)2] [i_16] = ((/* implicit */signed char) max((min((min((8U), (((/* implicit */unsigned int) (short)-16855)))), (((/* implicit */unsigned int) max((2101252001), (((/* implicit */int) var_18))))))), (min((((/* implicit */unsigned int) max((var_11), (arr_48 [i_16])))), (max((((/* implicit */unsigned int) arr_56 [i_15] [0] [i_16] [0] [i_21] [i_21])), (arr_60 [i_15] [i_15 - 1] [i_15 - 1] [i_15 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_45 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) max(((unsigned char)54), (((/* implicit */unsigned char) var_4))))), (min((((/* implicit */unsigned long long int) -6668304943223944904LL)), (12229099755181899088ULL))))), (((/* implicit */unsigned long long int) min((min((var_17), (var_3))), (((/* implicit */unsigned int) max((var_0), (((/* implicit */short) (unsigned char)20))))))))));
    var_46 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((max((var_12), (((/* implicit */unsigned short) var_0)))), (min((var_18), (((/* implicit */unsigned short) (unsigned char)227))))))), (min((min((((/* implicit */unsigned int) var_16)), (22U))), (((/* implicit */unsigned int) min((((/* implicit */short) var_10)), (var_0))))))));
    var_47 = min((min((((/* implicit */unsigned int) min((var_10), (((/* implicit */signed char) var_4))))), (min((var_3), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) min((1665072919), (((/* implicit */int) (short)-3114))))));
}
