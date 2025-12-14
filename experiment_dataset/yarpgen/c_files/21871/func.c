/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21871
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
    var_17 = ((_Bool) var_16);
    var_18 = (_Bool)1;
    var_19 &= var_7;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_10), ((unsigned char)60)))), (((arr_3 [i_0]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned char)60)) : ((-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_0]))))))));
                    var_21 ^= ((_Bool) ((unsigned char) (_Bool)0));
                    var_22 = ((/* implicit */_Bool) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) & (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(var_4))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) (unsigned char)48);
}
