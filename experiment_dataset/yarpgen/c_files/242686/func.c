/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242686
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
    var_20 = var_19;
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)249));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */short) var_3))))))))));
                var_24 = ((/* implicit */unsigned long long int) ((max((((var_15) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && ((_Bool)1)))))) - (((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_2)))) & (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) (_Bool)1)))))))));
                var_25 *= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_1)))))) % (((/* implicit */int) (unsigned char)239))));
                arr_6 [(signed char)8] [(signed char)8] [(signed char)8] = ((/* implicit */int) (-(var_6)));
            }
        } 
    } 
}
