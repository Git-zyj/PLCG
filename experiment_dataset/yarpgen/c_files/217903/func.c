/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217903
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
    var_16 ^= ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (max((var_12), (((/* implicit */unsigned int) var_14))))))) : (min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) var_8)), (var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (max((((/* implicit */unsigned long long int) 4294967295U)), (arr_2 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_1 - 4])) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 - 1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((max((((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned char)16] [i_2]))))), (((/* implicit */unsigned long long int) (+(arr_4 [(signed char)0] [i_2] [i_3])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_5 [i_0] [i_1] [i_2] [i_3])))))))));
                            var_19 = ((/* implicit */int) min((min((((/* implicit */long long int) (unsigned short)63552)), (7991263540277843266LL))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2] [i_1] [i_0]))))) | (((/* implicit */int) arr_6 [(signed char)11] [i_3])))))));
                            var_20 = min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0])), (arr_3 [i_3])))), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)223)))))), (((/* implicit */unsigned long long int) 1073969404U)));
                        }
                    } 
                } 
            }
        } 
    } 
}
