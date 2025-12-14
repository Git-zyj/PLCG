/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51174
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!((_Bool)1))))));
                    arr_7 [i_0] [i_2] = (+(((((/* implicit */_Bool) ((arr_3 [i_1 + 1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2 + 1] [i_2 + 3] [i_1 - 1])) : (9831804936736781096ULL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5870264085484388626LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2827)) ? (2628521693U) : (360099905U)))) : (18446744073709551615ULL)));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max(((-(arr_6 [i_0] [i_1 + 1] [(signed char)1] [i_4]))), (arr_6 [i_4] [(unsigned char)2] [(unsigned char)2] [i_0]))))));
                            var_19 = ((/* implicit */unsigned char) min((min((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1 - 1]))), (max((((/* implicit */unsigned int) (short)24693)), (arr_6 [i_1] [i_1] [i_1 - 1] [i_1 - 1])))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(arr_2 [i_0] [i_1]))))));
                            var_21 = ((/* implicit */int) (((+(arr_2 [i_1 - 1] [i_2 - 1]))) * (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2 - 1] [i_3 - 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31481))) : (arr_2 [i_1 - 1] [i_2 + 2])))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 21; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)218)), (9831804936736781096ULL))))));
                            var_23 &= ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((arr_5 [i_2]) & (((/* implicit */int) arr_1 [i_2]))))), (arr_11 [i_5 - 1] [i_5 - 2] [i_5] [i_2 + 3] [18ULL])))));
                            arr_17 [i_5] [i_3] [i_3] [i_2] [i_1] [20ULL] [20ULL] = arr_12 [(signed char)19] [i_1] [(signed char)19] [i_1] [(signed char)19];
                            var_24 = max((((((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)6])) + (17964898070010307901ULL))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_1])));
                            var_25 = (!(((/* implicit */_Bool) 12176088243791304475ULL)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) ((unsigned long long int) arr_16 [i_0] [i_0] [i_2] [i_2] [i_6]));
                            var_27 = max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) | (arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_1]))));
                        }
                        arr_21 [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 5837300353363641626ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50376))))))) ? ((~(((unsigned long long int) arr_20 [i_1] [i_1 + 1] [i_1 - 1] [i_1])))) : (((min((((/* implicit */unsigned long long int) (signed char)-86)), (225326740785020902ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        arr_22 [i_0] = ((/* implicit */long long int) arr_8 [i_3]);
                        arr_23 [i_0] [i_3 + 1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1 - 1])) >= (((/* implicit */int) arr_19 [i_1] [i_1 + 1] [(short)21] [i_1 + 1])))));
                    }
                    var_28 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_2 + 3] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)32))))), (((((/* implicit */_Bool) 2823558606U)) ? (0ULL) : (var_15)))))));
}
