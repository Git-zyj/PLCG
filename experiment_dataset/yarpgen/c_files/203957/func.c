/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203957
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) arr_1 [i_1]);
                    arr_12 [i_0] [(unsigned short)5] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_2]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (max((var_2), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((var_6) % (((/* implicit */int) var_5))))))))))));
}
