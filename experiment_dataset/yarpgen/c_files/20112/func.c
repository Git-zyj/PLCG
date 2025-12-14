/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20112
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((_Bool)1) && (((/* implicit */_Bool) 1U)));
        var_12 += ((/* implicit */short) 7530069500615643223LL);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (signed char i_3 = 4; i_3 < 21; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (-7530069500615643211LL) : (((/* implicit */long long int) 67108848U)))))));
                            var_13 = ((unsigned int) arr_11 [i_3 + 1] [i_3] [i_3 + 3] [i_3] [i_3 - 2]);
                            arr_14 [i_4] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3] [i_4])) ? (arr_4 [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)57)) <= (((/* implicit */int) (short)8322))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 67108848U)) && ((_Bool)0)));
                            arr_19 [i_0] [i_1] [i_3] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_3] [i_3 - 1] [i_3])) ? (arr_11 [i_0] [i_2] [i_3] [i_3 - 1] [i_3]) : (arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_5])));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5]);
                        }
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_15 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (((((/* implicit */_Bool) (short)22141)) ? (4227858447U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_3] [i_2] [i_1] [i_0]))))));
                            var_16 *= arr_8 [i_0] [i_0] [i_3 - 4];
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3] [i_3 + 2] [i_3] [i_3] [i_3])) ? (arr_23 [i_3] [i_3 + 2] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) 67108848U))));
                            arr_25 [i_0] [i_3] [i_2] [i_3] [i_6] [i_6] [i_2] &= ((/* implicit */int) (!((_Bool)1)));
                            var_17 = ((/* implicit */int) ((_Bool) ((arr_12 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6]) | (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        arr_26 [i_1] = ((/* implicit */short) var_2);
                        arr_27 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
        arr_28 [i_0] &= ((/* implicit */_Bool) (~(4227858462U)));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */long long int) (_Bool)1);
        var_19 += arr_3 [i_7];
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_37 [i_8] [i_9] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_20 += ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_9] [i_10])) ? (((/* implicit */int) arr_36 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) (unsigned short)51938)) : (((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9])) ? (((/* implicit */int) arr_9 [i_11] [i_11] [i_10] [i_10] [i_9] [i_8])) : (633862253)))) ? (((unsigned long long int) (signed char)-73)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32737)))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((arr_1 [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_11]))) : (234512959U)))));
                    }
                    /* LoopSeq 2 */
                    for (short i_12 = 4; i_12 < 23; i_12 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                        {
                            var_24 += ((/* implicit */long long int) (unsigned char)252);
                            arr_47 [i_8] [i_9] [i_10] [i_10] [i_13] [i_8] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_9] [i_12 - 3])) / (((/* implicit */int) arr_6 [i_8] [i_9]))));
                            arr_48 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((arr_18 [i_8] [i_9] [i_10] [i_12] [i_13]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))))) ? (arr_29 [i_12] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_8])))));
                            arr_49 [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 4227858469U)) ? (3254753672735865046ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                        {
                            var_25 *= ((/* implicit */short) ((unsigned short) arr_0 [i_8] [i_8]));
                            var_26 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) arr_35 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_9 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((234512967U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_14] [i_14] [i_14] [i_12 + 1] [i_12 + 1]))))))));
                        }
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            arr_55 [i_8] [i_9] [i_10] [i_12] [i_12] &= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 1350400717)) ? (1963657924U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))))));
                            arr_56 [i_15] [i_9] [i_9] [i_12] [i_15] [i_15] = ((/* implicit */unsigned char) ((1350400730) >= (arr_51 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 4])));
                        }
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_9] [i_9] [i_10] [i_12] [i_10] [i_9])) ? (((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) 1342733069)) : (arr_29 [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_12 + 1] [i_8] [i_10] [i_9] [i_9])))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) arr_15 [i_10] [i_9] [i_10] [i_12] [i_9])))))));
                        var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4646456902536287591ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2747509244U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (1499052784148975148ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9] [i_12] [i_10] [i_12] [i_12])))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (4060454336U)));
                    }
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        arr_59 [i_8] [i_9] [i_10] [i_16] &= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (67108832U))));
                        var_32 += ((/* implicit */int) ((((/* implicit */_Bool) 3348948291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) : (2747509244U)));
                        arr_60 [i_8] [i_9] [i_10] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_16] [i_10] [i_9] [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (arr_51 [i_8] [i_9] [i_10] [i_10] [i_16] [i_16]))))));
                        var_33 &= ((/* implicit */signed char) ((unsigned short) arr_21 [i_8] [i_9] [i_16] [i_10] [i_9]));
                    }
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_66 [i_18] [i_17] [i_17] [i_9] [i_18] = ((/* implicit */_Bool) var_3);
                        var_34 += ((/* implicit */unsigned int) (~(2796683385824155343ULL)));
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) 1547458052U)) : (-7530069500615643223LL)))) ? (((/* implicit */unsigned long long int) 67108828U)) : (arr_45 [i_8] [i_17])));
                        var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_9 [i_8] [i_9] [i_17] [i_18] [i_8] [i_18]))) > (((/* implicit */int) var_0))));
                        var_37 *= ((/* implicit */short) 8613521011739233151ULL);
                    }
                    for (signed char i_19 = 2; i_19 < 23; i_19 += 3) 
                    {
                        var_38 += ((/* implicit */short) 3784709362U);
                        arr_69 [i_19] = ((/* implicit */_Bool) 13510798882111488LL);
                    }
                    for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)157))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_43 [i_9] [i_9])) : (((arr_1 [i_20]) ? (((/* implicit */int) var_8)) : (arr_51 [i_20] [i_17] [i_17] [i_9] [i_8] [i_8])))));
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) arr_16 [i_8] [i_9] [i_9] [i_17] [i_20]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))) : (2920643546024485739ULL)))) ? (((/* implicit */long long int) arr_58 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((((/* implicit */_Bool) arr_8 [i_8] [i_9] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-8186065021970023725LL))))))));
                        var_43 = 1491263699U;
                        arr_74 [i_8] [i_9] [i_9] [i_17] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_10 [i_17])));
                    }
                    for (unsigned int i_22 = 1; i_22 < 22; i_22 += 2) 
                    {
                        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (7530069500615643223LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9693))))))));
                        var_45 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7505292423302988921ULL)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (signed char)-89))));
                        arr_77 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(735896815U)))) == (2686816047685210264ULL)));
                    }
                    for (unsigned short i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_24 = 1; i_24 < 23; i_24 += 1) 
                        {
                            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 9187435151695303714LL)) : (arr_23 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                            var_47 += ((/* implicit */unsigned int) ((short) arr_35 [i_17] [i_23] [i_24]));
                            arr_83 [i_24] [i_23] [i_17] [i_17] [i_9] [i_8] [i_8] = ((/* implicit */int) -9187435151695303715LL);
                        }
                        var_48 ^= ((/* implicit */signed char) (unsigned short)6580);
                    }
                    arr_84 [i_9] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_8] [i_9]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))))) ? (arr_51 [i_8] [i_9] [i_17] [i_9] [i_17] [i_17]) : (((/* implicit */int) arr_1 [i_8]))));
                    var_49 = -7530069500615643223LL;
                }
            }
        } 
    } 
}
