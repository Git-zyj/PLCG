/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40748
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) (_Bool)1)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))))))))))));
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)53851)))))))));
    var_18 *= ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_11), (var_11))), (((/* implicit */short) (!((_Bool)1))))))) ? (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)8557)))))));
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0])))));
            }
        } 
    } 
}
