/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203563
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(short)13] [i_1] [(short)13] [i_3] [i_3] [i_4 + 3] = ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_1 [i_4] [i_2]))) >= (max((arr_6 [i_4] [i_4 + 2] [i_4] [i_4 + 2]), (((/* implicit */int) (_Bool)1))))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % ((~(((((/* implicit */_Bool) 8388576)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))) : (arr_8 [i_0] [i_2] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_22 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_6])))))));
                                arr_23 [i_1] [i_5] [(short)15] [i_1] [i_1] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1499657038437460698LL))) - (arr_8 [i_0] [i_1] [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_2])) + (((((/* implicit */int) (unsigned char)65)) - (((/* implicit */int) var_9)))))))));
                                var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [(signed char)5])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)26)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (1499657038437460698LL)))));
                                var_14 -= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)17))))));
                            }
                        } 
                    } 
                    arr_24 [(signed char)14] &= ((/* implicit */signed char) ((unsigned short) arr_13 [i_0] [i_1] [(unsigned char)1] [(unsigned short)8] [i_0]));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_1 [i_1] [i_1])))) ^ (arr_15 [i_0] [i_0] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) < (((/* implicit */int) arr_2 [i_2] [i_1])))))) : (min(((-(var_3))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)0)))))));
                }
            } 
        } 
    } 
}
