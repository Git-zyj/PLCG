/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216410
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
    var_16 ^= ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_2] [i_2 - 2] [i_2 + 1] [i_2])) : ((-(((/* implicit */int) arr_4 [i_2])))))), (((/* implicit */int) (unsigned char)239))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((long long int) (!(((/* implicit */_Bool) var_15))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_2] [i_2] [i_1] [i_2])), (((unsigned int) 1611757692348442125ULL))))))))));
                    arr_6 [i_0 - 3] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1]))))));
                    var_19 = ((((/* implicit */_Bool) ((short) max((var_11), (((/* implicit */int) arr_5 [i_1] [i_0] [(unsigned short)2] [i_2 + 1])))))) ? (((int) arr_3 [i_0 + 2])) : ((~(((/* implicit */int) arr_1 [i_0 + 4] [i_1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_9);
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (~(var_13)))))));
    var_22 = ((/* implicit */short) var_1);
}
