/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220776
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
    var_12 = ((/* implicit */signed char) ((max(((((_Bool)1) && ((_Bool)1))), (min((var_1), (var_6))))) && (((/* implicit */_Bool) var_3))));
    var_13 = ((/* implicit */signed char) max((min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (-456098444667985485LL))))), (((/* implicit */long long int) (+(587363022))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)21]))) <= (3801147273U))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1 - 1] [i_1 - 1]))) ? (((var_2) << (((13827594425260156416ULL) - (13827594425260156356ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 - 2] [i_1 - 2])))))));
            }
        } 
    } 
}
