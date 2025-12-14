/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28932
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
    var_15 *= ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((short) ((unsigned char) (signed char)-43))))));
                    var_17 |= ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)43))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)-43)))))));
}
