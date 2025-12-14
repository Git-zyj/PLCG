/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24754
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((var_14), ((!(((/* implicit */_Bool) var_2))))))), (var_12)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (signed char)-14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? ((~((-(arr_7 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))));
                    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3))));
                    var_20 = ((/* implicit */unsigned char) (+(var_9)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
}
