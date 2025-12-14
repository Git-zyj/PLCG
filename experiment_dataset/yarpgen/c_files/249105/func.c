/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249105
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((signed char) -271213726)))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((arr_9 [(unsigned char)0] [i_0 - 1] [i_1 + 3] [i_1 - 1]) ? (((unsigned long long int) var_17)) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_3)))))), (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) -5183833872698194005LL)) : (0ULL))) << (((/* implicit */int) (!((_Bool)0)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (66584576U)));
                            var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))), (arr_2 [i_0 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 3; i_6 < 13; i_6 += 1) 
    {
        for (signed char i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_6 - 3]))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6 + 1] [i_6 + 2] [i_7 + 1] [i_7 - 1]))) : (var_6)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_17))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_6 + 3] [i_7 + 1] [i_7 + 1])) ? (var_13) : (((/* implicit */int) arr_25 [i_6 - 2] [i_6 + 3] [i_7 + 2] [i_7 + 1]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_10 = 2; i_10 < 14; i_10 += 4) 
                {
                    arr_29 [i_6] [i_10] [i_10] |= ((/* implicit */unsigned int) var_14);
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_16))))), (((short) arr_34 [i_6] [i_7] [i_10] [i_11] [i_12] [i_12])))));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_20 [i_10])))) ? (((/* implicit */unsigned long long int) max((min((var_5), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */signed char) var_2)))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (0ULL))))))));
                                arr_36 [i_6] [i_6] [i_10] [i_11] = max((((unsigned int) var_3)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 507635747)) ? (((/* implicit */int) (signed char)127)) : (-1345481227)))));
                                var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_19 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) arr_5 [i_6] [i_7] [i_12])) ? (var_15) : (var_13))) : (((/* implicit */int) ((unsigned char) var_14)))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_13 [i_6] [i_7] [i_11] [i_12])) : (var_13)))) : (((long long int) var_0))))));
                            }
                        } 
                    } 
                    arr_37 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_1)) : (arr_2 [i_10 - 2])))) * (((((/* implicit */_Bool) var_1)) ? (max((var_7), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_7] [i_7 - 1] [i_10 + 2] [i_10] [i_10] [i_10])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        for (short i_14 = 2; i_14 < 14; i_14 += 3) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((var_10) ? (var_14) : (var_14)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)208)))))))));
                                var_28 -= ((/* implicit */short) var_11);
                                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_34 [i_6] [i_6] [i_7] [i_10] [i_13] [i_14])) + (2147483647))) >> (((var_17) - (1347635603U)))))) - (var_5)))) ? (((/* implicit */unsigned int) max((max((((/* implicit */int) arr_11 [i_6] [i_7] [i_6] [i_13] [i_14])), (var_15))), (((/* implicit */int) arr_16 [i_6 + 1] [i_7 + 1] [i_10 + 3] [i_13] [i_14 + 2]))))) : (max((((/* implicit */unsigned int) arr_38 [i_6] [i_7 + 1] [i_10 - 1] [i_14 + 2])), (var_3)))));
                                var_30 = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)208)))), (((/* implicit */int) var_10))));
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (arr_31 [i_6] [i_6 - 2] [i_7 + 1] [i_10 + 2] [i_14 + 2])))) ? (max((((/* implicit */long long int) var_9)), (arr_31 [i_6] [i_6 - 1] [i_7 + 2] [i_10 + 2] [i_14 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_31 [i_6] [i_6 + 1] [i_7 + 2] [i_10 + 3] [i_14 - 2]))))));
                            }
                        } 
                    } 
                    arr_42 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (unsigned char)61))) * ((~(arr_4 [i_6] [i_7] [i_10])))));
                }
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 3; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) var_9);
                            arr_47 [i_6] [i_7] [i_7] [i_15] [i_16] [i_6] = ((/* implicit */short) (-(min((((/* implicit */int) var_9)), (((var_10) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) var_9))))))));
                            var_33 += ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) var_2)), (var_3))));
                            /* LoopSeq 3 */
                            for (unsigned int i_17 = 3; i_17 < 16; i_17 += 1) 
                            {
                                var_34 += ((4611123068473966592ULL) % (((/* implicit */unsigned long long int) -1LL)));
                                var_35 = ((/* implicit */unsigned short) var_13);
                                var_36 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_45 [i_6] [i_7] [i_16])) ? (var_3) : (((/* implicit */unsigned int) arr_8 [i_6] [i_15] [i_16] [i_17]))))))), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned long long int) 3292325726U)) : (13364366371676954961ULL)))));
                                var_37 = ((/* implicit */signed char) var_3);
                            }
                            for (long long int i_18 = 3; i_18 < 15; i_18 += 1) 
                            {
                                arr_55 [i_6] [i_7] [i_15] [i_6] [i_18] = ((/* implicit */signed char) max((((5133142191430526276ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((-(((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) arr_18 [i_7 - 1] [i_18])))))));
                                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (+(((((/* implicit */_Bool) min((5411095690084495878ULL), (((/* implicit */unsigned long long int) 1861863745))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_39 [i_15] [i_16] [i_18]) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))))))));
                                arr_56 [i_6] [i_6] [i_15] [i_16] [i_18] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_53 [i_6 + 1] [i_6] [i_16 + 1] [i_18 - 3])), (((((/* implicit */_Bool) 2501928995U)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (short)-12953))))))));
                                arr_57 [i_6] [i_7] [i_6] [i_16] [i_18] = ((/* implicit */long long int) ((_Bool) ((var_5) ^ (arr_35 [i_6 + 4] [i_7 + 1] [i_16 + 1]))));
                                arr_58 [i_6] [i_6] [i_16] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_34 [i_6 - 1] [i_6] [i_7] [i_7 + 1] [i_16 + 2] [i_18 + 2])), (var_6))), (((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_6 - 1] [i_6] [i_6] [i_7 + 1] [i_16 + 1] [i_18 + 2])))))));
                            }
                            for (signed char i_19 = 0; i_19 < 17; i_19 += 3) 
                            {
                                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_6 - 1])) ? (((/* implicit */int) arr_6 [i_7 + 1] [i_19])) : (((/* implicit */int) arr_3 [i_6 - 2])))), (((/* implicit */int) var_12)))))));
                                var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (arr_27 [i_6] [i_15] [i_16] [i_19])))) : (min((var_14), (((/* implicit */long long int) arr_3 [i_15])))))) < (((/* implicit */long long int) (~(min((var_15), (((/* implicit */int) arr_28 [i_6] [i_7] [i_15] [i_16])))))))));
                            }
                            arr_61 [i_6] [i_7] [i_7] [i_15] [i_16] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((((((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_7] [i_7] [i_15] [i_16]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-96)) != (((/* implicit */int) (unsigned short)11394))))) : (((int) arr_13 [i_6] [i_7] [i_15] [i_16])))) + (17517)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) 4832479899253897627ULL)) ? (((/* implicit */long long int) min((((/* implicit */int) var_8)), (-977384731)))) : (min((((/* implicit */long long int) (short)-16760)), (-7454951821531341581LL)))));
    var_42 ^= var_9;
    /* LoopSeq 3 */
    for (short i_20 = 3; i_20 < 21; i_20 += 1) 
    {
        arr_65 [i_20] [i_20] = (!(((/* implicit */_Bool) 96793595)));
        arr_66 [i_20] = (~(min((max((((/* implicit */unsigned int) var_2)), (var_17))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_5 [i_20] [i_20] [i_20])), (var_11)))))));
        /* LoopNest 3 */
        for (unsigned int i_21 = 1; i_21 < 21; i_21 += 2) 
        {
            for (int i_22 = 1; i_22 < 18; i_22 += 4) 
            {
                for (short i_23 = 2; i_23 < 20; i_23 += 4) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((_Bool) ((unsigned int) (signed char)-28))))));
                        arr_74 [i_22] [i_21] [i_22] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) arr_68 [i_21 - 1] [i_21] [i_23 + 1]))))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) var_0))));
                        arr_75 [i_20] [i_22] [i_21] [i_22] [i_23] [i_23] = ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
        } 
        var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_20])), (var_16)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_13)))) ? (((var_14) >> (((var_14) - (6939219742781397791LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_20] [i_20] [i_20] [i_20] [i_20]))))))));
        var_45 -= ((/* implicit */short) ((((_Bool) (~(((/* implicit */int) (unsigned char)114))))) ? (((/* implicit */unsigned long long int) ((int) var_13))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (var_16) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))));
    }
    for (unsigned int i_24 = 1; i_24 < 9; i_24 += 1) 
    {
        var_46 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_14 [i_24]), (arr_14 [i_24 + 1])))) ? (((((/* implicit */int) arr_14 [i_24 + 1])) / (((/* implicit */int) arr_14 [i_24 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_24 + 1])))))));
        arr_79 [i_24] [i_24] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)32)), (744383648U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_24] [i_24] [16U] [i_24] [i_24])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_16))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (var_6)))) - ((+(((/* implicit */int) var_11)))))))));
        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) max(((-(var_14))), (((/* implicit */long long int) ((int) var_7))))))));
        arr_80 [i_24] = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_12))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_49 [i_24] [i_24] [i_24] [(_Bool)1] [i_24] [i_24]))))))), (((max((var_17), (var_17))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_24] [i_24] [i_24] [i_24] [i_24])))))))));
    }
    for (short i_25 = 1; i_25 < 19; i_25 += 1) 
    {
        arr_83 [i_25] [i_25] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_14)))) ? (var_14) : (((/* implicit */long long int) ((unsigned int) -1004741492))))), (((/* implicit */long long int) ((unsigned int) arr_4 [i_25 - 1] [i_25 - 1] [i_25 + 1])))));
        var_48 &= ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)46)), ((unsigned short)38515))))));
        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) (~(min((var_17), (((/* implicit */unsigned int) arr_63 [i_25]))))))) : (((unsigned long long int) (short)32279))));
    }
}
