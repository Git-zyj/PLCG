/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203067
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 *= ((unsigned int) (~(max((410806700), (-410806697)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [14LL] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_2]))))))) * (((/* implicit */unsigned int) min((arr_10 [i_0] [i_1] [i_0] [i_0] [i_1] [i_4]), (((/* implicit */int) ((arr_7 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))))))));
                                var_16 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_10 [i_0] [(signed char)3] [i_4] [i_0] [(signed char)3] [(signed char)3])) : (arr_5 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [(signed char)15])))) : (min((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [(unsigned short)15] [i_3 + 1] [i_4])), (arr_5 [1ULL]))))));
                                arr_15 [i_0] [2] [i_2] [i_3] [i_4] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(signed char)19] [i_0] [i_4] [i_0] [i_3 - 1])) ? (((/* implicit */int) arr_13 [i_4] [i_0] [i_4] [i_0] [i_3 - 1])) : (((/* implicit */int) arr_13 [i_3 - 2] [i_0] [i_3] [i_0] [i_3 - 2]))))) ? ((-(((/* implicit */int) arr_13 [i_4] [i_0] [10] [i_0] [i_3 + 1])))) : ((+(((/* implicit */int) arr_13 [i_3 - 1] [i_0] [i_0] [i_0] [i_3 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))));
                                arr_20 [i_0] [i_5] [(unsigned short)22] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_5] [i_5 - 2] [(_Bool)1] [i_6] [(_Bool)1] [i_6]), (((/* implicit */unsigned int) arr_4 [i_0] [i_5 + 1] [i_0]))))) ? ((+((+(((/* implicit */int) arr_11 [0LL] [i_1])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -410806689)))) < (min((((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_1] [i_0])), (arr_18 [i_0] [i_1] [(short)20] [i_5] [i_6] [i_2]))))))));
                                var_18 ^= ((/* implicit */int) arr_7 [i_2]);
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [(unsigned char)6] [(unsigned char)6] [i_0])))))), ((+(((((/* implicit */int) arr_11 [i_0] [i_6])) + (((/* implicit */int) arr_4 [i_2] [i_5] [i_2])))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((long long int) ((arr_9 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (!(var_3)))) : (((410806699) / (((/* implicit */int) (signed char)-123)))))));
}
