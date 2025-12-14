/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247733
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_7);
                    var_13 = ((/* implicit */unsigned short) -1359960711);
                    arr_9 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_2])) ? (arr_7 [i_1 - 1] [i_1] [i_2] [i_0]) : (arr_7 [i_1 + 1] [i_2] [i_2] [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)135)))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */short) ((signed char) min((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)26762))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) 1359960711);
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_8)))), (var_7))) : ((+(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
}
