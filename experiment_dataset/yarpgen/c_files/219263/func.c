/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219263
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((((((/* implicit */_Bool) -1576517431)) ? (var_1) : (((/* implicit */unsigned long long int) -755799342)))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((18446744073709551608ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0 + 2]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (arr_6 [i_0 - 1]))) : ((-(-755799342))))))));
                arr_7 [(unsigned char)2] [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0])), (arr_6 [i_0])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) -755799342))));
}
