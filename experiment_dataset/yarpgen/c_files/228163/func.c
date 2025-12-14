/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228163
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((_Bool)0), ((_Bool)0)))) + (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))))));
    var_21 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_22 = min((max((((/* implicit */int) (_Bool)0)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1)));
                var_23 = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */long long int) min((arr_1 [i_0] [2LL]), (((/* implicit */int) (_Bool)1))))), (max((arr_0 [i_0] [(_Bool)0]), (((/* implicit */long long int) (_Bool)1)))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_0] [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))))), (((/* implicit */long long int) ((unsigned char) (_Bool)1))))))))));
                arr_4 [i_0] [5] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min(((_Bool)0), (arr_3 [i_0] [i_1]))));
                var_25 = ((/* implicit */short) min((max(((((_Bool)1) ? (3638556512U) : (((/* implicit */unsigned int) 236097694)))), (((/* implicit */unsigned int) arr_3 [i_1] [i_0])))), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
}
