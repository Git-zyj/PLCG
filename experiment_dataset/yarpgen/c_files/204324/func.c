/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204324
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    var_11 |= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_1 - 1])), (9223372028264841216ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (var_2))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) max((min((9223372028264841216ULL), (((/* implicit */unsigned long long int) (signed char)-93)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) max(((signed char)93), ((signed char)2)))), ((short)30143))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_3] = min((max((min((var_2), (((/* implicit */int) var_9)))), (((/* implicit */int) var_7)))), (((/* implicit */int) min(((unsigned char)144), ((unsigned char)67)))));
                            arr_16 [i_0] [i_1] [i_1 - 2] [i_3] [i_3] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_3))))), (min((arr_14 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_4]), (arr_14 [i_2 - 2] [i_2 - 1] [i_3] [i_2 - 1] [i_3])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2 - 1] [i_0] [i_5] |= ((/* implicit */long long int) max((((/* implicit */int) max((arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_1]), (((/* implicit */signed char) var_4))))), (max((((/* implicit */int) var_1)), (arr_14 [i_5 + 1] [i_5] [i_2 - 2] [i_1 + 1] [i_1])))));
                            var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_9 [i_1 + 3]), (arr_9 [i_1 + 1])))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_4 [i_2])), (arr_8 [i_0] [i_0] [i_0] [i_1])))), (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0])), (9223372045444710399ULL)))))));
                        }
                    }
                    for (unsigned int i_6 = 3; i_6 < 6; i_6 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)0)), (9223372036854775802LL)));
                        arr_22 [i_6] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) (signed char)124)), (var_9))), (((/* implicit */unsigned short) min(((signed char)91), ((signed char)-93))))));
                        var_14 = max((min((var_2), (((/* implicit */int) (short)4094)))), (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2001))), (((/* implicit */unsigned short) max((var_6), (arr_8 [i_6] [i_2 + 1] [i_1 + 3] [i_0]))))))));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) var_3))))), (max((((/* implicit */unsigned long long int) arr_10 [i_6 - 2] [i_1] [i_6 - 3] [i_6])), (9223372045444710399ULL))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 2) 
                        {
                            arr_27 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_18 [i_1] [i_8 + 2] [i_2] [i_0] [i_2] [i_2 + 1] [i_1]), (((/* implicit */signed char) var_8))))), (min((0ULL), (((/* implicit */unsigned long long int) var_6))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((3020796238U), (var_10)))), (min((9223372028264841216ULL), (((/* implicit */unsigned long long int) var_1)))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((min((((/* implicit */long long int) (unsigned char)255)), (min((9223372036854775803LL), (((/* implicit */long long int) arr_2 [i_1 - 1] [i_7] [i_1 - 1])))))), (min((arr_24 [i_1 - 2] [i_1 + 2] [i_2 + 1] [i_1 - 2]), (arr_24 [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_2 + 1]))))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned char) var_8)))), (max((arr_30 [i_1 - 1]), (((/* implicit */unsigned char) (signed char)92)))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) max((arr_13 [i_1]), (arr_32 [i_0])))), (3041027534417441251ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_21 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_10])), ((signed char)-93))))));
                            arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((min((arr_20 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_1 + 3]), (arr_20 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_1 + 1]))), (max((((/* implicit */short) var_0)), (arr_20 [i_2 - 1] [i_2 - 2] [i_1 + 2] [i_1 + 2])))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_20 = min((((/* implicit */int) max((arr_34 [i_0] [i_1 + 2] [i_2 - 2] [i_0]), (((/* implicit */short) (signed char)-95))))), (min((((/* implicit */int) (signed char)122)), (268434432))));
                            arr_39 [i_11] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) max((max((arr_30 [i_1 + 1]), (arr_30 [i_1 + 3]))), (min((((/* implicit */unsigned char) (signed char)79)), (var_7)))));
                        }
                        var_21 -= ((/* implicit */_Bool) max((((/* implicit */unsigned short) min((((/* implicit */short) var_8)), (arr_20 [i_7] [i_2 - 1] [i_0] [i_0])))), (max((((/* implicit */unsigned short) max((arr_17 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]), (var_7)))), (var_9)))));
                        var_22 += ((/* implicit */int) min((((/* implicit */short) min((var_5), (((/* implicit */unsigned char) var_3))))), (min((arr_37 [i_0] [i_1] [i_2 + 1] [i_1] [i_2 - 1]), (((/* implicit */short) arr_28 [i_0] [i_0] [i_0] [i_0] [i_2 + 1] [i_0] [i_0]))))));
                        arr_40 [i_7] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_5))))), (min((((/* implicit */long long int) 1274171058U)), (268435455LL)))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_23 = ((/* implicit */short) 36028797018963967LL);
                    var_24 = ((/* implicit */unsigned long long int) 268434423);
                    var_25 = ((/* implicit */unsigned char) 16574545133445851213ULL);
                }
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
                {
                    arr_47 [i_13] [i_0] [i_13] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_48 [i_13] = ((/* implicit */_Bool) (unsigned char)185);
                }
                for (long long int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
                {
                    arr_51 [i_0] [i_0] [i_14] = ((/* implicit */long long int) min((min((3020796225U), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((-1592906903), (-268434423))))));
                    var_26 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) (unsigned char)22))))), (max((arr_43 [i_0] [i_1 + 2] [i_14] [i_1 + 2]), (((/* implicit */unsigned long long int) (unsigned short)29496)))))), (((/* implicit */unsigned long long int) max((min((4294967294U), (((/* implicit */unsigned int) (short)12871)))), (((/* implicit */unsigned int) var_0)))))));
                }
                var_27 = max((((/* implicit */unsigned long long int) max((8896926529594102664LL), (((/* implicit */long long int) var_3))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), (arr_34 [i_0] [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) arr_14 [i_1 + 3] [i_1 + 3] [i_0] [i_0] [i_0])), (11771189339602977341ULL))))));
            }
        } 
    } 
    var_28 = ((/* implicit */int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) (unsigned char)14);
        arr_54 [i_15] = ((/* implicit */long long int) (unsigned char)129);
    }
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) min((min((arr_53 [i_16] [i_16]), (((/* implicit */unsigned long long int) arr_52 [i_16] [i_16])))), (((/* implicit */unsigned long long int) min((max((arr_56 [i_16]), (arr_56 [i_16]))), (((/* implicit */unsigned char) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            for (unsigned int i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                {
                    arr_64 [i_16] [i_16] [i_16] [i_16] &= ((/* implicit */signed char) max((max((9223372028264841224ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) max(((signed char)-1), (((/* implicit */signed char) var_4)))))));
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_31 |= ((/* implicit */unsigned char) max((max((arr_66 [i_19] [i_16] [i_18] [i_17] [i_16] [i_19]), (((/* implicit */unsigned int) (unsigned char)108)))), (max((((/* implicit */unsigned int) var_3)), (arr_66 [i_16] [i_17] [i_16] [i_19] [i_20] [i_20])))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (min((min((18446744073709551588ULL), (((/* implicit */unsigned long long int) (signed char)20)))), (min((((/* implicit */unsigned long long int) 268434423)), (min((6675554734106574274ULL), (((/* implicit */unsigned long long int) (unsigned char)116))))))))));
                                arr_69 [i_18] [i_17] [i_17] [i_17] [i_18] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_9)), (673534633349882390ULL))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) (unsigned char)12)))))));
                                var_33 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) -4LL)), (11771189339602977341ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)130)), ((-9223372036854775807LL - 1LL)))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((-268435455LL), (((/* implicit */long long int) 927618163U))))), (min((max((6675554734106574272ULL), (((/* implicit */unsigned long long int) arr_58 [i_16] [i_17] [i_16])))), (max((70368744177663ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) 
                        {
                            {
                                arr_75 [i_16] [i_18] [i_18] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_55 [i_16]), (arr_55 [i_22])))), (min((((/* implicit */long long int) arr_58 [i_22] [i_21] [i_18])), (-268435447LL)))));
                                arr_76 [i_16] [i_17] [i_18] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_7)), (max((arr_66 [i_18] [i_21] [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned int) arr_67 [i_16])))))), (((/* implicit */unsigned int) min((arr_70 [i_16] [i_18] [i_18] [i_21] [i_22]), (((/* implicit */int) var_0)))))));
                                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_67 [i_16])), (max((673534633349882390ULL), (((/* implicit */unsigned long long int) arr_63 [i_21] [i_17] [i_17] [i_21])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), (min((var_0), (var_6)))))))))));
                                arr_77 [i_16] [i_17] [i_16] [i_18] [i_17] [i_17] [i_22] |= ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)27573)))), (max((arr_52 [i_21] [i_18]), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)122)))))))));
                                var_36 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_70 [i_16] [i_18] [i_18] [i_18] [i_21])), (673534633349882386ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_4)), (var_1))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) var_4))))), (max((((/* implicit */unsigned int) var_2)), (var_10)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 19; i_23 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_24 = 0; i_24 < 19; i_24 += 3) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_26 = 0; i_26 < 19; i_26 += 4) 
                    {
                        arr_88 [i_26] [i_24] [i_26] [i_26] |= ((/* implicit */short) 9223372036854775807LL);
                        var_38 = ((/* implicit */long long int) (signed char)-80);
                        arr_89 [i_23] [i_23] = (short)-11798;
                        var_39 = ((/* implicit */short) (unsigned char)255);
                    }
                    for (int i_27 = 0; i_27 < 19; i_27 += 4) 
                    {
                        var_40 = ((/* implicit */_Bool) 18446744073709551615ULL);
                        var_41 = ((/* implicit */unsigned char) 4984328256873587384LL);
                        var_42 = ((/* implicit */signed char) 9075599367440268076LL);
                        var_43 = (short)-6897;
                    }
                    arr_92 [16U] [16U] [16U] [i_23] |= ((/* implicit */unsigned char) 43829721499282667LL);
                    var_44 = ((/* implicit */unsigned char) max((var_44), ((unsigned char)70)));
                    /* LoopSeq 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */_Bool) 3684200670U);
                        arr_95 [i_23] [i_25] [i_24] [i_23] = ((/* implicit */signed char) (unsigned char)111);
                        var_46 |= ((/* implicit */short) (_Bool)1);
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */long long int) (unsigned char)139);
                        arr_99 [i_29] [i_23] [i_23] [i_23] = 7818154720184222171LL;
                        var_48 = ((/* implicit */unsigned long long int) (short)32767);
                    }
                }
            } 
        } 
        var_49 = ((/* implicit */long long int) 294869978);
    }
}
