/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249822
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
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (((~(7465590847641534611ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_0])))))));
        var_19 |= ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = (+(arr_3 [i_1 - 1]));
        var_21 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))) : (var_13))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (10981153226068017004ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))) ? (((285332202U) % (1309577968U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) > (var_14)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_6 [i_2] = ((/* implicit */signed char) max(((+(arr_3 [i_2]))), (((/* implicit */long long int) (+(arr_5 [i_2]))))));
        arr_7 [i_2] = ((/* implicit */signed char) ((max((9223372036854775807LL), (((/* implicit */long long int) arr_1 [i_2])))) + ((-(var_4)))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */_Bool) (+(((unsigned long long int) var_15))));
                    var_23 = ((((/* implicit */int) (unsigned short)35529)) >> (((7465590847641534621ULL) - (7465590847641534601ULL))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(max((arr_1 [i_2]), (arr_1 [i_4]))))))));
                    arr_13 [i_2] [i_2] = (+(((/* implicit */int) min((max((((/* implicit */unsigned short) arr_10 [i_4] [i_3])), (var_15))), (((/* implicit */unsigned short) arr_12 [i_3 + 3] [i_2] [i_3 - 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned int) var_5);
                        arr_17 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                        arr_18 [i_4] [i_4] &= min((((/* implicit */long long int) ((short) var_3))), (var_11));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_21 [i_2] [i_6] [i_2] = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_5 [i_2])) : (var_14)))))));
            arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) ((max((arr_3 [i_2]), (arr_3 [i_2]))) / ((+(var_14)))));
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                var_25 *= (~(((1473928823U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_7 - 1] [i_7]))))));
                arr_27 [i_2] [i_6] [i_6] = ((/* implicit */_Bool) ((((long long int) var_0)) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                arr_28 [i_2] = min((((/* implicit */int) var_3)), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))))));
            }
            arr_29 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_26 = (~(((unsigned int) arr_19 [(_Bool)1] [i_2])));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        var_27 = (-((~((~(var_8))))));
                        var_28 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_20 [i_8]), (var_12)))), (((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_2 [i_10] [i_2]))))) - (var_9)))));
                    }
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            var_29 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_8)))))), (((((/* implicit */_Bool) var_1)) ? (arr_5 [2U]) : (arr_5 [4ULL])))));
            /* LoopSeq 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_43 [i_2] [(signed char)0] [i_12] [i_2] &= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                /* LoopSeq 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) arr_31 [i_13] [i_12] [i_2]);
                    arr_47 [i_2] [i_11] [i_12] [6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (4611686018427387904LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_24 [i_12] [i_11] [i_12]), (((/* implicit */unsigned short) min(((unsigned char)167), (((/* implicit */unsigned char) (_Bool)1)))))))))));
                    var_31 = ((/* implicit */unsigned long long int) var_11);
                }
                for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    var_32 = min((((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | (((int) 397089811U)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                    arr_50 [i_2] [i_12] [i_11] [i_2] = (~(((/* implicit */int) ((((/* implicit */int) arr_48 [i_2] [i_12] [i_14])) == (((/* implicit */int) var_3))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    arr_53 [i_2] = ((/* implicit */long long int) max((2794097735914758385ULL), (((/* implicit */unsigned long long int) 576443160117379072LL))));
                    var_33 = ((/* implicit */signed char) ((long long int) var_9));
                    var_34 ^= ((/* implicit */unsigned int) (!((_Bool)1)));
                    var_35 -= ((/* implicit */unsigned int) max(((~(arr_52 [i_2] [i_2] [i_2] [i_11] [i_12] [i_15]))), (max((var_11), (((/* implicit */long long int) arr_24 [i_15] [i_12] [i_11]))))));
                    var_36 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned int) (!((_Bool)1))))));
                }
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                arr_57 [i_2] [i_11] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_11))))));
                var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_2] [(unsigned short)7]))));
                arr_58 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-40)) & (((/* implicit */int) (unsigned short)25196))));
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (var_4)))), (max((((/* implicit */long long int) arr_40 [i_11] [i_11] [i_16 - 1])), (-1LL)))))))));
                var_39 = ((/* implicit */_Bool) min((1142130869), (((/* implicit */int) (_Bool)1))));
            }
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
        {
            for (unsigned char i_19 = 2; i_19 < 20; i_19 += 4) 
            {
                {
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) 3750340598U))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_6)))))))));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((2341333891U), (((/* implicit */unsigned int) (short)23387))))) == (((((/* implicit */_Bool) arr_63 [i_17] [i_19 - 2] [i_19 - 2])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_18] [i_19 + 1] [i_19 + 1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_42 -= ((/* implicit */unsigned char) (~(var_13)));
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned int) ((-3297461840300338112LL) | (((/* implicit */long long int) arr_64 [i_19 + 2]))));
                            var_44 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-4611686018427387902LL)));
                            arr_71 [i_17] [i_17] [i_18] [i_17] = 6010044532715902212LL;
                            arr_72 [i_18] [i_20] [(unsigned short)12] = var_4;
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_76 [i_18] = ((/* implicit */int) -2782326912680480949LL);
                            var_45 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_19] [i_18]))))));
                            var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_65 [i_19 - 2] [i_19 + 1] [i_19] [(unsigned char)3])) ? (arr_65 [i_17] [i_18] [i_20] [i_22]) : ((-9223372036854775807LL - 1LL))));
                        }
                        var_47 -= ((/* implicit */signed char) (~(var_7)));
                        arr_77 [i_17] [i_18] [i_18] [i_20] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 8535665219720607009LL)) == (2305843009213693951ULL)));
                        arr_78 [i_18] = ((/* implicit */long long int) arr_68 [i_19 - 1] [i_18]);
                    }
                    for (int i_23 = 2; i_23 < 21; i_23 += 3) 
                    {
                        arr_81 [i_17] [i_23] [i_18] [i_18] = ((/* implicit */long long int) (!(var_3)));
                        var_48 = ((/* implicit */long long int) max(((+(max((((/* implicit */unsigned long long int) var_10)), (var_6))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_8), (var_7)))))))));
                        var_49 ^= ((/* implicit */unsigned short) ((min((min((((/* implicit */long long int) -820946700)), (var_7))), (min((var_7), (-8301633000448152521LL))))) >= (((/* implicit */long long int) ((unsigned int) -8535665219720606999LL)))));
                    }
                    var_50 *= min((((/* implicit */unsigned long long int) ((6644107307530287008LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-34)))))), (min((((/* implicit */unsigned long long int) arr_74 [i_19] [i_18] [i_17])), ((-(arr_62 [i_17] [i_19 + 2]))))));
                }
            } 
        } 
    } 
}
