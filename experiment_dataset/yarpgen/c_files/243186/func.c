/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243186
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
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1])) ? (((/* implicit */long long int) var_4)) : (((long long int) var_4))));
                var_16 *= ((/* implicit */unsigned int) (unsigned short)25);
                var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)22), (arr_3 [i_0] [i_0 + 2] [i_0 - 2])))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_2);
    var_19 = -616056755627770563LL;
}
