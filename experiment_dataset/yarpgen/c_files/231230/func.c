/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231230
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
    var_11 |= ((/* implicit */int) var_10);
    var_12 = ((/* implicit */signed char) max((var_12), (max((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (0LL)))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (_Bool)1))));
                        var_14 ^= ((/* implicit */short) max((var_9), (((/* implicit */signed char) (((_Bool)1) && ((_Bool)1))))));
                        arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((var_0), (((/* implicit */unsigned int) (unsigned char)26))))))) ? (var_2) : (((/* implicit */int) min((min(((unsigned char)195), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (unsigned char)171))));
    }
    var_16 ^= ((/* implicit */_Bool) (-((+(var_0)))));
    var_17 = max((min((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_10)))), (((var_1) ^ (var_1))))), (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), (var_6)))) >> (((var_1) + (677242757))))));
}
