/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190782
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_2] [i_3] [i_4])) ? (arr_7 [i_0 - 1] [i_2] [i_3] [i_4 - 1]) : (arr_7 [i_0 + 1] [i_1] [i_2] [i_4]))), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                                var_21 = ((/* implicit */signed char) (~(var_6)));
                                var_22 = ((/* implicit */unsigned short) (-(arr_13 [i_0] [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_4] [i_4])));
                                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((unsigned int) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_1] [1ULL] [i_5] [i_0] [i_5] |= ((/* implicit */unsigned char) arr_11 [i_1 - 2] [i_1 + 1]);
                        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                        var_25 = arr_15 [10LL];
                        var_26 = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 4294967295U))));
                        var_27 |= ((/* implicit */short) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (arr_0 [i_1 + 1] [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-34)) == (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_1 - 2] [i_1 - 2] [i_6] [i_1 - 2] = ((/* implicit */unsigned short) var_2);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)121))));
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (arr_18 [i_1] [i_6]) : (arr_3 [i_0] [i_6])));
                        arr_21 [i_0] [i_0] [2LL] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (14U)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)28672)) : (((/* implicit */int) (unsigned short)31)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-35)) < (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2] [i_6])))))))), (var_10)));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 13; i_7 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(5U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7 + 1] [i_0 + 1] [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (15U)))))) ? (((/* implicit */int) var_7)) : ((((-(((/* implicit */int) var_14)))) - (((/* implicit */int) (_Bool)1))))));
                            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((var_0) ? (arr_3 [(signed char)11] [i_0]) : (8U)))) / ((-(arr_8 [i_0] [i_1] [i_2] [i_2]))))) * (((/* implicit */unsigned long long int) arr_7 [i_0] [11U] [11U] [i_6]))));
                            arr_26 [i_7] = ((/* implicit */signed char) min((((/* implicit */short) (signed char)125)), (var_7)));
                        }
                    }
                    for (unsigned int i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)0))));
                        var_33 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */unsigned long long int) (+(arr_2 [i_1] [i_2])))) : (min((((/* implicit */unsigned long long int) var_4)), (arr_8 [i_0] [i_1] [i_2] [1LL]))))) * (((/* implicit */unsigned long long int) (+(4294967295U))))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_9] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)4064)), (min((4158570862U), (((/* implicit */unsigned int) (_Bool)1))))));
                            arr_34 [i_0] [i_0] [(signed char)13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_8] [i_9]))));
                            var_34 -= ((/* implicit */signed char) min(((((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_11 [i_1 + 1] [i_0 + 1])))), (((((/* implicit */int) arr_19 [i_8 - 1] [i_2] [i_8 + 2] [i_2] [i_1 - 2] [i_0])) * (((/* implicit */int) (_Bool)1))))));
                            arr_35 [10ULL] [10ULL] [i_2] [i_8] [i_9] = max((4294967275U), (((/* implicit */unsigned int) (_Bool)1)));
                            arr_36 [i_9] [i_8] [i_2] [i_0 - 2] [i_0 - 2] [i_0 - 2] |= ((/* implicit */unsigned char) 4294967270U);
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) arr_11 [8U] [i_1 - 2]))))) < (((((/* implicit */int) arr_11 [i_0] [i_1 - 1])) % (((/* implicit */int) arr_11 [(signed char)5] [i_1 - 1]))))));
                            var_36 = ((/* implicit */int) var_9);
                            var_37 += ((/* implicit */short) (unsigned short)37159);
                        }
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned char) (signed char)-60);
}
