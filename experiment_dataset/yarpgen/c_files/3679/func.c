/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3679
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((arr_2 [(signed char)10] [(signed char)10]) / (((/* implicit */long long int) -11))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1]))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) -989566681)))))));
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) (signed char)-97)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((long long int) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (4611686018360279040ULL)))) : (var_9)));
    var_16 += ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) var_5))));
}
