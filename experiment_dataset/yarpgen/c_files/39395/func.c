/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39395
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_11)))) ? (((/* implicit */int) arr_1 [(_Bool)0] [i_0 - 2])) : (((/* implicit */int) max(((signed char)70), ((signed char)86)))))) & ((~(max((((/* implicit */int) arr_2 [i_0 + 1])), (-1))))))))));
                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)23] [i_0]))))) * ((+(((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_0]))))) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (short)-14842))))));
                var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 - 2]) : (arr_3 [i_1])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_16 = ((((/* implicit */int) ((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) == (arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) != (((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))))) : (((/* implicit */int) arr_2 [i_1])))));
                    var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2] [i_1]))))) ? (((((/* implicit */int) arr_2 [i_2])) ^ (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) arr_2 [i_0 - 1]))))));
                    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((var_1) < (((/* implicit */int) arr_4 [8ULL] [(unsigned char)23]))))) ^ (((/* implicit */int) arr_1 [i_2] [i_2])))), (((/* implicit */int) arr_2 [i_0]))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_19 |= ((/* implicit */short) arr_2 [i_3]);
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((arr_10 [i_4] [i_3] [14]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_2 [i_3])))))));
                        var_21 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_4)))) >= (((((/* implicit */int) arr_0 [i_4])) - (((/* implicit */int) (unsigned char)35))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14832)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (short)-14832))));
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)11] [(short)23]))) * (arr_10 [i_3] [i_3] [9]))))))));
                        var_24 = ((((/* implicit */int) arr_1 [i_0 - 2] [6])) != (((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])) > (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) (short)-16939)) - (((/* implicit */int) arr_16 [i_1]))));
                        arr_18 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0 - 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
                        var_26 = (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0]))) >= (var_2)))));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_27 += ((/* implicit */signed char) var_7);
                            arr_22 [i_6] [i_1] [i_6] [i_6] [i_7] = ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_6 - 1] [i_7])) ? (((arr_16 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_3]))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(arr_3 [i_0 - 1]))))));
                            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_11 [i_0 + 1] [i_0 - 1])));
                            arr_23 [i_7] [i_6] [17LL] [i_6] [(unsigned char)13] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_6] [i_0]);
                        }
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_11 [i_1] [i_1]) >= (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_3] [19]))))) << (((((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_0])) - (209)))));
                            var_31 = ((/* implicit */signed char) ((unsigned long long int) arr_25 [i_6 - 1] [i_0 + 1]));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) arr_14 [i_3] [i_1] [i_3] [i_6 - 1] [(unsigned char)13]);
                            var_33 = ((/* implicit */int) 7290203993367725222LL);
                            var_34 |= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) >> (((/* implicit */int) arr_0 [i_0 + 1]))));
                            arr_30 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2190663167649661641LL)));
                        }
                        arr_31 [i_0] [i_6] [i_3] [i_6] [(_Bool)1] [i_0] = (+((-(((/* implicit */int) (short)32640)))));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_35 = (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_10)))))));
                            var_36 = ((/* implicit */unsigned char) var_3);
                            arr_39 [i_10] = ((/* implicit */_Bool) var_10);
                            var_37 = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_0 - 2] [i_0 + 1] [i_1] [i_0 - 2] [(signed char)0] [i_0 - 2]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */_Bool) var_11);
}
