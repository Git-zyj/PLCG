/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214962
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 *= ((/* implicit */short) min((411985340150728468ULL), (((/* implicit */unsigned long long int) (~(181145947407080581LL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1 + 1] [i_2]);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) var_6)))));
                        arr_14 [i_3] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        arr_15 [i_0] |= ((/* implicit */signed char) ((_Bool) var_6));
                        var_21 = ((/* implicit */_Bool) (signed char)-43);
                    }
                    arr_16 [i_0] [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_2 - 1] [(unsigned char)0] [i_3])) == (var_14)));
                    var_22 += (-(((8970355089302712548ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))));
                    var_23 = ((/* implicit */short) (unsigned char)16);
                }
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1])) : (var_14));
                    arr_20 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_2 + 1] [i_1] [i_5 + 1]))));
                    arr_21 [i_0] [i_2] = ((/* implicit */int) (_Bool)0);
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 3; i_6 < 9; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((-7387653535966471278LL) <= (((/* implicit */long long int) 1649556663)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40550))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_2] [i_5] [i_0] [i_6])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)108))))));
                        arr_24 [6ULL] [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */signed char) (-(-430284293)));
                        var_26 = ((/* implicit */int) max((var_26), ((+(((/* implicit */int) (unsigned char)193))))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_1] [i_2 + 1] [i_0] [i_7 - 1] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_5] [i_0])) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        arr_28 [i_7] [i_5] [i_2] [i_2] [(short)7] [9ULL] = arr_13 [i_0] [i_0] [7ULL] [7ULL] [i_0];
                    }
                    var_27 += ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_5] [i_2 - 1] [i_1 + 1] [i_0])) % (((/* implicit */int) (signed char)-92))));
                }
                var_28 = ((/* implicit */unsigned char) var_4);
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) var_1);
                            var_30 |= ((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_9 - 1]);
                            arr_36 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2116395879)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (_Bool)1))));
                            var_31 += ((int) ((_Bool) arr_17 [i_9 - 1] [i_2] [i_1] [i_0]));
                        }
                    } 
                } 
                arr_37 [i_2] [i_1] = ((/* implicit */short) ((signed char) arr_32 [i_1 - 1]));
                arr_38 [i_0] [i_1] [i_2] &= ((/* implicit */signed char) ((unsigned int) arr_4 [i_1] [i_2]));
            }
            for (unsigned char i_10 = 3; i_10 < 9; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    arr_45 [i_11] [i_10] [i_1 + 1] [i_0] [i_0] = ((/* implicit */signed char) (-(arr_19 [i_1 - 1] [i_10 + 1])));
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) 18446744073709551615ULL))));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3324814929U)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_7) : (((/* implicit */int) (signed char)108)))) : (((/* implicit */int) ((signed char) var_8))))))));
                }
                arr_46 [i_0] [i_1] [2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) (signed char)108)) ? (-3402957354945447748LL) : (((/* implicit */long long int) arr_34 [i_10] [i_10] [i_1] [i_0] [i_0]))))));
            }
            for (signed char i_12 = 1; i_12 < 8; i_12 += 2) 
            {
                var_34 += ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (4671068586210391440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (signed char)-92))))) : (((/* implicit */int) arr_9 [i_0] [4ULL] [i_0] [i_12]))));
                /* LoopSeq 4 */
                for (long long int i_13 = 1; i_13 < 8; i_13 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [(_Bool)1] [i_0] [8U]))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_58 [i_0] [9] [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-32752))))));
                        var_36 = ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_12 + 2] [i_13] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13791))));
                        var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_12] [i_12] [i_12 + 2])) ? (((/* implicit */int) arr_53 [i_1 - 1] [i_1 - 1] [(unsigned short)3] [i_12 + 1])) : (((/* implicit */int) (signed char)-49))));
                        var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 342386641U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_32 [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_0] [i_0]))) : (arr_26 [i_13 + 2] [i_0])));
                    }
                    arr_59 [i_12] [i_12] = ((/* implicit */unsigned int) (-(arr_51 [i_13] [i_12] [6] [i_0] [i_1 + 1] [i_0])));
                }
                for (unsigned char i_15 = 3; i_15 < 9; i_15 += 3) 
                {
                    var_39 |= ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    var_40 = ((/* implicit */short) ((signed char) (short)-128));
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) var_3))));
                }
                for (unsigned int i_16 = 1; i_16 < 9; i_16 += 1) 
                {
                    arr_65 [i_0] [i_0] [i_12] [i_16] [i_12] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_1] [i_16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))))));
                    arr_66 [i_0] [(short)0] [i_0] [i_12] [0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)1861)) : (((/* implicit */int) (short)-9906))));
                }
                for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((arr_5 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))))));
                    arr_69 [i_0] [i_12] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (signed char)108)) : (1313550243)));
                }
            }
            for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_43 += ((/* implicit */unsigned char) ((signed char) 3962063827U));
                arr_74 [i_0] [i_0] = ((/* implicit */short) (-(8970355089302712548ULL)));
                var_44 = ((/* implicit */int) ((unsigned short) -3963045502827470124LL));
            }
            arr_75 [i_0] [i_0] = (signed char)39;
            arr_76 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]);
        }
    }
    for (short i_19 = 2; i_19 < 10; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_20 = 3; i_20 < 9; i_20 += 3) 
        {
            for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                {
                    var_45 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_77 [i_21])), (8970355089302712548ULL)))))));
                    arr_84 [i_19] [i_20] [i_19 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_80 [i_20])) / (arr_83 [i_20 - 1] [i_21])))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (max((((/* implicit */long long int) var_3)), (-1449082820889840347LL)))))) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (1699786998420235893ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)102)), ((short)31897)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 3; i_22 < 10; i_22 += 4) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 8; i_23 += 1) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_79 [i_20] [i_20])) : (((/* implicit */int) arr_77 [i_20])))))))))));
                                arr_90 [(_Bool)1] [i_20] [i_20] [i_22] = ((/* implicit */unsigned char) 9151314442816847872ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_91 [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 12269092804942340103ULL)) ? (((/* implicit */unsigned long long int) 268419072)) : (arr_87 [i_19] [i_19 - 1] [i_19] [i_19] [i_19] [i_19] [i_19]))))))));
    }
    /* vectorizable */
    for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) 
    {
        arr_95 [i_24] = 4575398553421044739ULL;
        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 134217472))) ? (((/* implicit */int) arr_93 [i_24])) : (arr_92 [i_24] [i_24]))))));
        /* LoopNest 2 */
        for (int i_25 = 2; i_25 < 11; i_25 += 3) 
        {
            for (unsigned int i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        for (int i_28 = 2; i_28 < 10; i_28 += 1) 
                        {
                            {
                                arr_108 [i_24] [i_24] &= ((/* implicit */unsigned long long int) ((signed char) arr_105 [i_24] [i_24] [i_25] [i_25 - 1] [i_26]));
                                var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) arr_100 [i_26] [2]))));
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)31)) == (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 3) 
    {
        for (unsigned long long int i_30 = 1; i_30 < 14; i_30 += 4) 
        {
            for (unsigned char i_31 = 1; i_31 < 17; i_31 += 1) 
            {
                {
                    var_50 = ((/* implicit */unsigned short) var_9);
                    arr_116 [i_29] [i_29] [i_31] = ((/* implicit */unsigned long long int) var_4);
                    /* LoopNest 2 */
                    for (unsigned short i_32 = 0; i_32 < 18; i_32 += 3) 
                    {
                        for (unsigned short i_33 = 0; i_33 < 18; i_33 += 4) 
                        {
                            {
                                arr_122 [i_29] [i_30 + 4] [i_31] [i_29] [i_31] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) (signed char)100))))), (var_9)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_118 [(short)11] [16ULL] [i_31 + 1] [i_31])), (var_15))))));
                                arr_123 [i_30 + 3] [i_31] [i_32] [i_31] = ((/* implicit */int) var_15);
                                arr_124 [i_29] [i_29] [12LL] [i_29] [14] [i_31] = ((/* implicit */short) var_8);
                                arr_125 [i_29] [i_29] [i_30] [i_31] [i_29] [i_33] = ((/* implicit */int) (unsigned char)62);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_34 = 0; i_34 < 23; i_34 += 2) 
    {
        for (unsigned short i_35 = 1; i_35 < 21; i_35 += 4) 
        {
            for (long long int i_36 = 1; i_36 < 22; i_36 += 1) 
            {
                {
                    var_51 = ((/* implicit */_Bool) ((int) (unsigned short)6144));
                    arr_133 [i_34] [i_35] [i_35] [i_34] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9977150242339892985ULL))));
                }
            } 
        } 
    } 
}
