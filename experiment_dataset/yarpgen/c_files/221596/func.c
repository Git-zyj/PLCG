/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221596
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
    var_16 = ((/* implicit */unsigned short) (-(var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_17 |= ((/* implicit */unsigned long long int) ((17633244018961523241ULL) != (var_9)));
        var_18 = ((/* implicit */long long int) (~(12995793368010712964ULL)));
        var_19 |= ((/* implicit */unsigned short) var_11);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_20 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (var_15))))));
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_1] &= ((/* implicit */signed char) var_1);
                        arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 12995793368010712964ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (813500054748028374ULL))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)60449))))) ? (((((/* implicit */_Bool) var_9)) ? (813500054748028355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-6718)) + (2147483647))) << (((((/* implicit */int) (unsigned char)147)) - (147)))));
                        var_25 &= (short)4193;
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) (unsigned short)58608);
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)147)) ? (792406551U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)18))))));
                            arr_26 [i_0] [i_6] [i_2] [i_2] [1ULL] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)66);
                        }
                        arr_27 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)188)) % (var_5)));
                    }
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) var_14))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_9)))))));
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_0] [3U] [i_2] [(_Bool)1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [(unsigned char)6] [i_0]);
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
    {
        arr_36 [i_10] [i_10] = (!(((/* implicit */_Bool) max((min((7649785367173430292ULL), (((/* implicit */unsigned long long int) arr_34 [i_10])))), (((/* implicit */unsigned long long int) 6757258922391491561LL))))));
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) min((arr_30 [i_10] [(short)9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)88)))))))))))));
        var_34 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_5)))) ? ((~(var_5))) : (((/* implicit */int) var_4)))))));
    }
    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
    {
        var_35 *= ((/* implicit */signed char) (_Bool)1);
        var_36 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1439845923789967116LL)) ? (var_2) : (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (arr_37 [i_11] [i_11]))))));
        var_37 = ((/* implicit */unsigned int) min((var_37), (max((((/* implicit */unsigned int) ((signed char) arr_37 [i_11] [i_11]))), (((unsigned int) (unsigned short)25604))))));
        /* LoopSeq 3 */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            arr_42 [(_Bool)1] [(_Bool)1] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((unsigned short) 845508580U)), (((/* implicit */unsigned short) var_1)))))));
            var_38 = ((/* implicit */int) 5450950705698838667ULL);
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                arr_46 [i_13] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (3405700258U)))), (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) arr_45 [i_11] [i_11] [i_11] [i_11])))))) > (2603822896966429445ULL)));
                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28746)) & (((/* implicit */int) var_12))))), ((~(5450950705698838663ULL)))))) ? (((/* implicit */int) arr_43 [i_11] [2] [i_13])) : (((/* implicit */int) var_1)))))));
            }
            var_40 = ((/* implicit */short) ((unsigned int) (unsigned short)6038));
        }
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            arr_49 [3U] [i_11] [(unsigned char)6] = ((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */signed char) var_11)), (var_0)))), ((-(var_2)))));
            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((arr_45 [i_11] [i_11] [i_11] [i_14]), (((/* implicit */long long int) arr_39 [i_11] [i_11] [i_14]))))))) ? (((/* implicit */int) (short)21059)) : ((((+(((/* implicit */int) var_0)))) ^ (((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))))))));
            arr_50 [i_11] [i_14] = ((/* implicit */short) 3350016861524654030LL);
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                arr_55 [i_11] [i_15] = ((/* implicit */short) ((((/* implicit */int) arr_48 [(signed char)11] [i_14] [i_15])) == (((/* implicit */int) (short)31760))));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        {
                            var_42 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                            var_43 -= ((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (short)-24825))))));
                            arr_60 [i_11] [i_11] [i_14] [i_11] [6] [i_16] [i_17] &= (+(var_15));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */int) var_11)) : (arr_39 [i_18] [i_14] [i_11])));
                            var_45 = 13794977336516121045ULL;
                        }
                    } 
                } 
                arr_67 [i_11] [i_11] [i_11] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28754)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : ((-9223372036854775807LL - 1LL))));
                var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_38 [i_11] [i_14])) : (((/* implicit */int) (short)4254)))))));
            }
            for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                var_47 = ((/* implicit */short) ((((/* implicit */int) max((arr_56 [i_11]), (arr_53 [i_11] [i_14] [i_14])))) > (((((/* implicit */int) var_0)) & (((/* implicit */int) var_13))))));
                var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) var_1))));
                arr_70 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((signed char) var_1))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (18135536845762561762ULL))) : (((/* implicit */unsigned long long int) min((-1307076845566352541LL), (((/* implicit */long long int) var_15))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-38))))) ? (((/* implicit */int) arr_61 [i_20] [i_14] [i_11] [i_11])) : (((((/* implicit */_Bool) arr_63 [i_11])) ? (((/* implicit */int) arr_38 [i_11] [i_20])) : (((/* implicit */int) (short)-17020)))))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) 
        {
            var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (((var_11) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))))))))));
            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-117))))))))));
        }
    }
}
