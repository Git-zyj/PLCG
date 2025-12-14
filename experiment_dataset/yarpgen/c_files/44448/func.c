/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44448
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned char)97))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_13))));
    var_16 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_8);
                arr_6 [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1]))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_5 [i_0] [i_0 - 1]) : (arr_5 [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (short)-15789))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)154))) ? (((/* implicit */int) (unsigned short)65527)) : (((var_11) ^ (((/* implicit */int) (unsigned char)101))))))) : (var_4)));
}
