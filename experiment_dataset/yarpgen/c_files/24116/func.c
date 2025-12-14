/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24116
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
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_12))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((signed char) var_0)));
                    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2676205423U)) - (7387756070183952366ULL)));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)4094)))) + (((((/* implicit */unsigned long long int) var_5)) | (12694703546148347854ULL)))));
                    var_20 = ((/* implicit */int) ((_Bool) ((_Bool) 402653184U)));
                }
            } 
        } 
    } 
}
