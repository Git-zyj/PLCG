/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204687
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_11 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 17870283321406128128ULL))))))));
                    arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) var_0);
                    var_10 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752303423491ULL)) ? ((+(((((/* implicit */_Bool) 576460752303423490ULL)) ? (var_0) : (7324232139207106881ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27380)))));
                    arr_13 [13ULL] [(unsigned char)19] [i_2] [i_2] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))) | (var_8))));
}
