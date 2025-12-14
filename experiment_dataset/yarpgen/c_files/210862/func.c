/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210862
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
    var_17 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 *= ((/* implicit */short) (+(arr_2 [i_0])));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_19 = ((/* implicit */_Bool) arr_2 [i_1]);
            arr_5 [i_0] [1ULL] [7U] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (1865856707)));
            arr_6 [8LL] = ((/* implicit */unsigned int) var_2);
            var_20 += ((/* implicit */short) ((_Bool) (short)0));
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_4] [i_2] [i_3 + 2] [i_3 + 2] = ((/* implicit */short) var_7);
                                var_21 ^= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]);
                                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_2 - 1] [i_3 + 3]))));
                                var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65533))))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (arr_15 [i_0] [i_2 - 3] [(signed char)2] [i_2] [i_3 + 1])));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (unsigned short i_8 = 2; i_8 < 23; i_8 += 1) 
            {
                {
                    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8 + 1])) ? (((/* implicit */int) arr_21 [i_8 - 2])) : (((/* implicit */int) arr_21 [i_8 + 1]))))) ? (((/* implicit */int) arr_21 [i_8 - 1])) : (((/* implicit */int) max((((/* implicit */short) (signed char)0)), (var_5))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_27 [i_9] [i_9 - 2] [i_8] [i_8] [i_8 + 1] [(signed char)21])))) + ((-(((/* implicit */int) arr_27 [(unsigned short)4] [i_9 - 1] [i_9] [i_8 - 2] [i_8 - 2] [i_7])))))))));
                                arr_31 [i_6] [i_10] [(_Bool)1] = ((/* implicit */_Bool) (-(((((_Bool) arr_19 [i_9])) ? ((-(arr_28 [i_6] [i_6] [i_8 + 1] [i_9] [i_8 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                                arr_32 [i_10] = ((/* implicit */unsigned long long int) var_0);
                                arr_33 [i_6] [i_7] [i_10] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-10)) && (((/* implicit */_Bool) 718375990U))))) >> (((/* implicit */int) max(((signed char)-11), (((/* implicit */signed char) (_Bool)1)))))));
                                var_27 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (1776245512U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_34 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (((14096600971507052581ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6])))))));
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_28 = ((/* implicit */signed char) arr_36 [i_6] [i_6]);
            arr_38 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (var_4)))) ? (((arr_17 [i_11]) + (-556976882))) : (min((arr_17 [2]), (((/* implicit */int) var_0))))))) ? (min(((-(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (3467469951U)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
        }
        arr_39 [23ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)63)))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_13))))) >= (((10ULL) & (((/* implicit */unsigned long long int) arr_28 [i_6] [19LL] [i_6] [i_6] [i_6]))))));
    }
}
