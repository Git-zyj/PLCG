/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30728
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
    var_20 = ((/* implicit */unsigned char) var_7);
    var_21 |= ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_13)), (arr_3 [i_1])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [(short)6] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [(unsigned char)2])) : ((-2147483647 - 1)))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))))) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) ((_Bool) -32LL))))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))));
                    arr_7 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_2] [i_1] [i_0]))) ? (((/* implicit */int) arr_2 [5LL] [i_2])) : ((-(((((/* implicit */int) (short)32640)) + (((/* implicit */int) (unsigned char)239))))))));
                }
                for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (long long int i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_5 - 2] [i_3])) / (((/* implicit */int) arr_9 [i_4] [i_5 + 2] [i_3]))))) ? (((unsigned int) arr_9 [i_4] [i_5 - 2] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_3] [i_5 - 2] [2U]), (arr_9 [i_0] [i_5 + 1] [i_3]))))))))));
                                var_24 = ((/* implicit */long long int) arr_14 [i_5 - 2] [i_5 - 2]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) ((short) arr_2 [i_0] [9U]))));
                    arr_17 [i_0] [i_0] [i_3] = ((/* implicit */long long int) var_8);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [5] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_7] [i_6])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))));
                                var_26 = var_10;
                                var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((unsigned int) arr_5 [i_0] [(short)9] [i_0] [i_7])) & (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_6] [(signed char)4] [4LL] [i_1] [(signed char)4])))))) : (max((min((((/* implicit */unsigned long long int) arr_5 [i_0] [4U] [i_6] [i_6])), (arr_15 [i_3] [i_1] [i_0]))), (((((/* implicit */_Bool) (short)16384)) ? (arr_20 [3U]) : (arr_15 [i_0] [5LL] [i_3])))))));
                                var_28 *= ((/* implicit */unsigned short) ((unsigned int) min((var_5), (((/* implicit */unsigned short) (unsigned char)9)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
