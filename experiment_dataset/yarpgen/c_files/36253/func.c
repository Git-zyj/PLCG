/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36253
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
    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)49104)) | ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (var_4))))))));
    var_21 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_1)), (((int) var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_18)))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)201))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) var_11))))) & (((max((((/* implicit */unsigned long long int) (_Bool)1)), (1565291773952660366ULL))) | (max((((/* implicit */unsigned long long int) var_3)), (16881452299756891250ULL)))))));
    var_24 = var_7;
}
