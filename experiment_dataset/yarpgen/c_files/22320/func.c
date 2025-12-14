/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22320
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (min((144114088564228096ULL), (((/* implicit */unsigned long long int) 2550251915U))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) (unsigned char)255);
                    var_14 = ((/* implicit */unsigned short) arr_4 [i_0 + 3] [i_1 + 1] [i_1 + 1]);
                    arr_8 [i_0] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_1 [i_2 + 2])))) ? (min((arr_7 [(_Bool)1] [i_1 + 1] [i_2 - 2]), (var_4))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) || (((/* implicit */_Bool) (signed char)-118)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
}
