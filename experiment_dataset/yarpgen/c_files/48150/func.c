/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48150
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */int) var_12)) | (var_10))))))));
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39726)) ? (((/* implicit */int) (unsigned short)25787)) : (((/* implicit */int) (signed char)-41))))) : (((arr_9 [i_2] [i_2] [i_1]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)0] [(short)2] [i_3] [i_4]))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [(short)2] [i_2] [(short)2]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) 1491157346U))));
                                var_19 = (signed char)16;
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */int) (short)2038)) * (((/* implicit */int) ((((((/* implicit */int) var_5)) - (-1179127734))) <= (((/* implicit */int) (!(arr_9 [i_3] [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_2] [i_2] [i_2]))));
                    arr_15 [i_2] [0ULL] [i_1] [0ULL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2038))) * (max((2890114939U), (((/* implicit */unsigned int) (unsigned short)25809))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned char) ((arr_6 [i_0] [i_1] [i_2 + 1]) * (((((/* implicit */int) arr_1 [i_2])) << (((var_10) - (1001627302)))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_10);
}
