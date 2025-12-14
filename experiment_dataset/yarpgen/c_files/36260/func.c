/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36260
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
    var_14 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))), (arr_6 [i_0])));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-114)) ? (((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) : (arr_6 [i_2 + 1])))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((arr_6 [i_1 + 2]) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 2]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 2]))) + (var_10)))))))));
                }
                var_17 = ((/* implicit */signed char) ((unsigned short) arr_4 [i_1]));
                var_18 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) arr_9 [i_0] [(unsigned char)0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (arr_5 [i_0])))));
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (signed char)-1);
            }
        } 
    } 
}
