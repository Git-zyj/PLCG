/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4283
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_6 [i_0 - 1] [i_1] [i_1] [i_3 + 3])))))));
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(signed char)6])) ? (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (signed char)6)))))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65280)) > (((/* implicit */int) arr_3 [i_0 - 1])))) ? (((((/* implicit */_Bool) (unsigned char)208)) ? (54186791U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3 + 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)15))))))))));
                                var_12 = ((/* implicit */int) 1986865557U);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [(unsigned char)8])), (max((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_7 [i_0]))))), (min((var_6), (((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) arr_14 [i_6])))), (((/* implicit */int) (signed char)-6))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_6] [i_6]))))) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5])) != (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_6 [i_6] [i_6] [i_5] [i_5]))))))))));
                arr_15 [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (9259836625711711290ULL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((unsigned short) var_8));
}
