/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29367
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [(signed char)2] &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (short)5167)) * (((/* implicit */int) arr_0 [10] [i_1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)5167), (arr_3 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57409)) * (((/* implicit */int) (_Bool)1))))) : (min((8388607LL), (((/* implicit */long long int) arr_3 [i_0]))))));
                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (15185232413542441066ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15905)) ? (arr_1 [(unsigned short)2] [(unsigned short)2]) : (((/* implicit */int) var_1))))) : (3384319337227819270ULL))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)5167)) : (((/* implicit */int) (_Bool)1))))) * (min((((/* implicit */unsigned long long int) 3666881374U)), (3261511660167110570ULL))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (short)11443))));
    var_12 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) / (var_9)));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(3635391002U))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        arr_17 [i_5 + 4] [i_4] [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_4] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (var_9)))) ? (max((var_3), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 + 4] [i_5 - 2]))))));
                        arr_18 [i_2] [i_2] [i_3] [i_4] [(unsigned short)10] [8LL] &= ((/* implicit */signed char) ((unsigned int) max((max((((/* implicit */long long int) (signed char)(-127 - 1))), (2523065320219088423LL))), (((/* implicit */long long int) arr_16 [8LL] [i_4] [8LL] [i_3] [(short)8] [(signed char)2])))));
                        arr_19 [i_3] [i_4] [5U] [i_3] = ((/* implicit */_Bool) var_0);
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (_Bool)1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            arr_22 [i_2] [i_2] [i_4] [i_2] [i_2] = (-(((((/* implicit */int) arr_13 [i_4] [i_4])) * (((/* implicit */int) (short)-65)))));
                            arr_23 [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3191)) * (((/* implicit */int) (short)-3191))))) ? (((/* implicit */unsigned long long int) 0U)) : (arr_21 [i_6] [i_6] [i_4] [i_6 - 1] [i_5 + 4])));
                            arr_24 [i_6 + 1] [i_6 + 1] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-5168))));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) arr_21 [i_5 + 1] [i_5] [i_4] [i_5 + 2] [i_5]);
                        }
                    }
                    arr_26 [8ULL] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_15 [i_4] [i_3] [i_3] [i_2])), (max((((((/* implicit */int) arr_6 [i_2])) * (((/* implicit */int) (short)-60)))), (((/* implicit */int) (_Bool)1))))));
                    arr_27 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */short) arr_11 [i_4] [i_4] [i_2]);
                    var_15 = ((((((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42215))))) * (((((/* implicit */_Bool) 0U)) ? (2590256893U) : (arr_20 [i_4]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
