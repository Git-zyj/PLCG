/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212882
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
    var_10 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) arr_2 [(short)10])), (arr_0 [i_0])))));
                var_11 = ((/* implicit */unsigned int) min((min(((+(arr_0 [i_0]))), ((+(var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)58587), (((/* implicit */unsigned short) (unsigned char)137))))) ? (((unsigned int) (unsigned short)65535)) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */int) (unsigned short)58587)))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [i_2] [0U] = ((/* implicit */int) ((short) arr_3 [i_2 + 1] [i_2 - 3] [i_2]));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)60);
                }
                for (short i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_17 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                        arr_18 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_1] [i_3 - 2] [i_4])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_11 [(short)13] [i_1] [(_Bool)1] [i_4]))), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_0] [i_0] [i_3 - 2] [i_3])))))));
                        arr_19 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((int) ((short) arr_13 [i_0] [i_4] [(unsigned short)3] [i_4])));
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) arr_8 [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_3] [i_5]);
                        arr_24 [6ULL] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_12 [(short)13] [(short)13] [i_1] [i_0]);
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 2099688216U)), (var_7))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) (+(arr_15 [i_0] [i_3])));
                        var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((short) var_7))) || (((arr_0 [i_0]) > (arr_27 [i_0] [i_1])))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -8156363175549277910LL)))))))));
                        var_16 |= arr_6 [i_0] [i_0] [i_0];
                    }
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 694743987U))));
                    arr_31 [4ULL] [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-1)), (arr_25 [9ULL] [i_1])))), (((arr_0 [i_0]) + (((/* implicit */unsigned long long int) var_2))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_7] [i_0]))) : (-8156363175549277892LL)))));
                        arr_35 [(signed char)4] [(unsigned short)5] [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0LL)) * (arr_28 [(short)9] [i_0])))) ? (var_2) : (((/* implicit */int) ((short) var_9)))));
                    }
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            var_19 += ((/* implicit */unsigned int) arr_27 [1ULL] [i_1]);
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_11 [i_0] [i_0] [i_0] [i_0])));
                            arr_44 [i_0] = ((/* implicit */_Bool) ((signed char) arr_6 [i_9] [i_9] [i_9]));
                        }
                        /* LoopSeq 3 */
                        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_9]);
                            var_21 |= ((/* implicit */short) (+(2205980837650601431ULL)));
                            var_22 *= ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_10] [i_10] [i_12] [i_9]);
                            arr_48 [i_0] [i_0] [i_0] [8ULL] [i_0] [i_10] [i_12] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_0] [i_0])) || (((/* implicit */_Bool) -8156363175549277895LL))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) arr_15 [i_13] [i_1])) : (arr_27 [i_10] [i_1])));
                            var_24 += ((/* implicit */unsigned long long int) ((signed char) 16727101185780412821ULL));
                            var_25 = ((/* implicit */unsigned long long int) ((short) arr_5 [i_1] [i_9] [i_10] [i_0]));
                            arr_51 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (short)-24452);
                        }
                        for (int i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (signed char)-1);
                            var_27 = ((/* implicit */short) ((unsigned int) (unsigned short)65523));
                            var_28 = (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])));
                        }
                    }
                    arr_54 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_9] [i_9]);
                    var_29 = ((arr_27 [i_0] [i_1]) * (arr_27 [i_0] [i_0]));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            {
                arr_59 [i_16] [i_16] [i_15] = ((/* implicit */_Bool) var_9);
                var_30 = ((/* implicit */long long int) ((short) arr_58 [i_16] [i_15]));
                var_31 = ((/* implicit */signed char) max(((((-(800162872U))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))), (((/* implicit */unsigned int) var_9))));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 1; i_17 < 19; i_17 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        for (int i_19 = 0; i_19 < 21; i_19 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) arr_55 [i_16]);
                                var_33 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7691339104842422789LL)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        for (unsigned int i_21 = 3; i_21 < 18; i_21 += 3) 
                        {
                            {
                                arr_77 [i_17] [i_20] [i_17 - 1] [i_17] [i_16] [i_17] = ((_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_58 [i_21 - 2] [i_21]))));
                                arr_78 [i_21 + 3] [i_17] [(signed char)2] [i_21] [(signed char)2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_74 [i_15] [i_16] [i_16] [i_20])))))) ? (((((unsigned long long int) var_2)) * (((/* implicit */unsigned long long int) ((arr_69 [(_Bool)1] [(_Bool)1] [i_20]) / (-1708466939)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned int) var_8);
                }
            }
        } 
    } 
}
