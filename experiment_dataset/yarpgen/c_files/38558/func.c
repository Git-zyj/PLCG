/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38558
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_0] [i_3 - 2] [i_2] [i_1] [i_2 + 3]))) ? (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) | (var_11)))) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)14))))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] [i_1] = var_0;
                                var_13 = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_8))) & ((+(arr_6 [i_0] [i_1] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_2 - 1] [i_1] [i_0] = var_9;
                                arr_24 [i_0] [i_5] [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) (unsigned char)4)), (var_2)))), ((-(((/* implicit */int) min((((/* implicit */short) (signed char)79)), (var_7))))))));
                                arr_25 [i_0] [i_1] [i_6] [i_5] [i_0] &= ((/* implicit */unsigned short) 1048576U);
                                var_14 = 24U;
                                var_15 ^= ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) max((arr_6 [i_6] [i_0] [i_2]), (((/* implicit */int) arr_4 [(signed char)4] [(signed char)4] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = min((((/* implicit */int) ((unsigned char) min((var_8), (((/* implicit */unsigned int) var_2)))))), ((-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)22)), (var_0)))))));
    var_17 *= ((/* implicit */short) ((int) var_9));
}
