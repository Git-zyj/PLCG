/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48632
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
    var_16 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((8272576881287004752LL), (((/* implicit */long long int) var_15))))) ? (((var_13) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (min((arr_1 [i_0]), (((/* implicit */int) (_Bool)1)))))), ((~(2147483625)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) var_15);
                                var_18 = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) -8272576881287004772LL))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
                        arr_16 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0] [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) ? (arr_10 [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_10 [i_5] [i_5] [i_2] [i_1] [i_0])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) arr_2 [i_2] [i_1] [i_0]);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            var_22 += ((/* implicit */unsigned char) (((~(max((8272576881287004778LL), (((/* implicit */long long int) arr_3 [i_0] [(signed char)13])))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_12 [i_0] [i_2] [i_2] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_22 [7LL] [i_1] [i_0] [i_6] [i_2] [i_2 + 1]))))) : (((/* implicit */int) arr_15 [i_1] [(short)3] [i_0] [(_Bool)1] [i_7])))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [12U] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (min((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_6])) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (short)16)))))) : (var_5))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_9)))) - (max((((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 2] [i_2])), (2147483602))))))));
                            var_24 = ((((/* implicit */int) var_8)) - (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_8] [i_6] [i_8])), (8796093022207ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))))))))));
                            var_25 = ((/* implicit */long long int) var_1);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_26 += ((/* implicit */unsigned long long int) (_Bool)1);
                            var_27 = ((/* implicit */signed char) min(((-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_14))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_9]))))), (arr_13 [i_0] [i_1] [i_6] [i_9]))))));
                            var_28 = ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_9)) + (((/* implicit */int) (short)32683)))))) ^ (max((((/* implicit */int) ((arr_4 [i_0] [i_2 + 1]) != (((/* implicit */unsigned int) var_12))))), ((-(((/* implicit */int) arr_21 [(short)12] [i_0]))))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-99))))), ((-(((/* implicit */int) arr_13 [i_9] [i_6] [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : ((+(arr_7 [i_2 + 1] [i_0] [i_2 - 1] [i_2])))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                        {
                            var_30 += ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                            arr_32 [i_0] [(unsigned short)12] [i_0] [i_0] [(unsigned short)3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((var_12) <= (var_3)))))), (((((/* implicit */_Bool) min((4503530907893760ULL), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_9)), ((signed char)-4)))) : ((~(arr_31 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] [i_10])))))));
                        }
                        var_31 = ((/* implicit */long long int) var_5);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) * (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned short)2])))))))) & (max((((var_2) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_6]))))), (((/* implicit */unsigned long long int) max((var_12), (arr_18 [i_0] [12] [i_0] [i_0]))))))));
                    }
                }
                for (long long int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    var_33 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [(_Bool)1])))) : (((((/* implicit */int) var_0)) << (((/* implicit */int) var_13))))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        for (int i_13 = 1; i_13 < 14; i_13 += 1) 
                        {
                            {
                                var_34 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_12 + 1] [i_12] [i_13 - 1]))))) > (((/* implicit */int) ((unsigned short) arr_9 [i_11] [i_12 + 1] [i_13] [i_13 + 1]))));
                                var_35 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                                var_36 = ((/* implicit */unsigned long long int) (-(arr_36 [i_1])));
                            }
                        } 
                    } 
                }
                for (long long int i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)12)), ((short)-32759))))));
                                var_38 = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 2; i_17 < 11; i_17 += 1) 
                    {
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            {
                                arr_55 [(_Bool)1] [i_17] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_11);
                                var_39 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((arr_17 [i_0] [i_0] [i_0]), ((unsigned short)61945)))) ? (((((/* implicit */_Bool) (unsigned short)3968)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_6))))));
                                var_40 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_28 [i_0] [i_0] [(unsigned short)6] [i_0] [i_0])) : (((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned short)21))));
                                var_41 = ((/* implicit */long long int) arr_35 [i_17 + 2] [i_17 + 4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 15; i_20 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */int) ((((/* implicit */long long int) ((((6U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759))))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))) / (max((((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_14] [i_0] [i_0]))))), (16911433728LL)))));
                                var_43 = ((/* implicit */long long int) (short)-2075);
                                var_44 = ((/* implicit */int) (~((-((+(0LL)))))));
                                var_45 = var_2;
                            }
                        } 
                    } 
                }
                for (long long int i_21 = 0; i_21 < 15; i_21 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) var_15))));
                    var_47 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (signed char)40)), (arr_29 [i_0] [i_0] [i_21] [(signed char)13] [i_21]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_26 [i_0] [i_1] [i_21] [9LL] [i_21] [i_0] [i_1]), (((/* implicit */long long int) var_8)))))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 4) 
                {
                    var_48 += ((/* implicit */signed char) var_0);
                    var_49 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_52 [i_0] [(_Bool)1] [i_22] [i_22] [(_Bool)1] [i_22] [i_22])) ? (9603229870226614414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))))), (((((_Bool) var_6)) ? (max((var_5), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) (-(-8782948426345809007LL))))))));
                }
                var_50 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)87))))), (var_5)));
                /* LoopNest 2 */
                for (long long int i_23 = 1; i_23 < 14; i_23 += 2) 
                {
                    for (short i_24 = 0; i_24 < 15; i_24 += 2) 
                    {
                        {
                            var_51 += ((/* implicit */long long int) ((arr_44 [i_0] [i_0] [5ULL] [(_Bool)1] [i_0] [i_0]) ? (((/* implicit */int) (short)17442)) : (((/* implicit */int) arr_5 [i_24] [i_24] [i_24] [i_24]))));
                            var_52 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((arr_49 [1] [i_0] [i_23]), (((/* implicit */unsigned short) arr_40 [i_23 + 1] [i_23] [i_0] [i_0] [i_23 - 1] [5U]))))), (max((((/* implicit */long long int) arr_40 [i_23 - 1] [i_23] [i_0] [i_0] [i_23 + 1] [i_1])), (-8362374371121585500LL)))));
                            var_53 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((657415641236040560LL), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_50 [i_0] [i_1] [i_1] [(_Bool)1] [i_24])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
