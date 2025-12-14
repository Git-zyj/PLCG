/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212310
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 *= ((unsigned long long int) 16777216U);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (0) : (((/* implicit */int) arr_1 [i_0] [i_1 + 2]))))));
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) == (((/* implicit */int) var_11)))) ? (var_9) : (((((/* implicit */_Bool) 1152921504573292544ULL)) ? (((/* implicit */long long int) -715436156)) : (9223372036854775807LL)))))) - (max((max((((/* implicit */unsigned long long int) (unsigned char)48)), (14200870635941080216ULL))), (((/* implicit */unsigned long long int) 0U))))));
    var_15 = ((/* implicit */long long int) 512U);
}
