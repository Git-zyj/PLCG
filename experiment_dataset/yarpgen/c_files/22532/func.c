/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22532
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) 1758152413);
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 26945602U)) ? (min((((/* implicit */unsigned long long int) 26945602U)), (arr_0 [5ULL] [(signed char)3]))) : (((/* implicit */unsigned long long int) (-(2140180447U))))))) ? (((/* implicit */unsigned long long int) max((((long long int) var_1)), (((/* implicit */long long int) arr_5 [i_1] [i_1 + 1] [i_2] [i_2]))))) : (max((((/* implicit */unsigned long long int) -1LL)), (1023ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)27845)), (((((/* implicit */long long int) 1526533689U)) - (min((arr_2 [i_1] [i_3]), (((/* implicit */long long int) var_0))))))));
                                var_23 = ((/* implicit */_Bool) ((var_11) ? (min((arr_2 [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 + 1] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1758152413))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_24 = ((/* implicit */short) max((((/* implicit */int) var_18)), ((-(((/* implicit */int) arr_6 [i_1 - 1]))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_19)) + (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1])) * (((/* implicit */int) (unsigned short)27861))))) : ((+(-8103106365928769661LL)))));
                }
                for (unsigned short i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) max((arr_6 [i_0]), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)1]))))) : (((/* implicit */int) ((_Bool) var_13))))));
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_18 [i_0] [i_1] [i_7] = ((/* implicit */long long int) var_11);
                        var_27 = ((/* implicit */long long int) var_15);
                    }
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((1758152393) / (((((/* implicit */int) (unsigned short)37689)) << (((2499405132U) - (2499405128U))))))) >> (((/* implicit */int) var_17))));
                        arr_21 [i_6] [i_8] |= ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_0] [13LL] [i_6 - 1] [i_6 - 1] [i_8]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27869))))))));
                            var_30 = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_0] [i_6 + 1] [i_6]));
                            arr_24 [i_6 + 1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-44)))));
                        }
                        /* vectorizable */
                        for (short i_10 = 2; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) ((unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]));
                            var_32 += ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)10))));
                            arr_29 [i_0] [(unsigned short)12] [i_0] [12] [0] [12] = (~(arr_0 [i_1 + 1] [i_10 + 3]));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4728))) : (3309933020U)));
                        }
                        arr_31 [i_6 - 1] [i_6] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) arr_22 [9LL] [9ULL] [i_1 + 1] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) 985034273U)))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_36 [i_0] [i_1] [(short)11] [i_11] |= ((/* implicit */unsigned long long int) max((min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_6] [i_11] [i_0] [i_11]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        var_33 = ((/* implicit */unsigned long long int) var_15);
                        var_34 = ((/* implicit */long long int) 288670238U);
                        var_35 &= ((/* implicit */unsigned int) var_16);
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        var_36 |= ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12 + 1] [i_1 - 2] [(unsigned char)1] [i_6]))) | (min((985034291U), (((/* implicit */unsigned int) (unsigned char)76)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_0] [i_1 - 1] [i_6] [i_6])), (985034273U)))) ? (((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)133)))))))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)162), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */int) ((unsigned char) arr_38 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                    {
                        arr_43 [8LL] [i_1] [i_6] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_40 [i_0] [5] [i_0] [i_13])), (-474180210)));
                        var_38 ^= ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 1; i_14 < 13; i_14 += 4) 
                        {
                            arr_46 [i_0] [i_14] [i_0] [i_13] [i_0] [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_40 [i_1] [i_1] [(short)1] [i_1])))), (((((/* implicit */_Bool) (unsigned short)27845)) ? (((/* implicit */int) arr_25 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1] [i_6 - 1] [i_14])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_6 - 1] [i_0]))))));
                            var_39 = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_42 [i_0] [i_14 - 1] [i_6 + 1] [8] [i_14] [i_6 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21620))))));
                        }
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
                    {
                        arr_49 [(unsigned short)9] [i_15] [i_15] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        arr_50 [i_1] [(short)13] [i_15] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */_Bool) var_15);
                        var_40 = ((/* implicit */_Bool) -1758152383);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_27 [i_1] [i_1 - 1] [i_1 - 1])));
                                arr_58 [i_0] [i_1] [i_16] [i_1] [i_17] [i_18] = ((/* implicit */_Bool) ((unsigned char) ((long long int) arr_2 [i_1] [i_1 - 1])));
                                var_42 = ((/* implicit */unsigned char) (-(((long long int) (unsigned char)82))));
                                var_43 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */signed char) ((unsigned char) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_16]));
                    arr_59 [i_0] [i_1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -8589294965500160113LL))));
                }
                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)119)) ? (arr_0 [i_1 + 1] [i_1 - 2]) : (arr_0 [i_1 - 1] [i_1 + 1])))))));
                var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((short) -1758152394)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_19 = 0; i_19 < 16; i_19 += 1) 
    {
        var_47 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)137))))));
        var_48 ^= ((/* implicit */short) arr_61 [i_19]);
        arr_62 [i_19] &= ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)232)) != (((/* implicit */int) var_17))))), (var_15))));
        var_49 = (+((-(((/* implicit */int) arr_60 [i_19])))));
    }
}
