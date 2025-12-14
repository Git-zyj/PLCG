/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215165
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
    var_14 = ((/* implicit */short) (+((-((+(var_7)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) (-(min((((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_10))))));
                    var_16 = ((/* implicit */signed char) var_10);
                }
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_13)) : (((var_10) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))));
                    var_18 = ((/* implicit */_Bool) var_4);
                }
                for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_19 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (var_9)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_19 |= ((/* implicit */signed char) var_12);
                            arr_22 [i_0] [16] [i_0] [i_4 - 1] [i_5 + 1] [i_5 + 1] [i_6] = ((/* implicit */short) var_3);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_9)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9)))));
                            arr_23 [i_0] [i_1] [i_4 - 1] [i_5 + 1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(var_13)))) : (((/* implicit */int) var_13))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_6))))) : ((+(var_7)))))) ? (min((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8192)))))))))));
                            arr_26 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (var_10)))))))) : (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) : (var_9)))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-27094))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9)))))) ? (max(((~(var_9))), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(9883282585062232255ULL)))) ? (min((var_4), (((/* implicit */unsigned int) var_5)))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_23 *= ((/* implicit */short) (-(((/* implicit */int) var_3))));
                            arr_29 [i_0] [i_8] [(short)18] [i_0] [i_8] [i_4 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8563461488647319342ULL)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)-10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))))));
                            var_24 = ((/* implicit */long long int) var_5);
                            var_25 = min((((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) 3025254758U)), (1LL)))))), (min((((/* implicit */unsigned long long int) min((var_13), (var_13)))), ((+(var_2))))));
                            var_26 -= ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
                        }
                        for (int i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            arr_33 [(unsigned short)6] [i_9] = ((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))))), (max((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))));
                            var_27 *= ((/* implicit */_Bool) var_9);
                            var_28 |= ((/* implicit */short) min((((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned long long int) var_3)), (var_9))))), (((/* implicit */unsigned long long int) var_1))));
                            arr_34 [i_0] [i_1] [i_1] [i_4 + 1] [i_9] [i_9 + 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((var_9), (((/* implicit */unsigned long long int) var_0))))))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */int) (~(max(((-(8563461488647319371ULL))), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7)))))) ? ((~((~(((/* implicit */int) var_11)))))) : ((+(((/* implicit */int) min((((/* implicit */short) var_1)), (var_8))))))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-((+((+(((/* implicit */int) var_6)))))))))));
                        arr_37 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_1))))) : (((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) : ((-((+(var_4)))))));
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1370097537U))));
                    }
                    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_41 [i_0] [i_1] [i_4] [i_11] = ((/* implicit */unsigned short) var_10);
                        var_33 = ((/* implicit */int) var_9);
                        arr_42 [i_0] [(_Bool)1] [(short)14] [i_4] [16] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                        var_34 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min((var_3), (((/* implicit */signed char) var_1))))) : ((-(((/* implicit */int) var_1))))))));
                    }
                    for (short i_12 = 1; i_12 < 19; i_12 += 3) 
                    {
                        var_35 *= ((/* implicit */short) var_2);
                        arr_45 [i_4] [(unsigned char)3] [(short)10] [i_12 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13197964578428452064ULL)))) ? (3524597382U) : (max((1269712537U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) (~(1LL)))) : (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))))))))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15697)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)1744))));
                        /* LoopSeq 3 */
                        for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_37 = ((/* implicit */_Bool) var_0);
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7))), (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))));
                        }
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            arr_53 [i_14] [i_1] [i_4] [i_12] [i_14] = ((/* implicit */unsigned short) var_1);
                            var_39 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_40 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))))));
                        }
                        var_42 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((var_10) ? (var_4) : (var_4)))) ? (((/* implicit */int) min((var_13), (var_6)))) : ((-(((/* implicit */int) (short)-25819))))))));
                    }
                    for (short i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            var_43 = ((/* implicit */int) var_11);
                            arr_60 [i_16] [i_16] [i_16] [2LL] [i_16] = ((((/* implicit */_Bool) (+((+(9223372036854775807LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) ? ((-(359059936))) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) var_1)))))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) (+(((var_6) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))))));
                            var_45 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) ? (max((((/* implicit */int) (short)6401)), (1257207032))) : ((~(((/* implicit */int) (short)-8))))));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))))) ? ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))))) : (max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))))));
                        }
                        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned short) (!(var_13)))), (min((((/* implicit */unsigned short) var_12)), (var_0)))))), ((-(((/* implicit */int) (_Bool)1)))))))));
                        var_48 = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_3)), (var_11))))))));
                        var_49 -= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)-31290)))), ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_0))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            {
                                arr_66 [i_0] [(signed char)11] [i_1] [(short)5] [i_18] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ? (((var_13) ? (max((((/* implicit */unsigned long long int) var_11)), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))) : (((var_6) ? (var_9) : (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))))))));
                                arr_67 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (short i_20 = 1; i_20 < 18; i_20 += 1) 
                {
                    var_50 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_8))))));
                    var_51 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((var_6) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_5))))) : (max((var_7), (((/* implicit */unsigned long long int) var_8))))))));
                }
                var_52 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_13)), (var_3)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(var_13))))))) ? (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (min((((/* implicit */unsigned long long int) var_8)), (var_9)))))));
            }
        } 
    } 
    var_53 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? ((-(var_2))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))) ? ((-(((/* implicit */int) max((((/* implicit */short) var_3)), (var_12)))))) : ((+(((/* implicit */int) var_10))))));
    var_54 = ((/* implicit */unsigned long long int) var_10);
}
