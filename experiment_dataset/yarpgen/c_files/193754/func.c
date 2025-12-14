/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193754
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)247)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8))) < (var_3))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 += var_5;
                    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= ((~(((unsigned int) arr_0 [0]))))));
                }
            } 
        } 
        arr_8 [(signed char)12] [(signed char)12] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_4))))));
    }
    var_13 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
    var_14 = ((/* implicit */int) (short)-8);
}
