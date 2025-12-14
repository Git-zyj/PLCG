/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244149
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14))))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) (~(1117103813820416LL)))))) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned short)8])) : (13682259224013560535ULL)));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) (~(((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (35759518U))))));
                    arr_11 [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [i_0])))) || (((/* implicit */_Bool) arr_2 [i_1]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_15))));
    var_24 = 1058180858;
}
