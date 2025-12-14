/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46626
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_21 = arr_0 [i_0];
    }
    /* LoopNest 3 */
    for (long long int i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                {
                    var_22 &= ((/* implicit */unsigned long long int) ((arr_2 [i_1]) ^ (((arr_2 [i_1 - 3]) / (((/* implicit */int) (unsigned short)20986))))));
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_3 [i_1 - 3])) >= (max((((((/* implicit */_Bool) var_18)) ? (arr_0 [i_1]) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-8508495966204744152LL))))))));
                        var_24 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_5 [i_2] [10U] [i_4])), ((((_Bool)1) ? (arr_7 [i_1] [9ULL] [9ULL] [i_4]) : (((/* implicit */unsigned long long int) -8508495966204744149LL)))))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((var_2), (var_7)))) + (max((3736021916U), (((/* implicit */unsigned int) arr_4 [i_3])))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_2])) ? (arr_5 [i_1] [i_1 - 2] [i_1 - 2]) : (arr_5 [i_2] [i_1 - 1] [i_2])))) ? (((int) arr_11 [i_2] [i_2] [i_3 - 1] [i_3 - 1])) : ((((-(arr_9 [(unsigned short)8] [i_3 + 1] [i_2] [i_2] [i_1]))) | (((/* implicit */int) ((arr_0 [i_1]) < (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_3 + 1] [i_3] [i_2])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) (-(((unsigned long long int) arr_3 [i_4]))));
                            var_27 = ((/* implicit */int) arr_0 [i_3 + 1]);
                            var_28 = ((/* implicit */unsigned short) (~(arr_9 [i_1] [i_2] [i_3] [i_5 + 1] [i_1 - 1])));
                            var_29 *= ((((/* implicit */_Bool) 10906403824324263441ULL)) || ((!(((/* implicit */_Bool) arr_1 [i_2] [i_1])))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((unsigned int) ((arr_10 [i_1] [i_2] [i_3 - 1] [i_6]) | (((/* implicit */unsigned long long int) arr_5 [(unsigned short)4] [i_2] [i_3])))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((unsigned int) ((((/* implicit */long long int) var_8)) >= (-2316118869579658709LL))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) 3736021909U);
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8411)) && (var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [(unsigned short)3] [i_3] [0LL])) ? (arr_19 [i_1] [i_2] [(unsigned short)5] [3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))))))))) : (var_6)));
                        var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)77)), (arr_4 [i_1])))) & (((/* implicit */int) arr_4 [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_7] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned int) var_2)) : (3736021916U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (-2594393777427249756LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)89)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_7] [i_3] [i_2] [(unsigned short)8]), ((signed char)-77))))) : (6457281767191663634ULL)))));
                    }
                    for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (6457281767191663634ULL) : (((/* implicit */unsigned long long int) arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1]))))))))));
                        var_36 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (arr_3 [i_1 - 2]) : (arr_3 [i_1 - 1])))));
                        var_37 &= ((/* implicit */_Bool) ((unsigned short) ((long long int) arr_20 [i_8 + 2] [i_3 + 1] [i_3 - 1] [i_1 - 1])));
                    }
                    var_38 = ((/* implicit */unsigned long long int) max((((signed char) min((((/* implicit */int) (_Bool)0)), (arr_15 [i_3 + 1] [i_3 + 1] [(_Bool)1] [i_1])))), (((/* implicit */signed char) ((((/* implicit */_Bool) 576179277326712832ULL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_22 [i_3 + 1] [i_2] [i_2] [i_1 - 2])), (arr_7 [i_1] [i_2] [i_2] [i_3 - 1])))))))));
                    var_39 ^= ((/* implicit */_Bool) (~(((long long int) min((((/* implicit */long long int) (_Bool)1)), (var_17))))));
                    var_40 = ((/* implicit */unsigned short) 11989462306517887986ULL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_41 = ((/* implicit */signed char) (-((((~(arr_30 [i_9]))) ^ ((-(((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_13 = 4; i_13 < 13; i_13 += 1) 
                            {
                                var_42 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_13] [(unsigned short)14] [(unsigned short)16])) ? (((/* implicit */unsigned long long int) arr_30 [i_13])) : (arr_36 [i_13] [i_12] [i_11] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [(signed char)14] [i_13 - 3] [i_13 + 1] [i_13]))) : (min((((/* implicit */long long int) arr_33 [(unsigned short)2])), (var_17))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) arr_35 [i_9 + 2] [i_9 + 2] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)65520))))) && (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))))));
                                var_43 = (!(((/* implicit */_Bool) ((((3184301786152436345ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9 + 2])))))));
                            }
                            var_44 = (-(arr_28 [i_9] [(_Bool)1]));
                            var_45 = ((/* implicit */int) (~(16852497886950179442ULL)));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned long long int) (~(((((var_6) + (2147483647))) >> (((arr_24 [i_9 + 3]) + (3247433792670915177LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        for (unsigned int i_15 = 1; i_15 < 15; i_15 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_16 = 1; i_16 < 15; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 2; i_18 < 15; i_18 += 2) 
                        {
                            {
                                var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [(unsigned short)2] [i_18] [i_16] [i_16] [i_14])) ? (((-1810789719) + (((/* implicit */int) var_9)))) : (((/* implicit */int) var_1))))))))));
                                arr_50 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_39 [i_15 + 1] [i_16 - 1]))) ? (((((/* implicit */int) (signed char)2)) + (((/* implicit */int) arr_39 [i_15 + 1] [i_16 - 1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)256)) < (((/* implicit */int) arr_39 [i_15 + 1] [i_16 - 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    var_48 = ((/* implicit */unsigned int) -8508495966204744147LL);
                    var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_47 [i_15 - 1] [i_14] [i_15 + 1] [i_15 + 1] [i_15 - 1]))) ? (((arr_44 [i_14] [i_14] [i_15]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15] [i_15] [(_Bool)1] [i_15 - 1] [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_24 [i_15]) : (((/* implicit */long long int) arr_42 [i_19] [i_15] [i_14]))))) >= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_14] [i_15] [i_15] [i_14]))) : (576179277326712814ULL)))))))));
                    var_50 *= ((/* implicit */unsigned int) max((136548509), (((/* implicit */int) (unsigned short)40233))));
                    var_51 = ((/* implicit */unsigned int) ((signed char) ((arr_26 [i_14]) >= (((/* implicit */unsigned int) arr_42 [i_14] [i_15] [i_14])))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 1) 
                        {
                            {
                                var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) arr_49 [i_14] [i_15 - 1] [i_19] [10ULL] [2U]))));
                                var_53 = ((/* implicit */int) (+((~(((((/* implicit */long long int) ((/* implicit */int) var_19))) & (arr_54 [i_14] [i_15 - 1] [i_19] [i_19] [i_20] [i_21])))))));
                            }
                        } 
                    } 
                }
                for (signed char i_22 = 0; i_22 < 16; i_22 += 1) 
                {
                    var_54 = ((/* implicit */_Bool) 17870564796382838788ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        for (signed char i_24 = 2; i_24 < 12; i_24 += 2) 
                        {
                            {
                                var_55 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_42 [i_14] [i_24] [i_24])) ? (arr_26 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_14]))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)26915))))))))) & (((((/* implicit */_Bool) 8689937279758006265LL)) ? (((/* implicit */unsigned long long int) arr_46 [i_14] [i_14] [i_24] [i_22] [0ULL] [i_24])) : ((((_Bool)1) ? (arr_45 [i_14] [i_24]) : (((/* implicit */unsigned long long int) arr_62 [i_14] [i_14] [i_23] [i_15]))))))));
                                var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) arr_42 [i_14] [i_15] [i_24]))), ((-(3040276447832455164LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_62 [i_14] [i_24 + 4] [i_22] [i_15 + 1]) <= (var_16))))) : (((1326778291U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)264))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_25 = 2; i_25 < 15; i_25 += 1) 
                {
                    var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_51 [i_25 + 1] [i_15 + 1]))));
                    arr_69 [i_14] [i_14] [i_15 - 1] [i_25 + 1] = ((/* implicit */unsigned short) (~(((var_8) + (((/* implicit */unsigned int) 454485726))))));
                }
                var_58 *= ((/* implicit */int) 2305842459457880064LL);
                /* LoopNest 2 */
                for (unsigned short i_26 = 3; i_26 < 12; i_26 += 1) 
                {
                    for (unsigned short i_27 = 0; i_27 < 16; i_27 += 1) 
                    {
                        {
                            var_59 *= ((unsigned long long int) min((((/* implicit */int) arr_35 [i_15 + 1] [i_15 + 1] [i_26 + 3] [i_15 + 1])), (var_6)));
                            var_60 = ((/* implicit */unsigned int) (-(((((8508495966204744152LL) * (((/* implicit */long long int) ((/* implicit */int) var_19))))) + (-8508495966204744152LL)))));
                            var_61 = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) arr_51 [i_14] [i_15 + 1])) ? (arr_70 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [9U] [i_15] [i_26 + 1] [(unsigned short)8])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((8508495966204744152LL) + (((/* implicit */long long int) ((/* implicit */int) var_15)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2968189005U)) ? (((/* implicit */int) var_1)) : (-30369935)))))) ? (min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_13))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (~(112)))) : (var_3)))))))));
}
