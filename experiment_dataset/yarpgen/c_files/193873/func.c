/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193873
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
    var_15 = ((/* implicit */unsigned char) 10522994091426607713ULL);
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (short)18820)))))) & (min((var_7), (((unsigned long long int) (signed char)16))))));
    var_17 = min((((/* implicit */signed char) ((((/* implicit */int) var_6)) <= ((-(338140768)))))), (var_4));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) var_6);
                    var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((signed char) var_0)), (((signed char) (+(var_8))))));
}
