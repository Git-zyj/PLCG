/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211492
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_0 [i_0]))))) % (((/* implicit */int) arr_3 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (!(arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) max(((-(((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1])))))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_15))))) ? ((+(((/* implicit */int) arr_6 [i_1])))) : ((+(((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_2]))));
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2] [i_2]))))) == ((~(1714991341U)))));
        var_23 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2] [i_2]))));
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (((((/* implicit */int) var_6)) << (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_7 [i_3] [i_3]))))))))))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) & (arr_11 [i_3])))) : (var_7))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (((/* implicit */int) var_6)))) == ((+(((/* implicit */int) arr_14 [i_3] [i_4]))))))) : (((/* implicit */int) max((var_15), (arr_6 [i_3]))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_18 [i_3] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1])), (min((var_13), (var_5)))))) ? ((-(((/* implicit */int) arr_14 [i_5 - 1] [i_5 + 1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_5 - 2] [i_6])) && (((/* implicit */_Bool) (signed char)37)))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) var_0))))))))));
                        arr_20 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (7426362408265240715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_6])))))) ? ((~(((/* implicit */int) arr_13 [i_3] [i_4] [i_3])))) : (((((/* implicit */_Bool) (unsigned short)32)) ? (((/* implicit */int) (short)7236)) : (((/* implicit */int) var_16)))))));
                        arr_21 [i_3] [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_13 [i_4] [i_5 + 1] [i_5]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_5 - 1] [i_4])) ? (((/* implicit */int) arr_19 [i_4] [i_5 - 1] [i_5] [i_5 - 1])) : (((/* implicit */int) var_5)))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_16 [i_4])))) >= (((/* implicit */int) max((var_12), (var_12))))));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (signed char i_9 = 2; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_29 [i_3] [i_4] [i_4] [i_3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) > (var_17))))))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)53960))))) : (((((/* implicit */_Bool) ((short) arr_24 [i_4] [i_4] [i_8]))) ? (((/* implicit */int) arr_18 [(unsigned short)19] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_7]))))))));
                            arr_30 [i_4] = ((/* implicit */unsigned short) (-(((arr_23 [i_4] [i_4] [i_9 - 2]) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) arr_27 [8ULL] [i_4] [(signed char)20] [i_8] [(signed char)19])) | (((/* implicit */int) var_14))))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (var_8)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
        {
            arr_34 [i_3] [i_10] = ((/* implicit */_Bool) (unsigned short)6644);
            arr_35 [i_3] [i_3] [i_10 + 3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_7 [i_3] [i_3])))))))));
        }
        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            arr_38 [i_3] [i_11] = ((/* implicit */short) ((unsigned short) ((_Bool) var_18)));
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
            {
                arr_43 [i_11] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_44 [4ULL] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_11 + 1] [i_11]))))) >= (((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_16 [i_11])))) ? (((/* implicit */int) ((2605393419U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)29701))))))));
                var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [8ULL])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_11] [i_11]))) ? (arr_25 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 1]) : (((/* implicit */unsigned long long int) (-(0U))))))));
                arr_45 [i_3] [i_11] [i_3] [i_11] = ((/* implicit */signed char) (_Bool)1);
            }
            for (signed char i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) ((((/* implicit */int) arr_28 [i_3] [i_11] [i_11] [i_13])) <= (((/* implicit */int) arr_28 [i_3] [i_11] [i_11] [i_13]))))) : (((((/* implicit */_Bool) arr_37 [i_11 - 1] [i_11])) ? (((/* implicit */int) ((_Bool) var_17))) : (((/* implicit */int) (_Bool)1))))));
                var_32 = ((/* implicit */unsigned short) ((((_Bool) arr_15 [i_11 - 1] [i_11 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_11] [i_11] [i_13])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_3] [i_11] [i_11]))) > (var_8)))))))));
            }
        }
        for (short i_14 = 2; i_14 < 19; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_33 &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_47 [i_14 + 1] [i_14 + 1] [i_3])) + (((/* implicit */int) arr_46 [i_14 + 3] [i_14 + 1] [i_14] [i_15])))));
                arr_55 [i_3] [i_3] [i_14 + 2] [i_3] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [(unsigned short)2] [i_15]))))) * ((+(1802484164U))))))));
            }
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                arr_58 [i_16] [i_14 + 1] [i_16] = (_Bool)1;
                /* LoopSeq 2 */
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_14 + 2] [i_14]))));
                        arr_63 [i_3] [i_3] [i_14] [i_16] [i_3] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18))))) && (((_Bool) (_Bool)1))));
                        arr_64 [i_3] [i_16] [i_3] [i_16] [i_18] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_14 - 2] [i_14 - 1] [i_14 - 2] [i_17]))));
                    }
                    arr_65 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4601)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)40945))));
                    var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                    var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))));
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((arr_28 [i_14] [i_17] [i_14 + 3] [i_16]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_28 [i_3] [i_17] [i_16] [i_17])))))));
                }
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_18 [i_3] [i_14] [i_16] [i_14] [i_16]))))) ? (((/* implicit */int) arr_68 [i_16] [i_16] [i_16] [i_19])) : (((/* implicit */int) var_16))));
                    var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_14 + 2] [i_14 - 1])) && (((/* implicit */_Bool) arr_12 [i_14 + 3] [i_14 - 1]))));
                }
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) arr_13 [i_3] [i_3] [(unsigned short)14]))));
            }
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((252201579132747776ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_36 [i_14 + 1] [i_14 + 1]))))));
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                for (unsigned short i_21 = 1; i_21 < 18; i_21 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned short) (signed char)-24))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (min((2492483131U), (((/* implicit */unsigned int) var_18))))))));
                        var_43 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)0)))));
                    }
                } 
            } 
            arr_75 [i_3] [i_3] = ((/* implicit */unsigned int) ((short) max((arr_73 [i_3] [(_Bool)1] [i_14] [i_14 + 3]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_67 [12U])) : (((/* implicit */int) arr_23 [i_3] [i_3] [i_3]))))))));
        }
        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_8))) ^ (((/* implicit */int) max((arr_16 [i_3]), (arr_16 [i_3]))))));
    }
    var_46 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_2)) << (((var_8) - (11091902494578190286ULL))))), ((-(((/* implicit */int) ((((/* implicit */int) (signed char)64)) <= (((/* implicit */int) (signed char)-38)))))))));
    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((unsigned short) (short)14704)))))) : (2387476565429857563ULL)));
}
