/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33264
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
    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) ((var_14) <= (((/* implicit */long long int) var_8))))))));
    var_17 = ((/* implicit */unsigned char) (-(((int) ((int) var_14)))));
    var_18 = ((/* implicit */unsigned short) (unsigned char)231);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((int) arr_4 [i_1]))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((int) ((long long int) ((unsigned char) (unsigned char)24))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned char) var_10))))) : (var_7)));
}
