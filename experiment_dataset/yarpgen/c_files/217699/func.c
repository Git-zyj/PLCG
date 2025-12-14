/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217699
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 &= ((/* implicit */signed char) max((18142978864720295828ULL), (((/* implicit */unsigned long long int) ((arr_4 [i_0]) & (arr_4 [i_2]))))));
                    arr_9 [i_0] [i_1] [i_1] [(_Bool)1] = (signed char)-103;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_3] [i_4] [i_3] = ((/* implicit */long long int) arr_2 [3LL]);
                    arr_20 [i_0] [i_3 + 1] [i_4] [(signed char)17] = ((/* implicit */signed char) (+(((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_15 [(signed char)14] [(signed char)14] [(signed char)14]) : (arr_15 [i_0] [i_0] [i_0]))))));
                    arr_21 [i_3] [i_3] = var_5;
                }
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_12 = ((/* implicit */_Bool) var_0);
                    arr_26 [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0]);
                }
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_22 [i_0] [i_3] [i_0] [i_4]))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [(short)3] [i_4])) ? (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_3 - 1] [i_4]))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3 - 2]))))), (((/* implicit */long long int) (signed char)-17)))))));
            }
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_15 &= ((/* implicit */unsigned long long int) arr_5 [i_3 - 1] [(_Bool)1] [i_8]);
                    arr_33 [i_0] [18LL] [i_7] [i_8] |= ((/* implicit */signed char) ((((arr_18 [i_3 - 3] [i_3 + 2] [i_3 - 2] [i_3 - 1]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) >= (((/* implicit */long long int) (-((-(((/* implicit */int) arr_10 [i_0] [i_8])))))))));
                }
                for (short i_9 = 3; i_9 < 20; i_9 += 1) 
                {
                    var_16 -= ((/* implicit */short) (-(max((((/* implicit */long long int) ((short) var_9))), ((~(arr_25 [i_0] [i_3] [i_7] [i_9])))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_0))));
                    arr_36 [i_9] [i_9] [i_7] [i_3] [i_9] = ((/* implicit */unsigned long long int) ((long long int) max((((((/* implicit */int) arr_13 [i_0] [(short)9] [i_7])) ^ (((/* implicit */int) var_2)))), (((((/* implicit */int) var_8)) << (((/* implicit */int) var_8)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (signed char)104))));
                    var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_23 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_3] [i_10]))))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (arr_12 [i_3] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 2] [i_3] [i_12]))))))))));
                        arr_43 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6218300877691607867ULL))));
                        var_21 -= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_37 [i_3 + 1] [i_3 + 4] [i_3 + 3]))))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_0] [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((short)7936), (((/* implicit */short) var_6)))))));
                        arr_49 [i_0] [i_0] [i_0] [i_11] [i_13] [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((arr_39 [i_0] [(short)11] [i_7] [i_13 - 1] [(short)18]) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_22 [i_3] [i_3 + 3] [i_3] [i_11]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_3 + 4] [i_3 + 2] [i_13 - 1])) ? (((((/* implicit */_Bool) 7171940509159172180ULL)) ? (var_4) : (8455570119756502569LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13]))))))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) max((max((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_1)))), (((((/* implicit */int) arr_24 [11U])) + (((/* implicit */int) var_5)))))), (((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 1]))));
                        var_23 = ((/* implicit */short) ((unsigned long long int) max((arr_41 [i_3] [i_3 + 3] [i_14 - 1] [i_14] [i_14 - 1] [i_14] [i_14]), (arr_41 [i_0] [i_3 + 3] [i_14 - 1] [i_14] [i_14] [i_14] [i_14]))));
                        arr_52 [i_11] [10U] [10U] [i_11] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((13914166303441172478ULL) >> (((-520634091) + (520634137)))))) ? (((/* implicit */unsigned long long int) ((var_5) ? (2006140027784696503LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_3] [(_Bool)1])))))) : (4233830213495672149ULL))));
                        var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_3 - 1] [19LL] [i_11]))) : (max((5204966282326648057LL), (((/* implicit */long long int) var_9)))))));
                        arr_53 [i_0] [i_11] [i_11] = ((/* implicit */signed char) 49843749);
                    }
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_8))));
                    arr_54 [i_0] [i_0] [(_Bool)1] [i_3] [i_0] [i_11] = ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)50)), (-1325689630939290228LL)));
                }
                var_26 -= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (max((9873886533930223972ULL), (arr_39 [i_0] [i_0] [12LL] [(signed char)12] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_0] [i_3 + 2] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_15 = 3; i_15 < 18; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned long long int) var_2);
                            arr_61 [i_0] [i_15] [i_3] [i_0] [i_15 - 2] [11ULL] = ((/* implicit */_Bool) (~(5379069704201072104ULL)));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_39 [i_16] [i_15 + 3] [i_3 - 3] [i_3 + 2] [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (10706896926943288706ULL))))))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (signed char)-42))));
        }
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) 5013796621605411638ULL))));
        var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3587472989442215191LL)) ? ((+(((/* implicit */int) var_8)))) : (((int) var_3))))));
    }
    for (short i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) 143913847U))));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                {
                    arr_68 [19U] [i_18] [i_19] = (signed char)-114;
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (-(((/* implicit */int) ((((arr_27 [i_19] [i_19] [i_18] [i_17]) >= (((/* implicit */int) (signed char)61)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))))));
                }
            } 
        } 
    }
    for (short i_20 = 0; i_20 < 21; i_20 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (long long int i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_11 [i_22])) ? (-1325689630939290240LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [18LL] [i_22]))))))))));
                    arr_78 [i_20] [i_21] [i_22] [9] = ((/* implicit */unsigned int) ((short) max((arr_25 [i_22] [i_22] [i_20] [i_20]), (arr_56 [i_20] [i_20] [i_21] [i_22]))));
                    arr_79 [i_22] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_59 [i_20] [i_21] [(signed char)18] [i_20] [i_22] [i_22] [i_22]))))) | ((((_Bool)0) ? (arr_74 [i_21]) : (arr_74 [i_21])))));
                }
            } 
        } 
        var_35 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_8))))) ? (((arr_17 [(signed char)18] [12LL] [12LL] [i_20] [i_20]) ? (8674455389314460188ULL) : (((/* implicit */unsigned long long int) arr_51 [i_20] [i_20] [i_20] [i_20] [i_20])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)21), (arr_69 [i_20])))))))));
        /* LoopSeq 1 */
        for (int i_23 = 3; i_23 < 20; i_23 += 4) 
        {
            var_36 = ((/* implicit */signed char) arr_27 [i_20] [i_20] [(signed char)13] [i_23]);
            arr_83 [i_20] [i_20] [i_23] = ((/* implicit */short) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 11360110711347298072ULL)) && ((_Bool)0))) ? (((/* implicit */unsigned long long int) max((-6484118403146855896LL), (((/* implicit */long long int) var_2))))) : (max((((/* implicit */unsigned long long int) arr_16 [i_20])), (11974205780104382993ULL))))))));
        }
    }
    var_37 &= var_4;
    /* LoopNest 3 */
    for (signed char i_24 = 0; i_24 < 11; i_24 += 1) 
    {
        for (unsigned long long int i_25 = 1; i_25 < 9; i_25 += 3) 
        {
            for (long long int i_26 = 0; i_26 < 11; i_26 += 1) 
            {
                {
                    arr_90 [i_24] [i_25] [(signed char)3] [i_24] = ((/* implicit */_Bool) (+(((max(((-2147483647 - 1)), (((/* implicit */int) arr_37 [i_26] [i_25] [i_24])))) / (((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 3; i_27 < 9; i_27 += 1) 
                    {
                        for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) (short)14145);
                                var_39 -= ((/* implicit */unsigned long long int) max((max((arr_15 [i_27 + 1] [4U] [i_24]), (arr_15 [i_27 - 3] [5] [2]))), (((/* implicit */long long int) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
