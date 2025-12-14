/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200686
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = arr_0 [i_0];
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((arr_0 [i_0]) ? (((/* implicit */int) arr_12 [i_3] [i_1 - 1] [i_3] [i_3] [i_3] [i_1])) : (((/* implicit */int) arr_2 [i_0])))))));
                        arr_13 [i_0] [i_1] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [14LL] [i_2] [i_2] [i_0] [3ULL] [i_0])))) <= (2251799545249792ULL));
                        var_18 = ((/* implicit */signed char) -574811426861508069LL);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) max(((-9223372036854775807LL - 1LL)), (574811426861508046LL)));
            var_20 = ((/* implicit */long long int) arr_15 [i_5] [(unsigned char)15]);
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((arr_14 [i_7] [i_6]) % (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-574811426861508069LL))), (arr_18 [(unsigned short)14])))))))));
                            var_22 -= (_Bool)1;
                            var_23 *= ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) arr_25 [i_8])), (arr_20 [i_4 + 2])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 1; i_10 < 15; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    {
                        var_24 &= ((/* implicit */signed char) ((int) arr_33 [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 4] [i_10]));
                        var_25 = ((/* implicit */unsigned long long int) var_12);
                    }
                } 
            } 
            var_26 = ((_Bool) var_2);
        }
        var_27 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44213)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_25 [i_4 + 1])))) : (((long long int) arr_25 [i_4 + 2])));
        arr_34 [i_4 + 2] [i_4] &= ((/* implicit */unsigned char) ((unsigned long long int) arr_33 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 + 3]));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_19 [i_4 + 3] [i_12] [i_13])), (var_0))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2091241016)) ? (((/* implicit */int) arr_22 [i_4 - 1] [i_13])) : (((/* implicit */int) arr_38 [i_14] [i_13]))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_13] [i_13] [i_14] [(_Bool)1] [(_Bool)1]))) ? (max((arr_40 [i_13] [i_13]), (((/* implicit */unsigned long long int) -574811426861508047LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_12]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4]))))))))))))));
                        var_30 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_37 [i_14] [i_12] [i_4 - 1])) ? (((/* implicit */int) arr_37 [i_14] [i_14] [i_13])) : (((/* implicit */int) arr_37 [i_4 + 1] [i_12] [i_14])))));
                    }
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((int) (-((+(-574811426861508054LL)))))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (arr_29 [i_4 - 1] [i_12])));
                    }
                    var_33 *= ((/* implicit */unsigned short) arr_32 [i_13] [i_12] [i_12] [(signed char)5] [i_12] [i_4]);
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        arr_50 [i_4] [i_12] [i_13] [i_16] [i_16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) ((signed char) arr_23 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4] [i_4 + 3] [i_4 + 3] [i_4 - 1]))) : (((/* implicit */int) arr_41 [i_4 + 1] [i_16] [i_4 + 2] [i_4 + 1]))));
                        var_34 -= ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) var_11)));
                        arr_51 [i_4] [i_4] [i_4] [i_16] = ((/* implicit */signed char) ((unsigned char) 2091241016));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 2) 
                        {
                            arr_57 [i_17] [i_12] [i_13] [i_17] = arr_44 [i_12] [i_17];
                            arr_58 [i_4 + 1] [i_12] [i_17] [5] [i_17] [i_17] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) 2091241021)) : (0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_17])) ? (((/* implicit */int) arr_42 [i_17] [(_Bool)1] [i_13] [i_17])) : (((/* implicit */int) (unsigned short)4095)))))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            arr_61 [i_4] [i_12] [i_17] [i_17] [i_19] = ((/* implicit */_Bool) arr_23 [i_17] [i_4] [i_17] [i_17] [i_19] [(_Bool)1] [i_19]);
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (-(((/* implicit */int) min((arr_31 [i_4 + 2]), (arr_28 [i_17])))))))));
                        }
                        var_36 -= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_16)) ? (arr_32 [i_12] [12LL] [i_12] [i_12] [i_12] [i_12]) : (((1558296875) >> (((((/* implicit */int) (unsigned short)65505)) - (65493))))))));
                    }
                    for (int i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        arr_64 [i_4 + 1] [i_12] = ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12] [i_4 + 2] [i_4 + 1] [i_4] [i_12]))) : (var_9)))) ? (((((/* implicit */_Bool) arr_21 [i_13] [i_4 + 3] [i_4 + 2] [i_4] [i_13])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_12] [i_4 + 1] [i_4 + 2] [i_4] [i_12])), ((unsigned short)2221))))));
                        var_37 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((long long int) arr_15 [i_4] [i_20]))))) ? (((unsigned long long int) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55639)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_20] [i_13] [(_Bool)1] [i_12] [i_20]))))));
                        var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_12] [(signed char)16] [i_13] [i_20] [i_20])) ? (((/* implicit */int) (!(arr_56 [i_12] [i_12] [i_13] [i_12] [(unsigned char)0] [i_12] [i_12])))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_59 [i_4 + 1] [i_12] [i_12] [(_Bool)1] [i_13] [i_20] [i_20]))) != (((/* implicit */int) arr_25 [i_4 + 3])))))));
                        var_39 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_30 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_13] [i_20] [i_12] [i_4 + 3] [i_20])) : (arr_30 [i_4 - 1] [i_4 + 1])))));
                        var_40 = ((/* implicit */long long int) ((((unsigned long long int) ((unsigned short) 8821273260694550518ULL))) | (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (signed char)119)), (-574811426861508057LL))))))));
                    }
                    var_41 |= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_44 [i_4] [i_12]))) ? (max((arr_49 [i_12] [i_12]), (arr_49 [i_4] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)29435))))))), (((((/* implicit */_Bool) var_13)) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_13]))) : (arr_60 [i_4] [i_4] [i_4] [i_4] [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_13] [i_13])) ^ (((/* implicit */int) var_12))))))));
                }
            } 
        } 
    }
    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
    {
        arr_67 [i_21 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((arr_54 [(_Bool)1] [(_Bool)1] [i_21] [i_21] [i_21]) ? (((/* implicit */int) arr_28 [i_21 + 1])) : (2091241016))))) + (((((/* implicit */_Bool) arr_26 [i_21])) ? (((/* implicit */int) arr_26 [i_21 + 1])) : (((/* implicit */int) arr_26 [i_21 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            for (unsigned short i_23 = 0; i_23 < 19; i_23 += 2) 
            {
                {
                    var_42 -= ((/* implicit */signed char) var_6);
                    arr_73 [i_21 + 1] [i_22] [i_23] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) ((long long int) arr_36 [i_21 + 1])));
                }
            } 
        } 
        arr_74 [i_21] = ((((/* implicit */_Bool) arr_23 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_41 [i_21 + 1] [i_21] [i_21 + 1] [i_21 + 1])))) : (-5601378354476849312LL));
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)54))) : (((arr_29 [i_21 + 1] [i_21 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_21 + 1]))) : (3506347981563622485LL)))));
    }
    var_44 = ((/* implicit */_Bool) var_14);
    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) -1558296876))))) : (((/* implicit */int) var_14))))) ? (max((((/* implicit */int) ((_Bool) var_10))), (max((var_10), (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((signed char) var_5)))));
    /* LoopNest 3 */
    for (long long int i_24 = 1; i_24 < 22; i_24 += 1) 
    {
        for (unsigned char i_25 = 1; i_25 < 21; i_25 += 2) 
        {
            for (unsigned short i_26 = 1; i_26 < 20; i_26 += 2) 
            {
                {
                    var_46 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)24395)) ? (((((/* implicit */_Bool) arr_75 [i_24] [i_24])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (2111742175049047830LL))));
                    /* LoopSeq 2 */
                    for (long long int i_27 = 0; i_27 < 23; i_27 += 3) 
                    {
                        arr_84 [i_26] [i_26 - 1] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_78 [i_27]))));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) max(((((((_Bool)1) ? (arr_83 [i_24 + 1] [i_24 + 1] [(signed char)0]) : (((/* implicit */unsigned long long int) arr_76 [(unsigned short)3])))) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)451)), (9223372036854775806LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_81 [i_24] [i_25 + 1] [i_26 + 3]))))))))));
                    }
                    for (unsigned char i_28 = 0; i_28 < 23; i_28 += 3) 
                    {
                        arr_87 [i_24] [i_26] [(unsigned short)0] &= ((/* implicit */unsigned char) 4058550915739324773LL);
                        arr_88 [i_24] [i_25 + 2] [i_26] [i_28] = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) ((signed char) 9223372036854775807LL))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_29 = 1; i_29 < 21; i_29 += 1) 
                        {
                            var_48 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)47651)))) ? (((/* implicit */unsigned long long int) (+(arr_76 [i_28])))) : (((unsigned long long int) arr_76 [i_28]))));
                            arr_92 [i_29] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((signed char) var_4));
                            var_49 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_83 [i_24] [i_25] [(unsigned short)10]))));
                        }
                        for (signed char i_30 = 0; i_30 < 23; i_30 += 3) 
                        {
                            var_50 = ((/* implicit */signed char) (unsigned short)39060);
                            arr_96 [i_30] [i_30] [i_30] [i_30] [i_30] [i_26] [i_30] = ((/* implicit */unsigned char) arr_80 [i_24 + 1] [i_25] [10LL] [i_28]);
                            arr_97 [(_Bool)1] [i_25] [i_26] [i_26] [19LL] = ((/* implicit */signed char) arr_78 [i_30]);
                        }
                        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2598980129272001421LL)) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-2), (((/* implicit */signed char) var_15)))))) : (min((min((-2598980129272001421LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (signed char)(-127 - 1)))))));
                    }
                }
            } 
        } 
    } 
}
