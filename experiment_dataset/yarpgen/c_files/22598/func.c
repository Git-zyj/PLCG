/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22598
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
    var_14 = max((((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_1))))) ^ (var_12))), (((/* implicit */unsigned int) var_6)));
    var_15 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0))), (((/* implicit */unsigned int) var_1)))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)13)) : ((~(((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (var_11))), (((/* implicit */unsigned int) ((607818638) / (((/* implicit */int) var_10)))))))) ? (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-27)), (arr_0 [i_0])))), (arr_2 [i_0]))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-41)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)-24))));
                                var_18 = ((/* implicit */_Bool) arr_0 [(signed char)5]);
                                arr_12 [i_2 + 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2 + 1] [i_1] [i_2 + 2] [i_3] [i_4] [i_4] [3ULL])) ^ (((/* implicit */int) arr_11 [i_2 - 3] [i_2] [i_2] [i_2] [i_4] [(short)7] [i_2 + 2]))))) ? (((((/* implicit */int) arr_11 [i_2 - 2] [(unsigned short)8] [(unsigned char)5] [i_3] [i_2 - 2] [i_1] [i_2 - 2])) << (((((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [(short)6] [i_1] [i_4] [i_4] [i_4])) - (56418))))) : (((((/* implicit */int) arr_11 [i_2 - 3] [i_2] [i_2] [i_2] [i_4] [i_2] [i_2])) | (((/* implicit */int) arr_11 [i_2 + 2] [i_0] [i_2] [i_3] [(signed char)4] [(unsigned char)5] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
}
