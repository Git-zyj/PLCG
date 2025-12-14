/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241537
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
    var_19 = ((/* implicit */short) ((_Bool) (~(((var_18) & (var_14))))));
    var_20 = min((((short) (!(((/* implicit */_Bool) (unsigned short)65293))))), (((/* implicit */short) (!(((/* implicit */_Bool) (short)3546))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) % (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
                var_22 = ((/* implicit */short) (((-(((/* implicit */int) arr_1 [i_1])))) % (((/* implicit */int) max((arr_0 [i_1 - 1] [i_1 - 2]), (((/* implicit */short) var_13)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_1]);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1 - 2] [i_0])) ? (arr_2 [i_0 + 1] [i_1 + 2] [i_0]) : (arr_2 [i_0 + 1] [i_1 + 1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0 + 2]))))));
                var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_0 [i_0 + 1] [i_1]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)268)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_7)))) == (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-1))))))) : (max((((var_4) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))), (((/* implicit */long long int) var_11)))))))));
    var_26 = ((/* implicit */long long int) ((unsigned short) (unsigned short)242));
}
