/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210263
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
    var_18 = ((/* implicit */signed char) var_16);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_19 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30768)) % (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_5 [i_0] [i_1]))))))) ^ (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0]))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 1]))));
                }
            } 
        } 
    } 
}
