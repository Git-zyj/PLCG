/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217298
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) -4645041626216452008LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (((((/* implicit */int) (signed char)25)) | (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (signed char)-37)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-18)) - (((/* implicit */int) (signed char)56)))))));
                    arr_9 [i_0 + 3] [i_0 + 3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) (signed char)63)))))));
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-71))))))));
                }
            } 
        } 
    } 
    var_13 += ((((/* implicit */_Bool) ((var_2) | (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-51)))))))) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) ((short) var_8))));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_6)));
}
