/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222534
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_3] [10U] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_2]) ? (((/* implicit */int) (short)16368)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [i_0] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [(signed char)5] [i_0] [(short)14] [i_3] [i_0] [8LL] [i_2])) > (((/* implicit */int) arr_12 [i_0] [15LL] [i_0] [i_3] [15LL] [i_1 - 1] [i_1 + 2]))))) : (((/* implicit */int) min((arr_12 [i_0] [i_1 + 3] [i_2] [(unsigned char)7] [i_4] [i_4] [i_2]), (((/* implicit */unsigned short) arr_6 [i_1] [i_1 + 3] [i_2])))))));
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((min((arr_9 [i_1 - 1] [i_1 + 2] [i_1 + 3]), (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1]))), (((((/* implicit */_Bool) (short)-21040)) ? (arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 2]) : (2047))))))));
                                arr_15 [i_0] [i_2] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_4]))) * (0U))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4])) + (((/* implicit */int) arr_7 [i_0] [i_4]))))), (max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) -913192294210153238LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 421578969463160830ULL)) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (arr_9 [i_2] [i_3] [i_4])))));
                            }
                        } 
                    } 
                    var_13 += ((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_1] [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 3])))))) << (((((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [12] [i_1] [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_12 [6LL] [6LL] [i_0] [8LL] [i_0] [i_0] [i_1 - 1])))) - (5289)))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((-894093623), (((/* implicit */int) (short)-21035))))), (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7943)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 913192294210153238LL)))))) : ((~(arr_8 [i_0] [i_0]))))))));
                    arr_16 [i_0] [11LL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (short)-21040)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [(signed char)8] [i_1] [(signed char)8])))))))) <= (arr_2 [i_1 + 3] [i_1 + 1])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(var_10)));
}
