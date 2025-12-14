/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37970
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
    var_15 = ((/* implicit */short) (+(((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_7) + (427070246)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_4 [i_0] [i_1] [19ULL])) / (((/* implicit */int) arr_1 [i_0]))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-1))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */unsigned char) var_14);
}
