/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194222
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
    var_12 = ((/* implicit */unsigned int) max((((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_5)))) / (((/* implicit */int) var_3)))), (((/* implicit */int) var_8))));
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)0)), (((unsigned char) (_Bool)1))));
    var_14 = ((/* implicit */unsigned char) ((short) (unsigned char)19));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1)))))))) : (3769501754U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)206))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) var_2);
            arr_6 [i_1] [i_0] [i_0] = ((unsigned char) (unsigned char)237);
        }
    }
}
