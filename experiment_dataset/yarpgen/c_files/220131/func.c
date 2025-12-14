/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220131
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) -1770792118)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-592560303317153319LL) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -592560303317153334LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20293))) : (399705980U)))) : (min((((/* implicit */long long int) var_7)), (592560303317153319LL))))))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) 744043661)) | (2304338646U)))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (-592560303317153300LL))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)41599)) < (((/* implicit */int) (short)-27109)))))) + (268435455U))))));
                            var_15 = ((/* implicit */unsigned short) min((268435462U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (short)-27107))))) || (((/* implicit */_Bool) ((268435455U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2] [i_2])))))))))));
                            var_16 = (unsigned short)22960;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                            {
                                arr_20 [i_6] [i_4] [i_5] [i_4] [i_4] [(unsigned short)4] = var_10;
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min(((unsigned short)127), (((/* implicit */unsigned short) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2685101460U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_1 - 2] [i_1 + 1]) || (((_Bool) var_6)))))) : (arr_1 [i_0]));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((/* implicit */int) (short)27108)))))));
                                arr_23 [i_0] [i_4] [i_4] [i_5] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                                var_19 = ((/* implicit */short) arr_1 [i_0]);
                            }
                            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                            {
                                var_20 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-20293)) && (((/* implicit */_Bool) var_0)))))) + (((((/* implicit */_Bool) 592560303317153316LL)) ? (-592560303317153319LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31372)))))));
                                arr_27 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27109)) ? (1757007116884711725LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20462)))));
                                var_21 = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_0] [i_4])) : (((((/* implicit */int) (unsigned char)33)) >> (((((/* implicit */int) var_11)) - (12831)))))))));
                            }
                            /* LoopSeq 2 */
                            for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                            {
                                var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)14770)) ? (arr_15 [7ULL] [i_5] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518)))))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((592560303317153297LL), (((/* implicit */long long int) var_9))))) ? (((int) var_11)) : (((/* implicit */int) var_1))))) ? (156918388) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8))))), (min(((short)27094), (((/* implicit */short) (signed char)-91)))))))));
                                arr_30 [i_0] [i_4] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) var_6);
                            }
                            for (unsigned short i_10 = 3; i_10 < 24; i_10 += 3) 
                            {
                                var_24 -= max((max((((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0]))))), (((var_2) >> (((((/* implicit */int) var_0)) - (43139))))))), (((/* implicit */unsigned int) max((((/* implicit */int) min((var_3), ((short)9055)))), (((((/* implicit */int) var_0)) - (((/* implicit */int) (signed char)-89))))))));
                                var_25 = min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (592560303317153345LL))) >> (((((/* implicit */int) (short)1023)) - (993)))))), (var_5));
                                var_26 = ((/* implicit */unsigned short) max((min((var_5), (((/* implicit */unsigned long long int) 4026531819U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_1] [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_1] [i_4] [i_1])))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned int i_11 = 2; i_11 < 24; i_11 += 2) 
                            {
                                arr_35 [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) 699049907)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-24028)) * (((/* implicit */int) (short)24005))))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-21520)))) : (((int) var_6)))))));
                                arr_36 [i_11] [i_4] [i_4] [i_4] [i_4] [i_0] = ((((((/* implicit */int) var_7)) % (((/* implicit */int) var_3)))) >> (((((((/* implicit */_Bool) ((int) (unsigned short)49202))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))) - (804673757681280380ULL))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), ((short)21520)))) ? (((((/* implicit */_Bool) arr_16 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 2])) ? (((/* implicit */int) arr_12 [i_11 - 1] [i_4] [i_4] [i_1 + 1])) : (((/* implicit */int) (short)-23673)))) : (((((/* implicit */_Bool) 4427313152869890263ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-97))))));
                            }
                            var_28 = ((/* implicit */short) (((-(((((/* implicit */_Bool) 3795657401U)) ? (592560303317153307LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15462))))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) - (-6396412472974180901LL)))) || ((_Bool)1)))))));
                            var_29 = ((/* implicit */short) min((max((arr_33 [i_1 - 2] [i_1 + 1]), (((/* implicit */unsigned short) (short)24036)))), (arr_33 [i_1 - 1] [i_1 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        for (short i_13 = 2; i_13 < 23; i_13 += 2) 
        {
            for (int i_14 = 1; i_14 < 21; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        for (short i_16 = 3; i_16 < 23; i_16 += 4) 
                        {
                            {
                                arr_51 [i_12] [i_12] [i_12] [i_14] [i_12] = ((/* implicit */unsigned short) ((signed char) (unsigned short)18419));
                                var_30 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) (signed char)-43)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15462))) : (max((((/* implicit */unsigned long long int) var_8)), (13378616067587950610ULL)))));
                                var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_13 - 1]))) < (592560303317153343LL)))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_48 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])))));
                                arr_52 [i_12] [i_14] [i_12] [i_12] [i_14] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((((unsigned long long int) var_7)) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) / (-592560303317153343LL))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551587ULL)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-21544)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (592560303317153343LL))), (max((-592560303317153362LL), (((/* implicit */long long int) var_8))))))))))));
                }
            } 
        } 
    } 
}
