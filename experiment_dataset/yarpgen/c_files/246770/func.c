/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246770
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(_Bool)0] [i_2] [i_2] = ((short) ((long long int) var_12));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0]))) ^ (((((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))))));
                    var_14 += ((/* implicit */unsigned int) var_11);
                    arr_9 [i_0] [i_1] [(short)11] = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_2 [i_1] [i_1])) & (((/* implicit */int) var_5)))) | (((var_6) + (((/* implicit */int) arr_2 [i_2] [i_1])))))) + (((/* implicit */int) ((arr_4 [i_2]) < (arr_4 [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_4] [i_6]) ? (((/* implicit */int) arr_18 [i_3 - 1] [i_5] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_5] [i_4]))))) ? (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_4] [i_5])))))) : (((/* implicit */int) arr_12 [i_4] [i_4])))))));
                                arr_23 [i_6] = ((/* implicit */signed char) ((arr_12 [i_3 + 1] [i_3 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 - 2] [i_3 + 1]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1]))) : (var_8)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) arr_21 [(signed char)22] [i_5] [i_4] [i_4] [i_3 - 2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_7);
}
