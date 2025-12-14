/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219607
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
    var_10 = ((/* implicit */signed char) var_8);
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)127)) | (((/* implicit */int) var_1))))))), (((((4398045986816ULL) / (var_7))) % (((/* implicit */unsigned long long int) (+(var_6)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) var_0);
                arr_5 [0] = ((/* implicit */_Bool) (-(((arr_1 [i_0 - 1] [8]) / (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_1))))))));
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1])))) ? (((/* implicit */long long int) var_4)) : (max((((/* implicit */long long int) arr_0 [i_0 - 2] [i_0 - 2])), (7085236073470840906LL)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1260683220)) ? (var_4) : (var_6)))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [15U] [i_0]))) : (127U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
            }
        } 
    } 
}
