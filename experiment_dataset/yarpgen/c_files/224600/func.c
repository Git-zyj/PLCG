/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224600
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [(unsigned short)11] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))) * (0ULL))), (((/* implicit */unsigned long long int) max((arr_4 [i_0 + 2] [i_0 + 2]), (arr_4 [i_0 + 2] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_18 [i_2 - 4] [i_2 - 4] [i_4] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) ^ (((((/* implicit */unsigned long long int) var_5)) / (var_2)))))));
                                var_12 = ((/* implicit */int) ((short) min((((/* implicit */int) (signed char)127)), (0))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) ((((unsigned long long int) (unsigned char)255)) & (((/* implicit */unsigned long long int) max(((+(arr_6 [9ULL] [i_2]))), (((/* implicit */unsigned int) arr_11 [i_0] [i_0 + 1] [i_0] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) (-(var_1))))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (signed char)11)) / (((/* implicit */int) (unsigned short)17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) var_4))));
}
