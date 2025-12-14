/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53572
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
    var_18 &= ((/* implicit */int) ((((/* implicit */int) ((((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) != ((-(var_4)))))) >= (var_4)));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned char) ((_Bool) var_9))))))));
    var_20 = ((/* implicit */int) ((unsigned char) (_Bool)1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = (((~(((/* implicit */int) (_Bool)1)))) + ((+(((((/* implicit */int) (signed char)-32)) * (((/* implicit */int) arr_2 [(_Bool)1] [i_0 + 3])))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 3])) ^ ((~(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
