/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21336
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
    var_18 *= ((/* implicit */signed char) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)37)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [(unsigned short)7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1 - 1])), (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_1 [i_0 + 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) var_14))));
                    var_19 += ((/* implicit */short) min((((/* implicit */int) ((arr_1 [i_0 - 1] [i_0 - 1]) != (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) + (var_15)))))), ((-(((/* implicit */int) arr_3 [(signed char)12]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_0] [5U])), ((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_4]))))))) ? (((/* implicit */long long int) 0U)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)22))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [i_0] [i_2] [i_1] [i_0 + 1] [i_0])) / (((/* implicit */int) arr_5 [i_0]))))) : (var_8)))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [18])), (((((/* implicit */int) arr_5 [i_1 + 1])) & ((-(((/* implicit */int) var_11)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
