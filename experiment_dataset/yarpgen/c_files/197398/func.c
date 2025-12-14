/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197398
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
    var_19 = ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [(short)2] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_17))))) ? (max((((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1])) & (3724847113744346155ULL))), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) var_13))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)15280)) : (12125909)))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0] [i_0]))));
                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) (short)13807))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */short) (((~(max((var_8), (((/* implicit */int) var_6)))))) + (2147483647)));
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13808)) ? (((/* implicit */int) (unsigned char)3)) : (-12125931))))));
                        arr_18 [i_2] [i_2 - 1] [i_2 - 2] [i_2 + 1] = ((/* implicit */_Bool) (unsigned char)186);
                        var_26 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_10))))), (arr_12 [i_2] [i_3] [i_5] [i_5]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_21 [i_4] [i_3] [(unsigned char)1] [i_6] [i_2 - 1] [i_6])))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (726114928898663543ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 446436724U))))));
                        arr_22 [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) var_2);
                    }
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 798393075)) ? (895606598U) : (2553914908U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_2 - 1] [i_2 - 1])) || (((/* implicit */_Bool) -1165809749))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_25 [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_25 [i_2 - 2] [i_2 - 2]))))))));
                        arr_26 [i_7] [i_4] = arr_24 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2] [i_2];
                        arr_27 [2U] [i_2] [(unsigned short)6] [(signed char)6] = ((/* implicit */long long int) max((var_17), (((((/* implicit */int) (unsigned char)254)) > ((+(((/* implicit */int) var_10))))))));
                        arr_28 [(_Bool)1] [i_2 - 1] [9] [i_4] [i_4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2 - 2] [i_2 + 1])) ? (((int) (_Bool)1)) : (var_8)));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */_Bool) (-2147483647 - 1))) ? (9396133257379213619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753)))))));
                    }
                    var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                }
                for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_35 [i_9] = ((/* implicit */unsigned long long int) (((~(2147483647))) & (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_17)), (var_1)))) && (((/* implicit */_Bool) (unsigned short)15768)))))));
                                var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1729818331U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_21 [i_10] [i_9] [i_8] [10ULL] [i_3] [i_2])) : (((/* implicit */int) arr_29 [i_10] [(signed char)7] [i_2 - 2])))) : (((var_8) - (((/* implicit */int) arr_21 [i_3] [i_3] [i_8] [i_8] [(_Bool)1] [i_8]))))));
                                var_33 = ((/* implicit */unsigned char) arr_19 [i_9 - 2] [i_8]);
                            }
                        } 
                    } 
                    arr_36 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19536)) ? (((/* implicit */int) (short)19541)) : (((/* implicit */int) (unsigned short)42565))))) ? (((((/* implicit */_Bool) 5695672144617425738ULL)) ? (12125915) : (((/* implicit */int) (short)-23905)))) : ((+(((/* implicit */int) (_Bool)1))))));
                    var_34 ^= ((/* implicit */unsigned long long int) ((int) min((arr_25 [i_2 - 1] [i_2 + 1]), (arr_25 [i_2] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */_Bool) var_3);
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) != (3097410276U))) ? ((-(arr_16 [i_2 - 2] [5U]))) : (min((((/* implicit */long long int) -3)), (arr_16 [i_2 - 1] [i_2]))))))));
                                arr_41 [i_2] [i_11] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)15213)), (var_9)));
                            }
                        } 
                    } 
                }
                arr_42 [i_2 - 2] = ((/* implicit */unsigned int) arr_20 [i_2] [5]);
            }
        } 
    } 
}
