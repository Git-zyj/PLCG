/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239096
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_15 -= (-(((/* implicit */int) (unsigned char)33)));
                        var_16 = ((int) ((-8990767375281547609LL) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((((/* implicit */_Bool) (unsigned char)206)) ? (var_4) : (((/* implicit */int) arr_3 [i_0])))) + (413848584)))));
        var_17 = ((/* implicit */unsigned long long int) 1025355904);
        arr_12 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)51))))));
    }
    var_18 = max((((/* implicit */unsigned int) var_7)), (var_14));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)213), (((/* implicit */unsigned char) (signed char)118)))))))) ? (((/* implicit */unsigned int) (+(var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12)))));
}
