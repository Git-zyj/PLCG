/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236595
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_6 [i_0] [i_0]), (((/* implicit */int) arr_3 [i_0] [i_0])))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_0]), (arr_5 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))) : (((unsigned int) arr_5 [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_10);
    var_18 = ((/* implicit */signed char) (unsigned char)8);
    var_19 = ((/* implicit */unsigned short) var_1);
}
