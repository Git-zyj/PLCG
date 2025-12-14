/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243871
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) != (((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_2)))))) : (var_8)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */short) (-(-5066348915562529109LL)));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((min((((/* implicit */long long int) arr_0 [i_1] [(signed char)20])), (5066348915562529109LL))) ^ (((/* implicit */long long int) ((arr_0 [20U] [i_1]) ^ (arr_0 [i_1] [i_1])))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34576))) ^ (-7142816550095729546LL)));
            }
        } 
    } 
}
