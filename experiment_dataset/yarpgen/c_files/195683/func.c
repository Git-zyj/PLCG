/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195683
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)10532))) / (var_4)))) ? (((((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])) >> (((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_0] [(unsigned short)21])))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])))))))));
                    arr_9 [i_0] [(unsigned short)17] [i_2] = ((((/* implicit */_Bool) max((((72057594037927936LL) - (1886273301072770902LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 16848979413940267127ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))) ? (max((var_7), (4963231901764096410LL))) : (((/* implicit */long long int) ((unsigned int) ((long long int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_12 [(unsigned short)19] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32795)))))) ? (((/* implicit */long long int) (+(arr_2 [i_1 + 1] [i_1] [i_1])))) : (max((var_11), (4963231901764096404LL)))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) 0U)) ? (72057594037927946LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2] [i_3])) | (((/* implicit */int) arr_4 [i_1] [i_3]))))))))));
                        arr_13 [i_2] = ((/* implicit */_Bool) max((((long long int) var_6)), (((((-5405282588718692695LL) + (9223372036854775807LL))) << (((1886273301072770881LL) - (1886273301072770881LL)))))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) arr_11 [i_0] [i_1]))), (((((/* implicit */_Bool) 8696168305344341927LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4090412503U)))))) & (((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [(short)20])) : (((/* implicit */int) arr_6 [i_0] [10LL] [i_2] [(unsigned short)0])))))))));
                        var_16 = (~((-(var_7))));
                        var_17 -= ((((/* implicit */_Bool) ((signed char) arr_4 [i_1 + 3] [i_1]))) ? (min((((/* implicit */long long int) arr_4 [i_1 + 2] [i_1 + 1])), (1886273301072770881LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [5LL])))))));
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) & (0ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 3]))) : (var_7))));
                            var_19 = ((((((/* implicit */_Bool) arr_15 [i_0] [20LL] [i_2] [i_2] [i_5])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_4] [i_2] [i_1 + 1] [i_0]))))) + ((-(0ULL))));
                            arr_19 [18LL] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned int) var_9))))));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (arr_21 [7LL] [i_6] [(unsigned short)8] [i_2] [i_1 - 1] [i_0] [i_0]))))));
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12170)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (1597764659769284511ULL)))) ? (((/* implicit */int) (short)12566)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11335))) == (var_7)))))) / (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_0])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))));
                            var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12566)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)12170)))) : ((((_Bool)1) ? (16848979413940267127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
                        }
                        arr_22 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0]))))))))));
                    }
                    var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [3LL] [i_0])) || (((/* implicit */_Bool) var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0]))) || (((/* implicit */_Bool) max(((unsigned short)15), (((/* implicit */unsigned short) arr_1 [i_1]))))))))) : ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (1798344179658129072LL)))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [11LL] [i_7]))) : (var_11))), (((/* implicit */long long int) arr_18 [i_0] [i_1 + 1] [i_7])))));
                    arr_28 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (1597764659769284488ULL)))) ? (((/* implicit */int) max((((unsigned short) arr_4 [i_1] [11LL])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)-1)))))))) : (((/* implicit */int) (unsigned short)11335))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)15)) > (((/* implicit */int) ((short) -529972399230027285LL))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 + 3] [i_1 - 1])) ? (((/* implicit */int) arr_14 [i_1 - 1] [i_1 + 3])) : (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 2])))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) arr_23 [i_0] [i_1 + 2] [i_8] [i_9]))) / (-888399072513143237LL)));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_1 + 3] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-21190)) : (((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) & (arr_26 [i_0] [i_1 + 3])))));
                        arr_36 [5LL] [i_1] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)4859))))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned short)6))));
                    }
                    var_27 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 3; i_10 < 21; i_10 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 2] [i_10 - 3]))));
                        arr_39 [i_0] [i_1] [i_8] [(short)21] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_21 [i_10] [i_8] [i_1] [i_1] [i_1] [(unsigned short)7] [(unsigned short)7])) : (((/* implicit */int) var_6)))) * (((/* implicit */int) ((3836928980433664980ULL) < (arr_11 [i_0] [i_1])))))));
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_29 [i_11] [i_10 - 3] [i_8] [i_1])))));
                            arr_43 [9LL] [(unsigned short)15] [i_1] [i_1] [i_0] = ((unsigned short) ((((/* implicit */long long int) ((unsigned int) -72057594037927947LL))) - (-1LL)));
                            arr_44 [(unsigned short)0] [(_Bool)1] [i_8] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)53365)) + (((((/* implicit */int) arr_37 [i_0] [i_0] [15LL] [i_10 - 2])) + (((/* implicit */int) (short)7742)))))) + (((/* implicit */int) ((short) (short)-32325)))));
                            arr_45 [i_0] [i_0] [i_1 - 1] [i_0] [i_10 - 2] [i_0] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_30 [(signed char)6] [(short)14] [9LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [(short)10] [i_10 - 3] [i_11])))) : (((/* implicit */int) (signed char)-8)))) + ((((-(((/* implicit */int) var_13)))) / ((-(((/* implicit */int) (unsigned short)53365))))))));
                        }
                        for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)53358))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10 - 2] [i_1 + 2] [i_8] [i_8] [i_12] [i_10 - 3]))) : (var_7)))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_14 [i_8] [i_12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_41 [i_0] [i_1 + 2] [i_8] [i_10 - 2] [i_0]))))))) : (((((unsigned int) arr_38 [(short)16] [i_8])) & (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [2LL] [2LL]), (arr_30 [i_0] [i_0] [20LL]))))))))))));
                            var_32 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_29 [i_1] [i_8] [i_8] [i_10 + 1])))));
                            arr_50 [i_8] [(unsigned short)11] [i_8] [i_8] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_18 [i_1] [i_8] [i_12]);
                        }
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_1 + 2])) ? (((/* implicit */int) arr_48 [i_1 - 1])) : (((/* implicit */int) arr_48 [i_1 + 2]))))), (((((/* implicit */_Bool) arr_48 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))))));
                    }
                    for (long long int i_13 = 3; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_5))) << (((((((/* implicit */int) var_9)) & (((/* implicit */int) var_6)))) - (49368)))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_13 - 3] [i_13])) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)60684)))))));
                            var_36 = ((((/* implicit */_Bool) arr_32 [i_14] [i_13] [i_8] [(signed char)9])) ? (arr_32 [i_0] [i_1] [i_13] [i_14]) : (arr_32 [(short)3] [i_0] [i_8] [i_13]));
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_1 + 2] [i_1 + 2] [i_8] [i_13 - 3] [4U]))) * (10062090600668044336ULL))))));
                            var_38 = ((/* implicit */long long int) arr_41 [i_0] [11LL] [13LL] [i_13] [i_15]);
                        }
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                        {
                            arr_63 [i_0] [14U] [i_0] [i_13] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_8]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54287))) * (arr_56 [i_16 + 1] [i_13] [i_0] [i_1] [i_0]))))));
                            arr_64 [(_Bool)1] [i_1] [16LL] [i_8] [7U] [i_13] = ((((((/* implicit */_Bool) (unsigned short)10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (arr_11 [i_0] [i_1 - 1]) : (((/* implicit */unsigned long long int) 300429164U))))))) ? (((long long int) (!(((/* implicit */_Bool) (unsigned short)11249))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)96)) ^ (((/* implicit */int) (unsigned short)14449))))));
                            var_39 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [(short)16]))) : (arr_25 [i_16 + 1] [i_13 - 2] [i_1] [i_0])))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2261851723U))))))), (((/* implicit */int) min((arr_4 [i_0] [i_1 + 1]), (arr_4 [i_0] [i_8]))))));
                            arr_65 [i_13] [i_1 + 3] [i_8] [i_13] [9U] = ((/* implicit */short) (!(((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-89)) <= (((/* implicit */int) arr_46 [i_0] [13ULL] [i_8]))))))))));
                        }
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */short) ((unsigned short) arr_29 [i_0] [i_1 + 1] [11LL] [(short)16]));
                            var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned short) var_10))))) ? (((((/* implicit */_Bool) arr_46 [i_1] [(short)15] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_13] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_60 [i_17]))))) > (((/* implicit */long long int) ((/* implicit */int) ((short) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_13]))))))))));
                        }
                        var_42 = ((/* implicit */unsigned long long int) (unsigned short)65510);
                    }
                    for (long long int i_18 = 3; i_18 < 21; i_18 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_59 [i_0] [19LL] [i_0] [i_8] [7LL])))) ? (((/* implicit */int) arr_38 [i_1 + 1] [i_1])) : ((~(((/* implicit */int) var_2)))))));
                        arr_73 [i_1] [i_1] [i_18] = ((/* implicit */unsigned short) ((unsigned int) var_1));
                        var_44 ^= ((/* implicit */long long int) 380281784U);
                        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)14449)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12172))) : (arr_42 [i_0] [i_1] [i_1] [i_0] [i_0]))))) ? (arr_25 [(signed char)3] [i_1 + 3] [21U] [i_1]) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29086))) | (var_12))))))))));
                        var_46 = ((/* implicit */unsigned short) (((~(arr_26 [i_1 - 1] [i_8]))) / (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) arr_51 [i_18 - 3])))))));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54286)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_1] [i_19]))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? ((-(max((((/* implicit */unsigned int) arr_1 [i_19])), (arr_2 [i_0] [7U] [i_19]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) > (max((var_7), (((/* implicit */long long int) var_14))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        for (long long int i_21 = 0; i_21 < 22; i_21 += 1) 
                        {
                            {
                                var_48 = ((unsigned long long int) ((((/* implicit */_Bool) 4294967286U)) ? (-6135727415866712404LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13)))));
                                var_49 += ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (signed char)114)))))))), ((((-(var_5))) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) -1249758255658921543LL))))))));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) var_3))));
                    arr_81 [(short)1] [i_19] = ((/* implicit */long long int) ((short) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_14)))) + (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 3])))));
                }
                arr_82 [i_1 + 3] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_76 [i_0] [i_1 + 2] [i_0] [i_0] [i_1] [i_0])) <= (((/* implicit */int) (unsigned short)5230))))), (arr_17 [i_0] [15ULL] [i_1 + 1]))))));
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)126)) & (((/* implicit */int) var_8)))) >> (((var_12) - (3435668155U)))))) ? (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (-8915693424306632456LL)))) : (var_0)));
    var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    var_53 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
}
