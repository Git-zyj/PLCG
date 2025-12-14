/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227480
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) 3038269303U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [14U] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_3] [i_4 + 1]);
                                var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 420710981U)) ^ (323863244602474000LL)));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (min((var_14), (((/* implicit */unsigned int) (unsigned char)179)))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_12), (0U)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])), (3874256298U)))))))))))));
                                var_17 -= ((/* implicit */short) ((unsigned long long int) ((arr_18 [i_0] [(short)8] [i_2] [i_1 - 3] [i_4 - 1] [24LL]) != (arr_18 [i_3] [i_3] [i_2] [i_1 - 3] [i_4 + 2] [i_3]))));
                                var_18 = ((/* implicit */unsigned char) ((max((((13671295595752296026ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))), ((-(arr_7 [i_4 + 2] [i_2] [i_1 + 1]))))) / (((/* implicit */unsigned long long int) max((2075858513U), (((/* implicit */unsigned int) (short)4095)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((((/* implicit */short) var_6)), (var_9)))) & (((/* implicit */int) var_6)))) << (((((/* implicit */int) var_9)) + (14359)))));
    var_20 &= ((/* implicit */unsigned char) (_Bool)1);
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_7)), (var_8)));
    var_22 = ((/* implicit */unsigned char) ((long long int) var_2));
}
