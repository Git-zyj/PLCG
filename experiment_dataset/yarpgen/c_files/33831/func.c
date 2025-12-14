/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33831
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [(unsigned short)11] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) min((9223372036854775795LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_15)))));
                    arr_11 [16] [i_1] [16] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) ((unsigned char) 16645580273939384630ULL))) - (((/* implicit */int) max((((/* implicit */short) (signed char)-23)), (var_2)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [10LL] [9ULL] = ((/* implicit */signed char) ((long long int) var_7));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [i_0])));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) * (((long long int) min((var_2), (arr_12 [i_0]))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (var_16)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (1801163799770166986ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)22167)), (16714289061806774989ULL)))) ? (((/* implicit */int) ((unsigned short) 1801163799770166989ULL))) : (max((((/* implicit */int) (_Bool)1)), (arr_22 [i_5]))))))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) min((max((8239334424313651444LL), (((/* implicit */long long int) 0)))), (min((137438953471LL), (((long long int) arr_3 [i_5]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                for (int i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_19 &= ((/* implicit */short) (signed char)-119);
                            var_20 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)126)) >> (((((((/* implicit */_Bool) 16645580273939384642ULL)) ? (1801163799770167005ULL) : (16645580273939384638ULL))) - (1801163799770166984ULL)))))));
                            var_21 = ((/* implicit */signed char) ((8239334424313651444LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)103)))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            var_22 = (~(((/* implicit */int) (unsigned short)41634)));
                            var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */long long int) arr_34 [i_5] [i_5] [i_5] [i_7] [i_7] [0U] [i_7])) : (8259389953655948891LL)))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
                        {
                            arr_40 [4ULL] [i_8] [4ULL] [i_5] [i_5] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_2)) / (((/* implicit */int) (short)22508)))), (arr_34 [i_7] [i_8] [i_8] [i_8 + 1] [i_11] [i_11 + 1] [i_11 + 2])))), (min((min((1801163799770166968ULL), (1801163799770166986ULL))), (((/* implicit */unsigned long long int) var_16))))));
                            var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_6 + 3] [i_7 - 1])) ? (min((7247677117241942946ULL), (((var_10) ? (11199066956467608687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4094))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 11; i_12 += 1) /* same iter space */
                        {
                            var_25 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_6 + 3] [i_6 - 1])) || (((/* implicit */_Bool) -1LL)))))));
                            arr_44 [i_6] [(unsigned short)13] [i_6] [i_6] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((5254647415098594446ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62984))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                        }
                        arr_45 [i_6] [i_7] [i_7] [i_6] [i_5] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) -8368383012530141245LL)), (max((((/* implicit */unsigned long long int) (-(-8368383012530141236LL)))), (14489410416660892918ULL)))));
                        arr_46 [1ULL] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned long long int) var_16)), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-1675449903549855407LL)))))) < (((unsigned long long int) ((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_28 [i_6] [i_6 + 2] [i_7] [i_8])))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) max(((unsigned short)57394), (((/* implicit */unsigned short) var_7))))))) ? ((-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-30450)), ((unsigned short)64059)))))) : (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) | (((16645580273939384624ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                        arr_51 [i_14] [i_14] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -1073741808)) || (((/* implicit */_Bool) (signed char)-125)))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_8)) : (var_6)))));
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) max((((unsigned long long int) arr_41 [i_5] [i_6] [i_6 - 1] [i_6] [i_15])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_5] [i_6] [i_6 + 3] [i_6] [i_6])))))));
                            arr_54 [i_6] [i_15] = ((/* implicit */unsigned int) (~(-889678859)));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_16 = 3; i_16 < 13; i_16 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) arr_24 [i_5] [i_5] [i_16]);
            var_31 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)50177)), (5261192027064472190LL)));
        }
        arr_59 [11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) << (((8286228167642122232ULL) - (8286228167642122221ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3166106910U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) 11199066956467608667ULL)))) || (((/* implicit */_Bool) (unsigned char)0))))) : ((~(arr_30 [(short)4] [2ULL] [i_5] [(short)4])))));
    }
    for (short i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
    {
        arr_64 [i_17] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_15))))), ((-(((/* implicit */int) (short)-24841)))))), (((/* implicit */int) var_16))));
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_67 [i_18] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_11))))));
            var_32 *= ((/* implicit */unsigned char) (~((-(max((3166106910U), (((/* implicit */unsigned int) -1578452636))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 14; i_20 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) ((var_13) << (((var_13) - (13651843344745422290ULL)))));
                        arr_74 [i_17] [i_17] [i_19] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1249693602), (((/* implicit */int) (signed char)20))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_18] [i_17]))) : (2287828610704211968ULL))))));
                    }
                } 
            } 
        }
        arr_75 [i_17] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) (unsigned short)1476)) ? (-1249693622) : (636365772)))))));
        arr_76 [i_17] = ((/* implicit */unsigned long long int) var_16);
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((2147483647) >> (((/* implicit */int) (signed char)21))))) : ((-(arr_26 [i_17] [i_17])))));
    }
    var_35 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-6)) >= (((/* implicit */int) (unsigned short)62964)))))) * (11199066956467608661ULL)));
    var_36 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 636365772)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) (unsigned short)3584)))));
}
