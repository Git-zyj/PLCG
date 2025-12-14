/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33300
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
    var_10 = (-(var_9));
    var_11 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_5)), (var_0))) & (((/* implicit */long long int) max((var_6), (((/* implicit */int) ((unsigned short) var_1))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) min((((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_1)))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_3 [i_0] [i_0])) << (((arr_3 [i_0] [i_0]) - (391925523675047478ULL)))))) && (((/* implicit */_Bool) (~(5113005461476692065LL)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) 5113005461476692063LL))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-16738))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_17 [i_0] [6U] [i_2] [6U] [(_Bool)1] = ((((/* implicit */unsigned long long int) max((arr_8 [i_1] [i_1 + 3]), (((/* implicit */long long int) arr_9 [i_0] [i_1 - 2] [i_0] [(signed char)14]))))) - (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_0] [i_3]))))));
                            var_14 ^= ((/* implicit */long long int) 1610612736);
                            arr_18 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((unsigned int) 1152780767118491648ULL));
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)110))))) - ((+(1462383148310544632ULL))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned short) min(((+(17293963306591059968ULL))), (((/* implicit */unsigned long long int) max((131071), (((/* implicit */int) var_3)))))));
            arr_20 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(671610956U))) << (((min((-1610612737), (((/* implicit */int) var_5)))) + (1610612753)))))) ^ (640063298142266558ULL)));
        }
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            var_16 += ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [i_0])))))) <= (max((var_2), (((/* implicit */unsigned int) (_Bool)1)))))))));
            var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) arr_23 [i_0] [i_5] [i_5]))))) ? (((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) 17293963306591059967ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (3068710781847744503LL)))));
            var_18 ^= ((/* implicit */unsigned short) max((((arr_2 [i_0]) / (arr_2 [i_0]))), (max((arr_2 [i_5]), (arr_2 [i_0])))));
        }
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((var_9) >> (((((/* implicit */int) arr_27 [0U] [i_6] [i_0])) + (155))))))));
            var_20 = ((/* implicit */short) -1610612737);
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (_Bool)1))));
        }
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        arr_36 [i_0] [i_7] [i_7] [i_9] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_7] [i_0] [i_7]))), (0ULL))))));
                        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 3068710781847744506LL)) ? (1137140104990729763ULL) : (((/* implicit */unsigned long long int) arr_11 [i_9])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0])))))));
                        var_23 = ((/* implicit */unsigned char) min((17309603968718821853ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1137140104990729763ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (max((var_0), (((/* implicit */long long int) arr_30 [i_0] [i_0])))) : (min((((/* implicit */long long int) var_7)), (8243675651068769535LL))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-30)) == (((/* implicit */int) max(((short)2091), (((/* implicit */short) (_Bool)1)))))))) : ((~(((/* implicit */int) min((arr_33 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9]), (var_5))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 12; i_10 += 2) 
    {
        var_25 += ((/* implicit */long long int) (~(((/* implicit */int) (short)16738))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_11] [i_10 + 2] [i_10]))));
            var_27 = ((/* implicit */long long int) 177887119);
            /* LoopSeq 1 */
            for (unsigned int i_12 = 2; i_12 < 13; i_12 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_11] [i_10 - 1] [i_12 + 1])) - (((/* implicit */int) arr_27 [i_11] [i_10 + 1] [i_12 + 1]))));
                var_29 |= ((/* implicit */short) var_3);
                var_30 |= ((/* implicit */long long int) ((unsigned short) arr_6 [i_10 - 2]));
            }
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (-1131163737261784820LL) : (arr_40 [i_10] [i_10] [i_11])));
            var_32 = 536870911ULL;
        }
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                var_33 = ((/* implicit */short) (signed char)-119);
                /* LoopSeq 1 */
                for (int i_15 = 2; i_15 < 13; i_15 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */int) ((short) var_3))) >> (((((((/* implicit */int) arr_12 [i_10] [i_13] [i_14] [i_15])) ^ (((/* implicit */int) var_3)))) - (23281)))));
                        arr_57 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_15] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)16754))) / (arr_50 [i_13] [i_13] [i_10 - 2])));
                        var_35 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) (_Bool)1)));
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_10 - 2] [i_10 - 2] [i_13] [i_15 + 1])) / (((/* implicit */int) arr_51 [i_10 - 1] [6LL] [i_10 - 1] [i_10])))))));
                    }
                    for (signed char i_17 = 2; i_17 < 11; i_17 += 4) 
                    {
                        var_37 ^= ((/* implicit */_Bool) ((arr_35 [i_15 + 1] [i_15] [i_17 + 3]) ^ (((/* implicit */unsigned int) arr_23 [i_15 - 2] [i_17 + 3] [i_14]))));
                        var_38 = ((/* implicit */signed char) (+(arr_13 [i_15] [i_17 + 2] [i_17] [(unsigned char)8] [i_17 + 2])));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned int) 4914124613896872435ULL);
                        var_40 = ((/* implicit */unsigned int) ((unsigned short) (signed char)30));
                        var_41 = ((/* implicit */short) arr_16 [i_10 + 1] [i_13] [8LL] [i_15] [i_18]);
                    }
                    var_42 = ((/* implicit */unsigned int) (((+(var_1))) + (((/* implicit */unsigned long long int) var_7))));
                }
                arr_64 [i_10] [i_10 + 2] [i_10] = (!(((/* implicit */_Bool) var_0)));
            }
            for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned int) arr_16 [i_10 - 2] [i_13] [i_10] [i_20] [i_20]);
                            arr_74 [i_20] [i_13] [i_20] [i_13] [i_20] [i_13] = ((/* implicit */int) ((70368739983360LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_75 [i_10 - 2] [i_13] [i_20] [i_20] [i_10 - 2] = ((/* implicit */_Bool) var_0);
                            arr_76 [i_10] [i_13] [i_19] [i_20] [i_20] = ((/* implicit */unsigned int) ((long long int) var_7));
                        }
                    } 
                } 
                var_44 |= ((/* implicit */signed char) ((var_4) * (((/* implicit */unsigned long long int) 1756729524))));
                var_45 = ((/* implicit */short) ((int) arr_8 [i_10 - 2] [i_19]));
            }
            arr_77 [i_10] [i_10 + 2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [i_10 - 2])) ? (arr_62 [i_10 + 1]) : (var_9)));
        }
        var_46 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_47 = (-((-(arr_37 [i_10]))));
        var_48 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-261)) ? (arr_16 [i_10] [i_10 + 2] [i_10 + 2] [i_10] [i_10]) : (((/* implicit */unsigned long long int) var_7)))) == (((/* implicit */unsigned long long int) arr_61 [i_10] [i_10 + 1] [i_10 + 2] [i_10] [i_10] [i_10 + 2]))));
    }
    var_49 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((unsigned short) var_7))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) && ((_Bool)1))))));
}
