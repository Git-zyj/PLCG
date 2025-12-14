/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214029
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
    var_11 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 12)) ? (max((((/* implicit */int) arr_3 [i_0] [i_1])), (arr_0 [i_1] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((((/* implicit */_Bool) (short)28337)) ? (1597354281883560722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0] [(unsigned char)12]), (arr_0 [i_1] [i_0]))))));
            }
        } 
    } 
}
