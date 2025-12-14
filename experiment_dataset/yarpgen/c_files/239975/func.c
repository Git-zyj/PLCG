/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239975
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
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-34)) ? (var_1) : (var_6))) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [(unsigned short)3] [i_1] [6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (min((((/* implicit */unsigned int) -2042965746)), (arr_3 [i_0])))))) < (-159940314454163186LL)));
                var_19 = ((/* implicit */unsigned int) max((((arr_2 [i_0]) | (((/* implicit */long long int) ((int) (short)-1976))))), (((((/* implicit */long long int) arr_3 [i_0])) / (159940314454163176LL)))));
                var_20 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_3))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_4);
            }
        } 
    } 
}
