/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38672
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
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) (unsigned char)101)) ? (var_11) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_18)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 21U)) | (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) 4294967275U)) : (arr_1 [i_2 - 2])))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((min((1769757326U), (((/* implicit */unsigned int) var_8)))) * (((/* implicit */unsigned int) ((int) arr_9 [i_2 - 3] [i_0] [6U] [i_1])))));
                    var_21 = ((/* implicit */unsigned char) max((((long long int) arr_6 [i_2 + 2] [i_2 - 2])), (((/* implicit */long long int) ((unsigned char) arr_7 [i_2 + 2])))));
                }
            } 
        } 
    } 
}
