/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237324
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_6)) && (var_16)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [(signed char)0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9378))))), (((/* implicit */unsigned long long int) ((short) arr_5 [i_0] [i_1 - 1] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)147)) >= (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) var_3)), (var_15))))), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min(((signed char)37), (((/* implicit */signed char) var_13))))) : (((((/* implicit */_Bool) arr_12 [i_0 + 1] [(short)12] [i_2] [i_4] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))) >= ((+(min((arr_9 [i_0] [i_0] [i_0] [i_0 - 4]), (arr_9 [i_0] [i_1 + 2] [9U] [(unsigned char)3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_2)))) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2 - 1] [i_5] [i_6]))) < (arr_3 [i_0 - 3]))))));
                                arr_19 [(_Bool)1] [(_Bool)1] [i_2 + 1] [i_5] [(_Bool)1] = ((/* implicit */signed char) ((unsigned long long int) min((((int) 8866461766385664ULL)), (((/* implicit */int) (_Bool)1)))));
                                arr_20 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_5])), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 4] [i_1 + 2] [i_2 + 1] [i_5])) | (((/* implicit */int) arr_0 [i_0] [i_1]))))), (var_15)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) -1165022369);
}
