/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241304
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
    for (short i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)53492), (((/* implicit */unsigned short) (_Bool)1)))))) > (-4LL)))), (var_7));
        var_13 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3]))))), ((+(0U)))));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_14 += ((/* implicit */_Bool) 2147483632);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_19 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_11 [i_1]));
                        arr_20 [i_4] |= ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) 1993562090U)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-3438154009663033463LL) : (((/* implicit */long long int) -2147483631)))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(var_8))))));
            arr_21 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23133))) : (var_8)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)-118)))))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned int i_6 = 3; i_6 < 20; i_6 += 3) 
                {
                    {
                        arr_28 [i_1] [i_2 + 1] [3] [i_1] = min((((((/* implicit */_Bool) (unsigned short)37822)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6]))))), (((/* implicit */long long int) var_11)));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min(((short)-22732), (var_4))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_2))));
                            arr_31 [i_7] [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((unsigned char) arr_30 [i_1])), (((unsigned char) ((((/* implicit */_Bool) 18LL)) ? (-5252892271670767102LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                            var_18 ^= ((/* implicit */signed char) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)12376)))) : (((/* implicit */int) var_4))))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_8))));
                            arr_34 [i_1] [(unsigned short)0] [i_1] [(unsigned short)0] [i_8 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned short)35900)) + (((/* implicit */int) var_10)))))) ? (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_16 [14U] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (_Bool)0)))))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)40720)) ? (((/* implicit */int) var_10)) : (var_1))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) /* same iter space */
        {
            arr_37 [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) (_Bool)1);
            var_20 += ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)121))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 19; i_11 += 4) 
                {
                    for (int i_12 = 1; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 2063028643U))));
                            var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)27719)) ^ (((/* implicit */int) (signed char)127)))))));
                            var_23 = ((/* implicit */signed char) var_8);
                            arr_46 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = arr_3 [i_1];
                            var_24 -= ((/* implicit */_Bool) ((unsigned int) arr_40 [i_12 - 1] [i_11] [i_11 + 2] [i_1 + 1]));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
        {
            arr_51 [i_1] = ((/* implicit */signed char) 18446744073709551615ULL);
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_7))));
        }
        /* LoopNest 3 */
        for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (int i_16 = 2; i_16 < 20; i_16 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_17 = 1; i_17 < 20; i_17 += 4) 
                        {
                            arr_60 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)56);
                            var_26 = var_10;
                            var_27 = ((/* implicit */unsigned int) (unsigned short)24815);
                        }
                        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) max((max((arr_42 [i_14 - 1] [i_14 - 1] [i_14 - 1]), (((/* implicit */int) var_10)))), (((var_12) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_7)) / (((/* implicit */int) var_9)))), (((/* implicit */int) (short)128))))) ? (max((max((var_1), (((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_12))));
                        }
                        for (long long int i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            arr_65 [i_15] [i_1] = (~(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) > (((((/* implicit */_Bool) arr_56 [i_1 - 1] [i_1] [i_16] [i_16] [i_16] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45974))) : (var_0)))))));
                            var_30 = ((/* implicit */unsigned short) ((((var_0) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27320))) : (((long long int) arr_42 [i_1 + 2] [i_14 - 1] [i_16 + 1]))));
                            arr_66 [i_1] [i_15] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) -821995262)) || (((/* implicit */_Bool) (unsigned short)56683))));
                            arr_67 [i_19] [i_16 - 1] [i_15] [i_14] [i_19] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(234881024))), ((+(((/* implicit */int) (short)14667))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) ((4029180697U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (min((((/* implicit */long long int) (unsigned short)41643)), (-4071645774740402160LL))) : ((~(var_6)))))));
                        }
                        var_31 = ((/* implicit */short) max((var_31), (((short) var_10))));
                    }
                } 
            } 
        } 
        arr_68 [(unsigned char)6] |= ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (7962881141756711012ULL)))) ? (((/* implicit */long long int) var_1)) : (var_6))) & (min((var_6), (((/* implicit */long long int) var_1)))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (_Bool)0)) : (234881024))))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_33 = ((/* implicit */int) max((var_33), (max((((int) arr_49 [i_20] [i_20])), (((/* implicit */int) var_7))))));
        /* LoopSeq 4 */
        for (short i_21 = 0; i_21 < 15; i_21 += 4) 
        {
            arr_76 [i_20] [i_20] = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (min((((((/* implicit */_Bool) (signed char)-52)) ? (262143) : ((-2147483647 - 1)))), (((/* implicit */int) arr_5 [(unsigned short)20]))))));
            /* LoopNest 2 */
            for (unsigned int i_22 = 1; i_22 < 11; i_22 += 2) 
            {
                for (unsigned short i_23 = 1; i_23 < 11; i_23 += 3) 
                {
                    {
                        var_34 = ((/* implicit */int) 764945845U);
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) var_12))));
                        arr_82 [i_20] [i_20] [i_20] [i_20] = min((max((arr_26 [i_23 + 2] [i_23 + 2] [i_23 - 1] [i_23 + 2] [i_23 + 4] [i_22 + 1]), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-27715)) || (((/* implicit */_Bool) var_9))))));
                        var_36 -= ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        }
        for (int i_24 = 1; i_24 < 12; i_24 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */short) (signed char)-101);
            arr_85 [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-6130736481120690176LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_6)) ? (var_6) : (arr_63 [i_20] [i_20] [i_20] [i_20] [i_20])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5291197390279050812LL)) ? (((/* implicit */int) (short)31682)) : (2147483613)))) ? (((/* implicit */int) arr_61 [i_20])) : (((/* implicit */int) (unsigned short)35890))))) : (max((var_0), (((((/* implicit */_Bool) (unsigned char)20)) ? (4457390093483160522LL) : (9223372036854775799LL)))))));
        }
        for (int i_25 = 1; i_25 < 12; i_25 += 3) /* same iter space */
        {
            arr_88 [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) var_4);
            var_38 = ((/* implicit */unsigned int) var_3);
        }
        for (long long int i_26 = 0; i_26 < 15; i_26 += 4) 
        {
            arr_93 [i_20] [i_20] [i_26] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_20] [i_20] [i_20] [i_26])) ? (((/* implicit */int) arr_79 [(short)13] [i_26] [(short)13] [i_26])) : (((/* implicit */int) arr_79 [i_26] [i_26] [i_20] [i_20])))))));
            /* LoopNest 3 */
            for (long long int i_27 = 0; i_27 < 15; i_27 += 3) 
            {
                for (unsigned short i_28 = 0; i_28 < 15; i_28 += 3) 
                {
                    for (unsigned int i_29 = 0; i_29 < 15; i_29 += 4) 
                    {
                        {
                            var_39 -= ((/* implicit */unsigned short) min((var_6), (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) : (min((var_3), (((/* implicit */long long int) var_2))))))));
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8368979040734566664LL)) ? (((/* implicit */int) (short)-27716)) : (((/* implicit */int) (short)27723))))) ? (max(((((_Bool)1) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_9 [i_20] [i_26])))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 10541136076938132697ULL)) ? (((/* implicit */int) var_5)) : (18))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_29])) : (((/* implicit */int) (_Bool)1)))))))))));
                            var_41 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_12)), (var_6))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_101 [i_20] [i_20] [i_27])))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_42 = ((/* implicit */unsigned char) (_Bool)0);
}
