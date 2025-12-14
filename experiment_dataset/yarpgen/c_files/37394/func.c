/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37394
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) -2126343340)) : (arr_4 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) min((arr_6 [i_2] [i_1 + 1] [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((var_13) ? (arr_3 [i_1]) : (var_7)))) : (((((/* implicit */_Bool) 8815204980005073706LL)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */int) (signed char)63)), (-2030312839))), ((+(var_3))))))));
                    arr_9 [i_0] [i_1 + 3] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [0U] [0U] [12LL] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2]))))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */int) var_14))))) - (min((var_2), (((/* implicit */unsigned long long int) 7916312279944615001LL))))))));
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((15797583481495286711ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2]) : (((/* implicit */long long int) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_6 [i_3 + 1] [i_1 + 2] [i_2] [i_4 - 3]);
                                var_16 &= ((/* implicit */int) max((((/* implicit */unsigned int) -881273565)), (2167196590U)));
                                arr_15 [i_4] [i_1] [i_2] [i_2] [i_2] [i_3] [i_4 + 2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) arr_13 [i_4 + 1] [i_2] [i_2] [i_1] [i_0])), (((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 12; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_2] [i_0] [i_0])), (arr_7 [i_0] [i_0] [i_1 - 1] [i_5 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_17 [i_0] [(unsigned short)9] [(unsigned short)9]) : (var_6)))) : ((+(arr_19 [(_Bool)1] [i_1 + 3] [i_2] [i_0] [i_0] [i_1])))))) ? (max((((/* implicit */unsigned int) ((int) (unsigned char)114))), (var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_2]) : (var_6)))) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_7)))))));
                                arr_20 [i_0] [i_1 + 3] [i_1] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (max((13918309083460539153ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -618085534)) ? (((/* implicit */int) (short)-11476)) : (-618085534)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [(_Bool)1] [(_Bool)1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned char)127))));
                                var_19 ^= ((/* implicit */unsigned long long int) min((arr_11 [i_1] [i_1] [i_2] [i_1]), (min((((/* implicit */short) var_13)), (arr_11 [i_0] [i_1 - 1] [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 3; i_11 < 23; i_11 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_30 [i_10] [i_10 + 1] [i_10] [i_10]))), (max((((/* implicit */int) arr_30 [i_8] [i_10 - 1] [i_11 + 1] [i_11 - 1])), (var_6)))));
                            var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_27 [i_9] [13])), (arr_28 [i_7] [i_7] [i_10 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_7] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [10ULL] [i_10] [18LL] [2LL] [(signed char)0] [10ULL]))) : (9U)))) : (((((/* implicit */_Bool) arr_32 [i_11 - 1] [i_10] [i_9] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6249))) : (var_11))))))));
                        }
                        for (unsigned int i_12 = 3; i_12 < 23; i_12 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_12 + 1] [i_9] [i_8])) ? (((/* implicit */int) ((unsigned short) min((arr_32 [i_7] [i_8] [i_7] [i_10 + 1] [(_Bool)1]), (((/* implicit */unsigned int) arr_26 [i_8] [i_10 - 1] [i_8])))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_25 [i_7] [i_7])), (var_5)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63088)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1LL)))))))));
                            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_28 [i_7] [i_8] [i_7])), (arr_29 [i_7] [i_8] [6ULL] [i_12 - 3])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (arr_28 [(unsigned char)5] [(signed char)2] [(signed char)2])))) : (max((arr_21 [i_9] [i_9]), (((/* implicit */unsigned int) arr_31 [24ULL] [24ULL] [24ULL] [6LL] [i_12 - 3] [24ULL]))))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_31 [2LL] [i_7] [i_8] [i_9] [i_10 - 1] [i_12]))))), (min((arr_25 [(_Bool)1] [i_7]), (((/* implicit */long long int) arr_22 [i_8])))))))));
                            var_24 = ((/* implicit */long long int) ((int) arr_33 [i_12 - 2] [i_7] [i_9] [i_7] [i_7]));
                        }
                        arr_36 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9] [i_8] [i_7]))) - (arr_32 [i_7] [9U] [i_9] [i_7] [i_7])));
                        var_25 ^= ((/* implicit */int) ((min((max((((/* implicit */unsigned long long int) var_8)), (var_2))), (((/* implicit */unsigned long long int) ((0) <= (618085550)))))) - (((/* implicit */unsigned long long int) arr_35 [i_7] [i_9] [12U]))));
                    }
                    arr_37 [24LL] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) ((unsigned int) var_2)))) <= (((((/* implicit */unsigned long long int) ((arr_21 [i_9] [i_7]) >> (((arr_35 [14ULL] [i_7] [14ULL]) - (249523812)))))) * (arr_34 [i_7] [i_7] [(signed char)0] [i_7] [i_9])))));
                    arr_38 [i_7] [i_8] [i_9] = ((((/* implicit */_Bool) (+(-618085534)))) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) 1924283244)), (arr_32 [i_7] [i_7] [i_8] [i_8] [i_9]))), (((unsigned int) arr_28 [i_7] [i_7] [i_9]))))) : (min((((/* implicit */unsigned long long int) arr_27 [i_7] [i_8])), (min((var_2), (((/* implicit */unsigned long long int) arr_22 [9LL])))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_8);
}
