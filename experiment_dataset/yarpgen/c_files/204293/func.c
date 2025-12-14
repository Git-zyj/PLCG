/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204293
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (((/* implicit */int) (short)22649))))) ? (max((var_12), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18406)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1]))))) : (((((/* implicit */_Bool) ((8388096U) - (((/* implicit */unsigned int) 16384))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1]))) : (((var_7) ? (8388096U) : (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))))));
                    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2] [16])) : (var_6)))));
                    var_18 = (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 + 1])))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) ((3897913419U) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_2 - 1])) >> (((((/* implicit */int) var_11)) - (18846))))))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
}
