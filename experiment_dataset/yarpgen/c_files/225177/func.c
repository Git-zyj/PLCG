/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225177
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = arr_0 [i_1];
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (short)18490)))));
                var_18 = ((/* implicit */unsigned long long int) (short)-17857);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (+(min((var_3), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)41494)))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_3))));
    var_21 = ((/* implicit */int) min((var_13), (((/* implicit */unsigned int) ((unsigned char) (short)18490)))));
}
