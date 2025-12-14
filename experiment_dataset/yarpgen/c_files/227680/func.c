/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227680
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
    var_13 -= var_4;
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43077))) : (var_5)))) ? (min((var_9), (748026777U))) : ((+(727068779U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)2501)));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) : ((+(((/* implicit */int) (unsigned char)128))))))), (((unsigned long long int) (_Bool)0)))))));
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1 - 1]), (-714642658))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_11))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (2647058377U)))))))))));
            }
        } 
    } 
    var_18 = (!(((/* implicit */_Bool) var_6)));
}
