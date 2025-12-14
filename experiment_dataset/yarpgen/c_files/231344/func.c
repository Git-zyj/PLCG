/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231344
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */signed char) var_0)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_1 + 2]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) - (max((-5362864544005241945LL), (5362864544005241944LL))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 + 3] [i_1 + 3])) >= (((/* implicit */int) ((var_5) != (arr_5 [i_1 - 1] [i_1]))))));
                    arr_9 [i_2] [4U] [0U] = var_0;
                    arr_10 [i_2] [i_1 + 1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) arr_3 [i_1 + 1])) / (arr_7 [i_2 - 4]))) < (max((((/* implicit */unsigned int) arr_3 [i_1 + 1])), (arr_7 [i_2 - 3])))));
                }
                var_12 = ((/* implicit */_Bool) min((max((((long long int) var_0)), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (5362864544005241945LL) : (((/* implicit */long long int) arr_7 [i_0])))))), (((/* implicit */long long int) var_2))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) var_2)))), (max((var_1), (var_8))))) << (((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) var_3)))) / (var_8)))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U)))))));
    var_15 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) ((5362864544005241944LL) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) (unsigned short)5816)) ? (-9223372036854775799LL) : (8388600LL))))));
}
