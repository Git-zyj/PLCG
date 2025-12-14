/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227377
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
    var_15 += (!((_Bool)1));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)26))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) - (2147483647)));
                        var_17 -= ((/* implicit */unsigned int) (unsigned char)7);
                        arr_13 [8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_7 [i_2]))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3)))) ? ((+(-431269973))) : (((((/* implicit */_Bool) (unsigned char)28)) ? (-431269973) : (((/* implicit */int) var_8))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(var_10))))));
}
