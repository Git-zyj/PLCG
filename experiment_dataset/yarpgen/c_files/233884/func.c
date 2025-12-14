/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233884
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (((+(((((/* implicit */_Bool) 1646455006)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) : (arr_4 [(unsigned char)1] [i_0] [3U]))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0] [i_0]))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0])) : ((+(((/* implicit */int) var_8))))))));
                arr_7 [i_0] [(unsigned short)6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (-2108276584)));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)-22940)) ? (((/* implicit */int) (short)22939)) : (((((/* implicit */_Bool) (short)-22934)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)22939)))))));
    var_13 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_5)), (4311888650012960322ULL))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))) : (((((/* implicit */_Bool) 32767)) ? (((/* implicit */unsigned long long int) 295219240)) : (18348461196824718183ULL)))))));
    var_14 = ((/* implicit */signed char) var_8);
}
