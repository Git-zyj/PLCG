/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240395
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
    var_17 = ((/* implicit */int) var_4);
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((var_2), (var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) != (4294967295U))));
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))))) >> (((((/* implicit */int) var_0)) - (46800)))));
        var_21 = ((/* implicit */_Bool) var_3);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)56)) << (((((/* implicit */_Bool) (unsigned short)65535)) ? (0U) : (var_4)))));
                    var_23 = ((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_0]) | (((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1))))));
                }
            } 
        } 
    }
}
