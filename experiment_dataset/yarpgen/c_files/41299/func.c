/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41299
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
    var_12 += ((/* implicit */long long int) (+(((unsigned int) var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = min((17034830642812923346ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */signed char) arr_8 [i_0] [10] [i_3]);
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_5 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((signed char) var_4)))))) ? ((~(((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_5] [i_6])))) : ((-(((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                var_16 += ((/* implicit */unsigned int) var_4);
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_21 [(_Bool)1] [i_1] [i_2] [i_1] [i_6]), (((/* implicit */unsigned char) var_4)))))) + ((((_Bool)1) ? (((var_9) + (((/* implicit */long long int) arr_2 [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_27 [i_0] [i_8] [i_2] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_25 [i_8 + 4] [14U] [i_2] [i_8])), (var_1))), (max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_22 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 1531892743305744868ULL)))))))));
                                arr_28 [i_0] [i_8] = ((/* implicit */_Bool) var_2);
                                var_18 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((long long int) (unsigned char)215))) ? (((var_3) ? ((-9223372036854775807LL - 1LL)) : (arr_4 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((int) arr_6 [i_2] [i_2] [i_2]))))));
                                arr_29 [i_8] [i_8] [i_2] [i_2] [i_8] [i_0] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_25 [i_0] [i_1] [i_9] [i_0]))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((2129863207U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) + (63256973)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) arr_43 [i_1] [i_11] [i_10] [i_1] [i_0]);
                            var_22 -= ((/* implicit */unsigned long long int) var_9);
                            arr_44 [i_0] [i_1] [i_10] [i_1] [i_12] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-67)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75))))) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_45 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_14 [i_11] [i_11] [i_10] [1LL] [(_Bool)1] [i_11] [i_1]))) : (((((/* implicit */long long int) var_6)) | (arr_8 [i_1] [i_1] [i_1])))));
                        var_23 = ((/* implicit */_Bool) arr_2 [i_0]);
                        arr_46 [i_0] [(_Bool)1] [i_1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_39 [(unsigned char)21] [i_10] [i_11]);
                        arr_47 [i_0] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-61)) < (((/* implicit */int) (signed char)-5))));
                    }
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_1]);
                        var_25 |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) <= (16795579312011695844ULL))))));
                    }
                    for (unsigned int i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_13 [i_14]);
                        var_27 &= ((/* implicit */unsigned int) ((signed char) var_6));
                        arr_54 [i_14] = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */int) arr_40 [i_14 + 1] [i_14 + 1] [i_14] [i_14])) : (((/* implicit */int) var_0))));
                        var_28 = (~((((_Bool)0) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((((((/* implicit */_Bool) var_8)) ? (arr_35 [i_0] [i_1] [i_10] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_24 [i_0]))))))))));
                        arr_57 [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned long long int) arr_23 [i_1]);
                        var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                    }
                }
                for (signed char i_16 = 3; i_16 < 22; i_16 += 4) 
                {
                    var_31 = ((/* implicit */_Bool) arr_9 [i_16] [i_1] [i_1] [i_0] [i_0]);
                    arr_60 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_35 [i_0] [i_1] [i_16] [i_0]);
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_11)) ? (18446744073709551598ULL) : (arr_0 [i_0])))) ? ((-((+(9034083265039329077LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_33 ^= ((/* implicit */signed char) (-((-(arr_38 [i_0] [i_1] [i_16] [i_16])))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (signed char)107))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (var_0)));
                        arr_64 [i_17] [i_17] = ((/* implicit */signed char) var_1);
                    }
                }
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) var_1);
    var_37 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 8045244744334012119LL)), (2ULL)));
}
