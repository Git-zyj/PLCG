/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39921
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((max((((/* implicit */unsigned long long int) var_1)), (arr_0 [i_0] [i_1 - 2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3483)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_18 ^= ((/* implicit */int) ((var_15) != (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_0 + 1])) < (arr_2 [i_1 + 1]))))));
                    arr_8 [i_1] [i_0] = ((/* implicit */short) min((max((((/* implicit */unsigned int) var_12)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24901)))) == ((+(((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */int) ((long long int) (~(2358965769U))));
                }
                var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 12U)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) 128988700)))));
                var_21 = ((/* implicit */short) ((unsigned char) var_0));
            }
        } 
    } 
    var_22 = max((((/* implicit */int) var_17)), (var_15));
}
