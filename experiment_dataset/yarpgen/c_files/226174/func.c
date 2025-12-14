/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226174
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */signed char) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [4ULL] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) -1456851943247620635LL)) ? (8257547850668418847ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((max((max((((/* implicit */int) var_10)), (var_9))), (((/* implicit */int) min(((signed char)-37), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */int) ((signed char) arr_3 [i_0] [(unsigned char)1] [(unsigned char)1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((1456851943247620632LL) / (((/* implicit */long long int) 924480353U))));
}
