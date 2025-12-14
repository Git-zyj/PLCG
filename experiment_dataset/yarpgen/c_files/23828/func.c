/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23828
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) var_6);
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_0] [13ULL] [7ULL])) / (arr_3 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((unsigned char) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) * (min((10ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))))));
                var_19 = ((/* implicit */signed char) ((unsigned long long int) var_13));
                var_20 = ((/* implicit */unsigned long long int) min((1436559473U), (680974504U)));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) 1210583527U));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                {
                    var_21 = ((unsigned int) ((((125829120ULL) * (((/* implicit */unsigned long long int) arr_3 [i_2] [i_3] [i_2])))) % (((var_9) - (((/* implicit */unsigned long long int) arr_13 [i_2] [(unsigned char)11] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-39))))) & (max((arr_13 [i_2] [i_3] [i_2]), (arr_14 [i_6] [(short)1] [i_4] [i_2]))))));
                                arr_21 [i_6] [i_6] [6U] [i_4] [i_6] = var_2;
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 11236235090099022835ULL)))))));
                                var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)10] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-3917594037427153813LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)3] [i_6]))) + (var_1))))), (((/* implicit */unsigned long long int) ((3677309122U) >= (((/* implicit */unsigned int) arr_8 [i_4 + 4] [i_3 + 1])))))));
                            }
                        } 
                    } 
                    arr_22 [i_4] [(unsigned short)1] = ((/* implicit */int) arr_1 [i_2]);
                    arr_23 [i_2] [i_2] [i_4] = min((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)18)) != (((/* implicit */int) (signed char)3))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_8 [i_2] [i_2]) / (((/* implicit */int) arr_2 [i_2] [i_4 + 3])))) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_3 + 1] [i_4 + 2])) : (((/* implicit */int) arr_11 [i_2] [i_3])))))))) | (((((arr_14 [i_4] [i_3] [4] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((var_18) + (2147483647))) << (((arr_4 [(signed char)15] [i_3] [i_3 - 1]) + (1338517916))))))))));
                }
            } 
        } 
    } 
}
