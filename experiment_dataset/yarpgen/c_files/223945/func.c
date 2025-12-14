/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223945
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) || (((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) var_2))))))))));
                                var_18 = ((/* implicit */short) ((long long int) 1052214187U));
                                var_19 ^= ((/* implicit */int) (~((~(arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */_Bool) min(((-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))), (max((arr_13 [i_0] [i_1] [i_1] [i_0] [i_0] [i_4 - 1] [i_4 - 1]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4 - 1] [19LL])))));
                                arr_16 [i_4] [i_4] [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_4 - 1] [i_4 - 1] [i_4] [i_4])))), (((/* implicit */int) min((((/* implicit */signed char) arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])), (arr_0 [i_4 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((((/* implicit */unsigned int) arr_1 [i_0])) ^ (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) arr_3 [i_5] [i_5]);
        var_20 |= ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */unsigned int) arr_9 [i_5])) | (1052214187U))) >> (((((((/* implicit */_Bool) 9908792800929184989ULL)) ? (1048575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (1048566ULL))))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (arr_4 [i_5] [i_5] [i_5])))) ? ((-(3242753123U))) : (((/* implicit */unsigned int) (-(min((arr_3 [i_5] [(short)7]), (((/* implicit */int) var_2)))))))));
        arr_23 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 3350283706U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)60061), ((unsigned short)28672))))) : (((unsigned long long int) 3350283706U))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((arr_2 [i_5] [i_5]) + (2147483647))) >> (((((/* implicit */int) arr_19 [i_5])) - (30923)))))) <= (((((/* implicit */_Bool) ((arr_5 [i_5] [i_5] [i_5]) | (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_6 [15U] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384)))))));
    }
}
