/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247936
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
    var_17 = ((/* implicit */unsigned long long int) var_6);
    var_18 = ((/* implicit */_Bool) var_16);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_4)))) / (((/* implicit */int) (_Bool)1))));
                    var_19 &= ((/* implicit */short) var_5);
                    arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_3)));
                    arr_11 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
