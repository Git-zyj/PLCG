/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50921
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */unsigned char) var_2);
                                var_16 = (((~(((/* implicit */int) arr_0 [i_3])))) & (((/* implicit */int) (((!(((/* implicit */_Bool) 2651454103U)))) || (((254538098U) < (2651454103U)))))));
                                arr_15 [i_1] [i_1] [i_2] [i_3] [2] |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (1011590032) : (((/* implicit */int) arr_2 [i_1])))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1])))))));
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((1643513192U) * (2651454099U)))) ? (((arr_5 [i_1] [i_2] [i_1]) / (arr_5 [i_1] [i_2] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_12 [6] [6] [i_3] [i_2] [6] [i_0])))) : ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2189417418U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) min(((-(((arr_2 [i_0]) ? (((/* implicit */long long int) arr_9 [i_0] [(_Bool)1] [i_5] [i_0])) : (var_4))))), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_5] [i_0] [i_0] [i_5]))));
                    arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) 5421301985654211125ULL);
                    var_19 = ((/* implicit */unsigned short) ((max((((arr_3 [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [3LL] [3U] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) var_7)))) & (min((arr_5 [i_0] [i_1] [8]), (arr_5 [i_0] [i_1] [i_5])))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_7] [6U] [i_5] [i_7] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) | ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                                arr_28 [i_0] [i_1] [i_5] [i_5] [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1]))) + (arr_22 [i_0] [i_0] [i_5] [i_7 - 1]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) -1011590032)) ? (var_10) : (((/* implicit */unsigned int) arr_9 [(signed char)8] [i_5] [7ULL] [i_0]))))))))));
                            }
                        } 
                    } 
                }
                var_20 = arr_9 [i_0] [i_1] [i_1] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_6)), (var_13)))), (max((((/* implicit */unsigned int) var_12)), (var_10)))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_32 [i_8] [i_8])), (var_1))), (((/* implicit */long long int) var_14))));
        var_23 += ((/* implicit */_Bool) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) : (2651454096U)))), (var_0)))));
    }
    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        arr_36 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) (signed char)73)) : ((-(((/* implicit */int) arr_30 [i_9] [i_9]))))));
        var_24 ^= ((/* implicit */int) var_2);
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned int) arr_29 [i_9] [i_9]);
        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-30))));
    }
}
