/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5470
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
    var_16 = ((/* implicit */unsigned long long int) (~(((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-1)))))));
    var_17 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [(short)1])) : (((/* implicit */int) (signed char)8))))))), (max((((/* implicit */unsigned long long int) (+(-432437307)))), (((unsigned long long int) arr_0 [(unsigned char)0]))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((432437306), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (9634413059575692795ULL)))));
                arr_5 [i_0] [i_0] [(short)4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
            }
        } 
    } 
}
