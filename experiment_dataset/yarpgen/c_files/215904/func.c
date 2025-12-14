/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215904
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
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1032192U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_4), ((_Bool)1))))))), ((+(max((var_16), (((/* implicit */long long int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(arr_4 [i_0])))), (((unsigned int) ((unsigned char) arr_0 [i_0] [0U])))));
                var_21 *= ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (var_10) : (arr_5 [i_1 - 1] [i_0] [i_0]))), (((((/* implicit */long long int) arr_4 [i_1])) + (arr_5 [i_0 - 2] [i_0] [i_0]))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_1 [i_0 - 3]))))))))));
            }
        } 
    } 
}
