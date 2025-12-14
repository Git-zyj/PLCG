/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24800
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned int) (-(990770792))))));
                arr_6 [i_1] = ((/* implicit */int) var_3);
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) | (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_1 [i_1]))))) : (1269075788446129030ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((min((min((((/* implicit */unsigned long long int) var_6)), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4177)) ? (-990770792) : (((/* implicit */int) var_5))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    var_16 -= ((/* implicit */int) ((((((/* implicit */int) var_0)) << (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10))))))) > (16383)));
    var_17 = ((/* implicit */_Bool) var_11);
}
