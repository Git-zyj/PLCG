/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21123
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_8))));
    var_21 = ((((max((((/* implicit */unsigned long long int) var_2)), (var_10))) / (((/* implicit */unsigned long long int) var_1)))) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)59)), (3192500324U)))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)56)), (max((((/* implicit */unsigned short) max((var_16), (var_4)))), (var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) arr_2 [i_1]))))) ? (arr_6 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)38852), (var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)26702))))))));
                    arr_8 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */signed char) (~(min((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) var_6))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_7);
}
