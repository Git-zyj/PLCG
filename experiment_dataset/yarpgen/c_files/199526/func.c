/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199526
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_3] [6] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)2] [(unsigned short)14] [i_2] [i_2] [i_2] [i_2]))) : (var_11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_4 + 3] [i_3] [i_1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) (unsigned char)72))))))));
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_3] [12ULL]))));
                                arr_13 [i_4] [i_0] [i_1] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */int) var_1);
                                arr_14 [(_Bool)1] [i_4 - 1] [i_3] [i_4] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) max((min((var_7), (var_7))), (((/* implicit */long long int) -192101868))))) ? (((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [8LL] [0ULL])) ? (((/* implicit */int) arr_2 [i_4 - 2] [i_3] [i_1])) : (arr_5 [i_0] [i_1] [i_2]))) / ((~(192101848))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (long long int i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_19 [14] [(short)7] [i_2] [i_5] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) << (((var_11) - (432757627083206168ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : ((~(arr_7 [i_0] [(short)14] [i_2] [i_5]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5] [14ULL] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))), (arr_9 [i_2] [i_5] [i_6 + 1] [i_2] [i_6]))))));
                                var_13 = ((/* implicit */int) max((var_6), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (arr_6 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = var_7;
}
