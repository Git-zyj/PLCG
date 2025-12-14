/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28444
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
    var_14 += ((/* implicit */long long int) (+(var_10)));
    var_15 = var_13;
    var_16 = (~(min((((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_12))))), (var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_0 [(_Bool)0]))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (var_13)))) ? (((arr_0 [(unsigned char)8]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1)))) : (((var_3) ? (((/* implicit */int) arr_0 [(signed char)4])) : (((/* implicit */int) arr_1 [i_0] [i_1])))))), (((((/* implicit */int) arr_0 [0ULL])) >> (((((/* implicit */int) (_Bool)1)) % (-1744726320))))))))));
                var_19 &= ((/* implicit */short) (+(((arr_1 [i_0] [i_1 - 1]) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~((~(((var_0) << (((((var_9) + (7997514462508540210LL))) - (29LL)))))))));
}
