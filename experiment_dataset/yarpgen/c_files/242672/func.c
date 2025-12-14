/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242672
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2])) : (arr_1 [i_0 + 1]))) : (((arr_1 [i_0 + 1]) ^ (((/* implicit */int) arr_0 [i_0 + 1])))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0 - 1]);
                    var_17 = ((/* implicit */unsigned char) max((var_17), ((unsigned char)171)));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_18 = ((((((((/* implicit */_Bool) 1429885348920006190LL)) ? (((/* implicit */unsigned int) 2147483646)) : (4294967291U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) (+(var_8))))) : (arr_1 [i_0]));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((var_13) | (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_4])), ((+(arr_1 [i_3])))))))))));
                        var_20 = ((/* implicit */int) ((((_Bool) (~(var_3)))) ? (arr_4 [i_0] [i_1] [i_3] [i_4]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_4] [i_3] [i_1] [i_0])))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        arr_16 [i_0 - 1] [i_1] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */_Bool) var_13);
                        var_21 = ((/* implicit */long long int) ((((_Bool) ((unsigned char) (-2147483647 - 1)))) ? ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [8U])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (short)-20556)) : (((/* implicit */int) (unsigned short)65517))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))))));
                        var_22 = ((/* implicit */unsigned short) (((-(arr_5 [i_0 - 1] [i_0 + 2] [i_0]))) > (((((/* implicit */int) arr_15 [i_1] [i_0 + 1] [(short)4])) & ((+(((/* implicit */int) var_4))))))));
                    }
                    for (int i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (signed char)-110);
                            var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)969))))));
                            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_6 + 3] [i_0 - 1] [i_6 + 3]))));
                        }
                        arr_23 [i_0 + 2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-940)) | (((/* implicit */int) ((((/* implicit */_Bool) (+(474737181)))) || (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-23)), (arr_7 [i_3] [1ULL] [i_0])))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) <= (((/* implicit */int) var_6))));
                        arr_28 [i_0] [i_0] [i_3] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (529092284U) : (((/* implicit */unsigned int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
                    }
                    for (int i_9 = 3; i_9 < 8; i_9 += 2) 
                    {
                        arr_31 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) min((arr_30 [i_0 - 1] [i_1] [i_3] [i_9]), (arr_19 [i_0 - 1] [i_1] [i_1] [i_3] [i_9] [i_9 + 2]))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_12)), (arr_19 [i_10] [i_9] [i_3] [i_1] [i_0] [i_0])))), ((-(arr_27 [i_0] [i_0] [i_3])))))) ? (((/* implicit */unsigned int) -1325391937)) : (max((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_9 + 1] [i_9] [(unsigned short)8] [i_9 + 1])))))))));
                            var_28 = ((/* implicit */unsigned short) (((-(((((/* implicit */int) var_12)) - (((/* implicit */int) (_Bool)1)))))) - ((+(((/* implicit */int) var_7))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 3; i_11 < 9; i_11 += 4) 
                        {
                            arr_37 [i_0] [i_1] [i_3] [i_0] [i_11] [5U] = ((/* implicit */short) arr_24 [i_0] [i_11 + 2] [i_9 + 1] [i_3] [i_1] [i_0]);
                            var_29 = ((/* implicit */unsigned char) (+(1144496759U)));
                        }
                    }
                    for (unsigned char i_12 = 4; i_12 < 10; i_12 += 3) 
                    {
                        arr_41 [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) max((arr_12 [i_12 - 4] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */short) var_6))))), (arr_32 [i_0 + 1] [i_12] [i_12 - 3] [i_0] [i_12 - 4])))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((int) arr_14 [i_0] [i_1] [i_3] [i_12 - 2] [i_12]))), (arr_4 [i_1] [i_1] [i_3] [i_12 - 2]))), (((/* implicit */unsigned long long int) ((short) (unsigned short)252))))))));
                    }
                    arr_42 [i_0 - 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_1] [i_0 + 2]))) >= (var_8))));
                    var_31 *= ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_19 [i_0] [i_1] [i_0 + 1] [i_0 + 2] [(unsigned short)0] [i_1]))))));
                    var_32 = ((/* implicit */long long int) min((arr_15 [i_0] [i_3] [i_3]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) == (max((3765875003U), (2739053101U))))))));
                }
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) var_3))));
                    arr_47 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)32607)) > (((/* implicit */int) arr_30 [i_13] [i_13] [i_1] [i_0])))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))) / (3765875012U)))));
                    arr_48 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 - 1] [i_0]))));
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 3; i_15 < 7; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((unsigned char) arr_3 [i_15 - 2] [i_0 + 2])))));
                        var_34 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) var_9)) | (var_13))));
                        var_35 = ((/* implicit */_Bool) ((unsigned int) arr_5 [i_15 + 2] [i_0 + 2] [i_0]));
                        /* LoopSeq 2 */
                        for (int i_16 = 1; i_16 < 10; i_16 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)125)) ^ (((/* implicit */int) arr_52 [i_0] [i_1] [i_14] [i_15 + 2] [i_15]))))));
                            var_37 = ((/* implicit */short) (+(arr_40 [i_16 - 1] [i_16 - 1])));
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 3) 
                        {
                            var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_1])) && (((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0] [i_0])))))) : (((764659900U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_17 - 1] [i_14] [i_1] [i_0 - 1])))))));
                            arr_60 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)72))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 2; i_18 < 10; i_18 += 1) 
                        {
                            var_39 *= ((/* implicit */unsigned long long int) arr_30 [i_0 - 1] [i_1] [i_14] [i_15 + 4]);
                            arr_63 [i_18] [i_1] [6] [i_15 + 1] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned char)125);
                        }
                        for (int i_19 = 1; i_19 < 9; i_19 += 1) 
                        {
                            var_40 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != (arr_27 [i_0 + 1] [(unsigned char)2] [i_15 - 2]))))));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_19 + 2] [i_0 - 1])) ^ (((/* implicit */int) var_6))));
                            var_42 = ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]));
                        }
                    }
                    for (short i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (_Bool)1))));
                        arr_71 [i_0] [i_0] [(unsigned short)9] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)-4829)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_0 + 2] [i_1] [i_14]))))));
                    }
                    var_44 = ((/* implicit */unsigned char) var_3);
                }
            }
        } 
    } 
    var_45 = var_3;
    var_46 = ((/* implicit */unsigned short) 15601473795878512317ULL);
    var_47 = ((/* implicit */unsigned char) var_3);
    var_48 = ((((/* implicit */int) var_6)) > (((/* implicit */int) ((unsigned char) (+(var_10))))));
}
