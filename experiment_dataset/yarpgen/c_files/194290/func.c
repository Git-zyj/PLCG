/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194290
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
    var_12 = ((/* implicit */unsigned char) (-(var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((unsigned char) ((int) ((unsigned int) (signed char)87))));
                    var_14 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0])) - (28022)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) 7U))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0])) + (2147483647))) >> (((((((/* implicit */int) arr_7 [i_0])) - (28022))) - (19882)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) 7U)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))), ((~(((/* implicit */int) arr_5 [i_0] [i_3 + 2] [i_3 + 1]))))));
                        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (714718574U) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 + 3] [i_3 + 3] [8LL] [i_3 - 1] [i_3 + 2] [i_3]))))) : (((/* implicit */int) ((unsigned char) var_3)))));
                        arr_13 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (3580248730U))))), (((/* implicit */unsigned int) ((unsigned short) 3580248740U)))));
                    }
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((min((((/* implicit */long long int) (unsigned char)222)), (arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)5] [i_0]))) + (((/* implicit */long long int) ((unsigned int) (signed char)-78))))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((((/* implicit */_Bool) (unsigned short)20)) ? (714718574U) : (((/* implicit */unsigned int) -980285051)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)126)) / (((/* implicit */int) ((signed char) (signed char)94))))))));
}
