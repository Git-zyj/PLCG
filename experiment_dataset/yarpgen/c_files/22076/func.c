/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22076
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned long long int) var_12)))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) - (var_11)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) (~((~(((var_4) >> (((((/* implicit */int) (unsigned short)55664)) - (55648)))))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_7 [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (arr_7 [i_0 - 1]))))) : ((+(arr_7 [i_0 - 1])))));
                }
            } 
        } 
    }
    var_19 -= ((/* implicit */long long int) var_12);
}
