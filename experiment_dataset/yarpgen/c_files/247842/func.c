/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247842
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_12 &= ((/* implicit */long long int) (((~(((/* implicit */int) arr_0 [(_Bool)1] [i_0])))) & (((var_7) | (-726141269)))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_6))))));
                        var_15 = (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22954))) : (var_1))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) / (((unsigned long long int) arr_7 [(unsigned char)8] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                {
                    arr_17 [i_0] [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_0] [i_4] [i_0])))) || (((/* implicit */_Bool) ((arr_12 [i_0] [i_4] [i_5]) + (((/* implicit */unsigned long long int) 2121633709)))))));
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) var_2);
                        var_18 = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), ((+(arr_20 [i_0] [2] [i_5] [i_6] [i_7])))));
                            var_20 ^= ((/* implicit */short) ((int) ((short) arr_10 [i_4] [i_5] [i_6] [(unsigned short)16])));
                            var_21 = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_5] [i_6] [i_7]);
                            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)15))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
                        {
                            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_8 + 2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (arr_4 [i_0] [i_4] [12])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20483))) >= (var_6))))));
                            arr_27 [i_0] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */unsigned short) (signed char)68);
                        }
                        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) (-(var_1)));
                            var_25 = ((/* implicit */unsigned int) var_9);
                        }
                        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_5] [i_4]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_4))));
                        var_28 ^= (+(((/* implicit */int) arr_1 [i_4] [i_10])));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_11] [i_11 + 2] [i_12]);
                            var_30 = ((((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_4] [i_12])))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) * (var_0))));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 19; i_13 += 2) 
                        {
                            arr_42 [i_0] [i_11] [i_5] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */short) (~(((int) var_6))));
                            var_31 = ((/* implicit */short) (unsigned char)102);
                            var_32 &= ((/* implicit */short) (~(((/* implicit */int) var_8))));
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_7))));
                            var_34 = ((/* implicit */short) (_Bool)0);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0 + 1] [i_5 + 3] [i_5 - 2] [i_11]))) & (var_5))))));
                            var_36 = var_1;
                        }
                        var_37 += ((/* implicit */_Bool) ((long long int) arr_24 [i_0] [i_4] [i_4] [i_5] [i_11]));
                        arr_47 [i_0] [i_4] [i_5] [i_11] = ((/* implicit */short) (signed char)-27);
                    }
                    for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) min((var_38), (((short) var_3))));
                        var_39 = ((/* implicit */int) var_8);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */int) (+(((long long int) var_7))));
                        arr_52 [i_0] [i_5] [i_4] [i_0] = ((/* implicit */signed char) (short)11627);
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            arr_56 [i_0] [i_4] [i_4] [i_4] [i_0] [i_17] [i_18] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (arr_31 [i_17]) : (1461105954763401925LL))));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_10 [i_4] [i_5] [i_17] [i_0])))) && (((/* implicit */_Bool) arr_7 [i_0] [i_5 - 1] [i_5 + 3]))));
                        }
                    }
                    var_42 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) (short)-20483)))));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (~(arr_37 [i_0] [(_Bool)1] [i_5 + 2]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_19] [i_19] [i_19] [i_19] [8ULL])))))));
        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_19] [i_19] [i_19] [i_19]))))))))));
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 16; i_20 += 4) 
        {
            for (short i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                for (signed char i_22 = 0; i_22 < 16; i_22 += 2) 
                {
                    {
                        arr_68 [i_19] [i_21] [i_22] = ((arr_4 [i_19] [i_20] [i_19]) <= (arr_4 [i_19] [i_21] [i_19]));
                        var_46 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (short)-13413)) + (((/* implicit */int) arr_0 [i_19] [i_22])))));
                        arr_69 [i_19] [i_19] [i_21] [i_22] [i_22] = ((/* implicit */unsigned short) ((short) (-(var_0))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_24 = 0; i_24 < 22; i_24 += 4) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (signed char i_26 = 0; i_26 < 22; i_26 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_27 = 2; i_27 < 20; i_27 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (short)-24398))));
                            arr_82 [i_27] [i_25] [i_25] [i_24] [i_25] [i_23] = ((/* implicit */short) var_6);
                            arr_83 [i_27] [i_26] [i_25] [i_25] [i_24] [i_23] = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_81 [i_27 + 1] [i_27 + 2] [i_27] [i_27] [i_27] [i_27]))))), (((short) ((unsigned long long int) arr_78 [i_23] [i_26])))));
                        }
                        for (long long int i_28 = 2; i_28 < 20; i_28 += 1) /* same iter space */
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_79 [i_25] [i_28])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-7011794563463204093LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) : (((int) arr_81 [i_23] [i_24] [i_25] [i_26] [i_26] [i_28]))));
                            var_49 = (~(((((/* implicit */_Bool) (short)-20464)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_76 [i_24] [i_25] [i_26])))) : (max((((/* implicit */int) (signed char)-65)), (var_7))))));
                        }
                        for (long long int i_29 = 2; i_29 < 20; i_29 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_10)))));
                            var_51 = arr_75 [i_25] [i_24];
                        }
                        /* LoopSeq 2 */
                        for (int i_30 = 0; i_30 < 22; i_30 += 4) /* same iter space */
                        {
                            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)13426))))), (384564000786365610ULL))))))));
                            var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3048156162U)), ((+(arr_84 [i_23] [i_24] [i_25] [i_25] [i_26] [i_30]))))))));
                        }
                        for (int i_31 = 0; i_31 < 22; i_31 += 4) /* same iter space */
                        {
                            var_54 = ((/* implicit */int) arr_71 [i_25]);
                            var_55 = ((/* implicit */int) (-(min((var_0), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((2121633709) - (2121633709))))))))));
                        }
                        var_56 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((var_0) * (arr_86 [i_23] [i_23] [i_23] [i_24] [i_25] [i_26] [i_26]))))))));
                    }
                } 
            } 
        } 
        var_57 = ((/* implicit */short) ((int) 1018166160));
    }
}
