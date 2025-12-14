/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50798
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
    var_20 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_17)))), (var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (var_14)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))) : ((+(((((/* implicit */_Bool) var_11)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))))));
                arr_5 [i_0] = ((((arr_4 [i_0]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))) >= (min((((/* implicit */int) (unsigned char)100)), (-2083649232))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1]))))) : (((((/* implicit */int) arr_4 [i_0])) | (-2083649232)))))), (arr_3 [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_18 [i_4] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_9)))), (max((var_19), (((/* implicit */int) arr_17 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5] [i_5])))))))));
                                arr_19 [i_2 + 1] [i_2 + 1] [i_4] = ((/* implicit */long long int) var_13);
                                var_22 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_16 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (var_8)))) % (max((15ULL), (((/* implicit */unsigned long long int) var_13))))))));
                            }
                        } 
                    } 
                    var_23 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) / (var_14)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)-1)))))))), ((+(max((arr_14 [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_4] [i_4]), (((/* implicit */long long int) var_19)))))));
                }
            } 
        } 
    } 
}
