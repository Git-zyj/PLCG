/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218663
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
    var_19 = ((((/* implicit */_Bool) var_10)) ? (2694398290U) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) / (max((var_3), (((/* implicit */unsigned int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [(unsigned char)19] &= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)177))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? ((+(9007199254740991ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_5)), ((signed char)-52))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_1] [i_2 - 1]), (min((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (arr_5 [i_2] [i_1])))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-17625)) : (1346934960)))) : (3812565479U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_11 [i_4] [i_3] [i_2 + 1] [i_1] [i_0]) : (((/* implicit */int) (unsigned char)227))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)22])) ? (482401816U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17625)))))) : (((unsigned long long int) 0U))));
                                arr_15 [i_4] [i_1] [7] [7U] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((int) arr_3 [i_3 + 1] [i_2 + 1]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_2 + 4])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_3 + 1] [i_2 + 2])));
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 2] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (arr_5 [i_0] [i_0])))))));
                                var_22 = ((((arr_5 [i_3 - 2] [i_2 + 3]) << (((9007199254740991ULL) - (9007199254740982ULL))))) % (max((4294967295U), (arr_5 [i_3 + 1] [i_2 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >> ((((~(3812565479U))) - (482401803U)))));
                                var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388607ULL)) ? (arr_11 [i_0] [i_1] [(signed char)6] [7] [(unsigned char)21]) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) (unsigned char)86)), (var_13))))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2 + 2] [i_2 + 3] [i_5] [i_6 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 22; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                                arr_26 [i_7] [i_1] [i_2 - 1] [(short)7] [i_8 + 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_1) ? (arr_18 [i_0] [(unsigned char)0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) arr_24 [19U] [i_1] [i_2 + 1] [i_7 - 3] [i_7 + 2] [i_8 - 2])) : (((/* implicit */int) ((short) arr_21 [i_0] [i_1] [i_8] [i_7] [i_8 - 4])))))));
                                arr_27 [i_0] [i_8] [i_2 + 4] [i_7 - 1] [i_8] |= (-(((((/* implicit */int) arr_22 [i_0] [i_1] [18ULL] [i_8])) << (((((((/* implicit */int) var_0)) + (26331))) - (29))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4294967295U)) ? (arr_23 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))))), (arr_23 [i_0] [i_0] [i_2 + 1] [i_2])))) ? (3757276412U) : (max((arr_25 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2]), (min((arr_10 [i_1] [i_1] [i_0] [i_1] [i_2 + 2] [i_1]), (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [21U]))))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_13)));
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (max((var_16), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned int) var_8)), (606227995U)))))))));
    var_29 = ((/* implicit */unsigned char) max((var_2), (((/* implicit */int) ((unsigned char) ((_Bool) var_2))))));
}
