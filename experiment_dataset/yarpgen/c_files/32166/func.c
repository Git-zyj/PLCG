/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32166
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
    var_17 = ((short) ((short) var_2));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */_Bool) (((+(((/* implicit */int) (short)-2109)))) ^ (((/* implicit */int) max((max((((/* implicit */short) (_Bool)1)), (arr_1 [(short)12] [(short)12]))), (((/* implicit */short) max(((_Bool)1), ((_Bool)1)))))))));
        var_19 |= ((/* implicit */_Bool) (short)3358);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_2)) < (((/* implicit */int) (!((_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), ((_Bool)1)));
                    var_21 ^= (short)-3359;
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-3383))))));
}
