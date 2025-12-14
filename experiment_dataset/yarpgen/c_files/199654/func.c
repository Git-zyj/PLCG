/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199654
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2943898432U)) || (((/* implicit */_Bool) -6504864500493609209LL)))) || (((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 3] [i_0])) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [(unsigned char)17] [i_1]))))));
                arr_4 [i_0] = ((/* implicit */long long int) 6583934741716932005ULL);
                arr_5 [i_0] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)1]))) : (arr_2 [i_0] [8U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 3]))) : (((((/* implicit */_Bool) 2943898443U)) ? (12U) : (2943898432U)))))) ? (1351068852U) : (((/* implicit */unsigned int) (+((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)50)))))))));
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) arr_3 [i_0] [i_1 - 1] [11U]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)173)));
                            arr_11 [i_0] [20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-81)))))) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3] [(short)13]))) : (arr_6 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned int) arr_10 [i_2 + 3] [i_1 - 2] [(unsigned short)1] [i_3] [i_2])))) : (((((unsigned int) arr_9 [i_0] [i_1] [8] [i_0] [i_0])) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (2974094575U)))))));
                            arr_12 [i_0] [i_1] [(unsigned char)12] [i_3] = ((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)5] [i_2] [i_3] [(unsigned char)5]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (short)-20594)) - (var_0)))) ? (var_9) : (((/* implicit */unsigned int) var_0))))));
}
