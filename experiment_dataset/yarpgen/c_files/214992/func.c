/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214992
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
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_12 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_4 [i_0 - 1] [i_0 - 3])));
                        var_12 = ((/* implicit */signed char) ((unsigned int) arr_11 [i_0 - 1]));
                    }
                    for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        arr_16 [i_0 - 1] [i_1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17231573835714039429ULL)) ? (((/* implicit */unsigned long long int) 3429146099795530525LL)) : (17231573835714039429ULL)));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17231573835714039429ULL)) ? (arr_4 [i_0 - 2] [i_2 + 1]) : (arr_4 [i_0 - 2] [i_2 + 1])));
                        arr_17 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((arr_13 [i_0] [i_0 + 1] [i_0]) ? (((((/* implicit */_Bool) 1215170237995512173ULL)) ? (arr_2 [i_0] [i_0]) : (17231573835714039417ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18715)))));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_25 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2301339409586323456ULL)) ? (((/* implicit */int) arr_1 [i_0] [i_6])) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                            arr_26 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-18685))));
                            arr_27 [i_0] [i_0] [i_2] [(unsigned short)4] = ((int) (short)10314);
                        }
                        arr_28 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 - 3] [i_2 - 1] [i_2]))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_4 [i_0] [i_0])) : (var_6)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            arr_36 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18677)) | (((/* implicit */int) (unsigned short)65535))))) ? (arr_5 [i_2 + 3]) : (((((/* implicit */_Bool) arr_22 [i_8] [i_1] [i_2] [i_1] [i_0])) ? (1215170237995512187ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24974)))))));
                            arr_37 [i_7] [i_0] [i_0] [i_0] [i_8] = ((arr_34 [i_0] [i_0] [i_2 - 1] [i_8] [i_2 + 3] [i_2] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        }
                        for (long long int i_9 = 2; i_9 < 20; i_9 += 3) 
                        {
                            var_14 = ((arr_18 [i_9 + 1] [i_9 + 1] [i_9]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_0 + 1] [i_0]))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4593)) ? (1613099479182652460LL) : (8242694267816151863LL)))) ? (((((/* implicit */_Bool) (short)24974)) ? (1613099479182652482LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18715))))) : (-903309312611836974LL)));
                        }
                        for (unsigned int i_10 = 2; i_10 < 20; i_10 += 1) 
                        {
                            arr_42 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(_Bool)1])) ? (((/* implicit */long long int) -2147483643)) : (-8870928095501053241LL)))) ? (arr_18 [i_2 - 3] [i_2 + 1] [i_2 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_7] [i_0])) ? (1613099479182652460LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))))));
                            arr_43 [i_1] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) arr_8 [i_0]))));
                            arr_44 [i_0] [i_1] = ((/* implicit */signed char) ((-5209432556010362032LL) | (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1])))));
                            arr_45 [i_0] [i_7] [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_0] = (~(((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_2 - 2] [i_10 - 1])));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 3; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            arr_49 [i_0] [i_1] [i_0] [i_2 + 3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)77)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)10314))))) - (((/* implicit */long long int) (~(var_11))))));
                            var_16 = ((/* implicit */unsigned short) arr_6 [i_0]);
                        }
                        for (unsigned short i_12 = 3; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            arr_53 [i_0] [i_0] [i_1] [i_2 - 2] [i_7] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_12 + 1] [i_0 - 2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55900)))));
                            var_17 = ((((/* implicit */_Bool) arr_47 [i_1] [i_2 - 1] [i_1] [i_2 + 2] [i_2 + 2] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10315))) : ((~(var_2))));
                        }
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            arr_58 [i_0] [i_1] [i_2 + 3] [i_0] [i_2 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(unsigned short)15] [i_0 - 4] [i_7] [i_13] [i_13] [i_13] [i_13])) ? (arr_34 [i_0] [i_0 - 1] [i_13] [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) var_0))));
                            arr_59 [i_0] [i_0] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((arr_10 [i_0 - 4] [i_0 - 4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1]))) : (var_2)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)9040));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_7] [i_14]))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32096))) : (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 4])))))));
                            arr_63 [i_0 - 1] [i_1] [i_0] [i_7] [i_7] [i_14] [i_14] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (((((/* implicit */_Bool) (short)0)) ? (var_2) : (((/* implicit */unsigned long long int) var_8)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (((((_Bool)1) ? (arr_55 [(short)5] [i_1] [i_2 + 3] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                var_21 = ((/* implicit */unsigned short) 15150267649994901579ULL);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned short)3]))) : (9608882670829992167ULL)))) ? (((/* implicit */int) arr_40 [i_0 - 2] [i_2 + 1] [i_0] [i_15])) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_2 - 1] [i_2 - 1])) ? (var_2) : (1215170237995512216ULL)));
                    var_24 = ((/* implicit */_Bool) (+(((var_11) - (((/* implicit */int) (unsigned short)54486))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65517))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0 - 3] [i_0] [i_0] [i_0])) | (((/* implicit */int) var_9))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((long long int) (unsigned short)16376)), (max((((/* implicit */long long int) (unsigned short)65520)), (var_10)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 925647042U)) ? (var_8) : (3521411886U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) var_11)), (((/* implicit */unsigned short) var_4))))))));
    var_28 = ((/* implicit */signed char) min((((min((5065459564727202615ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) >> (((var_6) + (6528778984208617612LL))))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9371665478106312016ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_50 [i_17] [i_17] [i_17] [i_18 + 1] [i_18 + 1] [i_18 + 1])))) >= (((arr_18 [i_17] [i_17] [i_17]) | (((/* implicit */unsigned long long int) var_10)))))))) : (((((/* implicit */_Bool) max(((unsigned short)19), (((/* implicit */unsigned short) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_17] [i_17]))) : (((((/* implicit */_Bool) arr_56 [i_17] [i_18 + 1] [i_18 + 1])) ? (var_2) : (arr_5 [i_17])))))));
                var_30 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_8 [i_17]))))));
                arr_73 [i_17] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_17] [i_17] [i_18])) ^ (((/* implicit */int) ((short) -8538177354109121667LL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_71 [i_17] [i_18] [i_17]))))) : (min((-7420766488126055697LL), (-1005828287072403479LL)))));
                arr_74 [i_17] [i_17] = ((/* implicit */short) ((unsigned short) 14117464060798689551ULL));
                var_31 = (i_17 % 2 == 0) ? (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_1 [i_17] [i_18])) << (((((/* implicit */int) arr_11 [i_18 + 1])) - (11830)))))))) : (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_1 [i_17] [i_18])) << (((((((/* implicit */int) arr_11 [i_18 + 1])) - (11830))) - (4))))))));
            }
        } 
    } 
}
