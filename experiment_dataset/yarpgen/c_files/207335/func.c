/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207335
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)18718)) : (((/* implicit */int) arr_2 [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_16 = arr_4 [i_0] [i_1 - 1] [i_2 - 1] [i_3];
                            var_17 = ((/* implicit */unsigned short) arr_5 [i_0] [(_Bool)1]);
                            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & (arr_6 [i_0] [(short)23] [i_2])))) * (((unsigned long long int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [(short)14] [i_3 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (((unsigned int) arr_2 [i_0]))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) / (var_9)))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) 17112760320ULL))));
                            arr_8 [i_0] [i_1] [i_2 - 1] [i_3 - 1] [(unsigned short)6] = ((/* implicit */unsigned short) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) ((unsigned short) var_0))) != (((/* implicit */int) var_6)))));
}
