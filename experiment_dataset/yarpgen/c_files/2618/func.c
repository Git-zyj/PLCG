/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2618
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
    var_16 = ((/* implicit */signed char) ((_Bool) var_0));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (-7528661111624397530LL))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11911))))))), (((/* implicit */long long int) var_10)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (short)19922);
                        var_19 = ((/* implicit */_Bool) ((short) ((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [9ULL] [i_0])) || (((/* implicit */_Bool) arr_1 [i_3]))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_6))));
}
