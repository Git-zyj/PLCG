/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223932
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_0 [i_0])), (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_3 [i_2 + 2])))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 1] [i_1])) / (11560446075474193722ULL)))) ? ((+(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [(short)2] [i_2]);
                }
            } 
        } 
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_0] [i_0]) >> (((arr_6 [i_0] [i_0] [i_0] [i_0]) - (1722142177U)))))) : (((((/* implicit */_Bool) 11560446075474193722ULL)) ? (((/* implicit */long long int) var_6)) : (arr_4 [i_0] [i_0])))));
        arr_9 [i_0] [i_0] = ((/* implicit */int) ((max((max((6886297998235357893ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)4)), (0LL)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)235))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), ((-(arr_17 [i_4] [i_3 + 1] [i_3])))));
                    var_18 -= ((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3])) ? (arr_10 [i_3 - 1] [i_3]) : (arr_10 [i_3 - 2] [i_3 - 2]));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_19 = arr_19 [i_3] [i_6];
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((long long int) 1LL));
                            var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) 6932259219031738786ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1)))));
                            arr_26 [i_6] [i_8] [i_9] = ((/* implicit */int) (-(arr_16 [i_9 + 2])));
                            arr_27 [i_6] [i_7] [i_8] [i_9 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_9 + 2])) ? (arr_13 [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3 - 3])))));
                        }
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */int) ((unsigned int) arr_20 [(unsigned char)18]));
    }
    for (int i_10 = 1; i_10 < 19; i_10 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
        {
            arr_35 [i_10] = ((/* implicit */int) (-(var_10)));
            /* LoopSeq 2 */
            for (unsigned char i_12 = 3; i_12 < 19; i_12 += 4) 
            {
                arr_38 [i_12] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 133955584)) ? (arr_30 [i_12 + 1]) : (arr_30 [i_12 + 3]))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (max((arr_6 [i_10] [i_11] [i_11] [i_12]), (((/* implicit */unsigned int) var_13)))) : (((arr_6 [i_10 + 1] [i_11] [i_12 - 1] [i_12]) % (arr_6 [i_10] [i_11] [i_11] [i_12])))));
            }
            for (int i_13 = 3; i_13 < 20; i_13 += 4) 
            {
                var_24 *= ((/* implicit */unsigned char) var_10);
                arr_41 [i_10] [i_11] [i_13] [i_13] &= ((/* implicit */int) min((arr_15 [i_10] [i_11] [i_13]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 444119282)) ? (((/* implicit */int) arr_18 [i_10 - 1])) : (-395990624)))))))));
                var_25 |= ((/* implicit */int) arr_39 [i_13]);
                var_26 -= ((/* implicit */int) max((var_1), (((/* implicit */unsigned long long int) max((arr_24 [i_13] [i_13] [i_10 + 1] [i_11] [(unsigned char)18] [i_11]), (((/* implicit */long long int) (-(((/* implicit */int) (short)20666))))))))));
            }
            arr_42 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 395990651)) ? (((/* implicit */int) ((unsigned char) arr_11 [i_10 - 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_10 - 1])) >= (((/* implicit */int) arr_39 [i_10 + 3])))))));
            var_27 |= ((unsigned long long int) ((((/* implicit */_Bool) 1631614236U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) : (12734551426881986021ULL)));
        }
        for (short i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_15 = 2; i_15 < 19; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    {
                        arr_51 [i_10] [i_14] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_44 [i_10 + 3] [i_14])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (5712192646827565594ULL) : (((/* implicit */unsigned long long int) arr_4 [i_14] [i_16]))))))) && (((/* implicit */_Bool) (short)-11006))));
                        arr_52 [i_10 + 3] [i_14] [i_16] [2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ ((~(var_4)))))) && (((/* implicit */_Bool) (~(-4626451852643378312LL))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) arr_22 [i_10] [i_10 + 3] [i_14] [i_14] [i_14]))) == (((((/* implicit */_Bool) var_8)) ? (arr_22 [14] [i_10 + 1] [i_14] [i_14] [i_14]) : (arr_22 [i_10] [i_10 + 2] [i_14] [i_10] [i_10 + 2]))))))));
        }
        for (short i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                arr_59 [i_18] [i_17] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((3532969503614514183LL), (arr_16 [i_17])))))) ? (min((557926879U), (((/* implicit */unsigned int) -63501954)))) : (((unsigned int) var_0))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    for (int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_32 [i_10])), (10LL)))) | (0ULL))))));
                            arr_64 [i_10] [i_17] [i_10] [i_18] [i_18] [i_10] = (~(arr_13 [i_19]));
                        }
                    } 
                } 
            }
            for (int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                arr_67 [i_10 + 3] [i_10] [i_17] [i_21] = ((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) (~(arr_25 [i_10])))), (((((/* implicit */_Bool) arr_18 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) : (0LL))))));
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    for (unsigned char i_23 = 0; i_23 < 22; i_23 += 4) 
                    {
                        {
                            arr_74 [i_10] [(unsigned char)7] [i_21] [i_22] [i_22] [i_23] = ((/* implicit */short) (-(((((((long long int) var_0)) + (9223372036854775807LL))) >> ((((+(var_10))) - (3041077885434406859ULL)))))));
                            var_30 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_20 [i_21]))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) max((var_31), (-730914702)));
            }
            for (unsigned char i_24 = 4; i_24 < 19; i_24 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_6))));
                arr_77 [i_10] [i_17] [i_17] [i_24] = ((/* implicit */unsigned int) var_1);
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_45 [i_24] [i_10 - 1] [5ULL])) ? (552252900U) : (arr_45 [i_24] [i_10 + 2] [i_10]))))))));
            }
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_65 [i_10 + 3]), (arr_65 [i_10 + 1])))) ? (((((/* implicit */_Bool) 16LL)) ? (((/* implicit */unsigned long long int) arr_3 [i_10 - 1])) : (10329767769314987714ULL))) : (((/* implicit */unsigned long long int) (~(arr_25 [i_10 + 2])))))))));
        }
        /* vectorizable */
        for (int i_25 = 1; i_25 < 19; i_25 += 4) 
        {
            arr_80 [i_25] = var_10;
            arr_81 [i_10] [i_10] [i_25] = ((/* implicit */int) arr_7 [2] [2]);
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 22; i_26 += 3) 
            {
                for (short i_27 = 1; i_27 < 20; i_27 += 3) 
                {
                    {
                        arr_88 [i_27] [i_27] = ((/* implicit */long long int) (~(((/* implicit */int) arr_72 [i_26] [i_10 + 2] [i_26] [i_27] [i_27]))));
                        var_35 = ((/* implicit */long long int) (~(var_11)));
                        var_36 = ((((/* implicit */_Bool) -4521373674192808141LL)) ? (arr_43 [i_25 + 3] [i_25] [i_10]) : (arr_54 [i_10 + 3]));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned long long int i_28 = 4; i_28 < 19; i_28 += 4) 
        {
            for (unsigned char i_29 = 0; i_29 < 22; i_29 += 2) 
            {
                for (unsigned int i_30 = 0; i_30 < 22; i_30 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) arr_14 [i_29] [i_30]);
                        var_38 &= ((/* implicit */unsigned int) var_4);
                        arr_96 [i_10] [i_10 + 2] [i_28] [i_29] [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_58 [i_10 + 2])))))) : (min((8LL), (((/* implicit */long long int) -730914702))))));
                        var_39 *= ((/* implicit */int) ((((((/* implicit */_Bool) -4LL)) ? (0ULL) : (8116976304394563902ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((8116976304394563902ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_11 [i_30])))), (((/* implicit */int) ((short) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */long long int) arr_86 [i_29] [i_29] [i_29])) < (9LL))))))) : (((unsigned int) 0LL))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_31 = 0; i_31 < 22; i_31 += 3) 
        {
            for (long long int i_32 = 1; i_32 < 21; i_32 += 3) 
            {
                {
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) -9223372036854775788LL))));
                    /* LoopSeq 1 */
                    for (long long int i_33 = 0; i_33 < 22; i_33 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_34 = 0; i_34 < 22; i_34 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_85 [i_32 - 1] [i_32 - 1] [i_34] [i_34] [i_34] [i_34])), (4294967272U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_85 [i_31] [i_32 + 1] [i_32] [i_33] [(unsigned char)2] [i_33]), (arr_85 [i_32] [i_32 - 1] [i_33] [i_33] [i_33] [i_34]))))) : (3232416034U)));
                            arr_108 [i_32] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) 552252908U)) ? (((/* implicit */long long int) arr_37 [i_10] [i_10] [i_10])) : (min((((/* implicit */long long int) (unsigned char)64)), (((-1LL) & (((/* implicit */long long int) 3299691346U))))))));
                            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 3742714396U)) : (-4521373674192808141LL)))) ? (min((arr_73 [i_32 - 1] [i_32] [i_32 - 1] [i_32 + 1] [i_32 - 1]), (arr_86 [i_34] [i_32] [i_34]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_106 [i_31] [i_33])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_13))))))))));
                        }
                        for (short i_35 = 1; i_35 < 20; i_35 += 1) 
                        {
                            arr_112 [13U] [i_31] [13U] [i_33] [i_31] = ((/* implicit */unsigned int) -730914671);
                            arr_113 [i_10 + 2] [i_31] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-730914702) / (var_4)))) ? (arr_109 [i_31] [i_35] [i_35 + 2] [i_31] [i_31]) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [(unsigned char)4] [i_31] [i_32 - 1])) : (arr_3 [i_31])))))), (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -125057438)) : (0LL))))));
                            arr_114 [i_31] [2U] [i_31] [i_32 - 1] [i_33] [i_33] [i_35] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)31718))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_32])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31703))) : (1505701706U)))) * (0LL))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_32])) ? (((/* implicit */int) arr_72 [i_10 + 1] [i_10 + 1] [i_32 + 1] [i_33] [i_10 + 1])) : (((/* implicit */int) arr_72 [i_10] [i_31] [i_10] [i_10] [i_35])))) / (((2147483647) / (arr_76 [i_10 - 1] [i_31] [i_32]))))))));
                        }
                        /* vectorizable */
                        for (short i_36 = 0; i_36 < 22; i_36 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned int) ((int) -17));
                            var_45 = ((/* implicit */int) min((var_45), (-516429267)));
                            var_46 = (~(arr_21 [i_36] [i_32 + 1] [i_10]));
                            var_47 = ((/* implicit */short) ((((unsigned int) var_11)) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_58 [i_36])))))));
                        }
                        arr_119 [i_10] [i_10] [i_31] [i_31] [i_32] [i_33] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) % ((~(((/* implicit */int) arr_23 [i_10 - 1])))));
                        var_48 &= ((/* implicit */int) arr_82 [i_10 + 2] [i_10 + 2]);
                        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 125057437)), (((((/* implicit */_Bool) -2147483628)) ? (234881024U) : (((/* implicit */unsigned int) 2147483627))))))) ? (((((/* implicit */_Bool) 627800120)) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0LL)))))) : (((/* implicit */unsigned long long int) -10LL))));
                    }
                    var_50 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_10]))));
                    arr_120 [i_10] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_10 - 1])) ? (arr_25 [i_32 - 1]) : (((((/* implicit */_Bool) var_13)) ? (arr_25 [i_32 - 1]) : (756000483U)))));
                }
            } 
        } 
    }
    var_51 *= ((/* implicit */unsigned long long int) 4294967295U);
    var_52 = ((/* implicit */long long int) -125057463);
    var_53 = ((/* implicit */unsigned char) var_7);
}
