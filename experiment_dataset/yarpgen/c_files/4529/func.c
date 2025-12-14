/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4529
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
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 8))) != (((/* implicit */int) ((signed char) arr_1 [i_0 - 1])))));
                    arr_7 [(unsigned short)1] [i_1] [i_0] = ((/* implicit */_Bool) ((max(((~(arr_3 [i_0]))), (((/* implicit */unsigned long long int) (-(var_6)))))) - (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)12499)) ? (((/* implicit */int) (_Bool)1)) : (var_6))))))));
                }
            } 
        } 
    } 
}
