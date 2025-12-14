/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20105
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) ((((long long int) var_4)) / (arr_3 [i_1] [i_0])));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 - 1]))))) / (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])))))));
                                var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) arr_9 [i_3 + 2] [i_3] [i_3] [i_3 + 3] [i_3 + 2])) : (((/* implicit */int) arr_13 [i_3 + 2] [i_3] [i_3] [i_3 + 3])))), (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 3] [i_3] [i_3 + 3]))));
                                var_17 = ((/* implicit */unsigned char) (+(((long long int) arr_9 [i_3] [i_3] [i_2] [i_0 + 1] [i_4]))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) var_4))))), (2305843009209499648LL)))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_0 + 1]))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_11 [0LL] [i_1]))) : (((/* implicit */unsigned long long int) var_8))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_1])), (arr_4 [i_0] [i_1])))), (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_0 - 3]))))));
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((unsigned char) ((unsigned long long int) arr_12 [i_1] [i_1]))), (((unsigned char) arr_7 [i_0 - 4] [i_0 - 4] [i_0 - 3]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 1619784763))));
    var_21 = var_3;
}
