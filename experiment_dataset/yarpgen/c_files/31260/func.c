/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31260
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
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((1234475066U) <= (((/* implicit */unsigned int) var_3))))) : (((/* implicit */int) ((unsigned short) var_4))))) / (((/* implicit */int) var_11))));
    var_15 -= ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_12) : (176050229U)))), (((/* implicit */unsigned long long int) var_13))));
    var_16 = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_6) : (((/* implicit */int) (unsigned short)21680)))) != (((((/* implicit */_Bool) ((var_4) | (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned short)43856)) & (((/* implicit */int) (unsigned short)25346)))) : (((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [7U] [i_2] [7U]))))))));
                    var_18 = ((/* implicit */unsigned int) ((_Bool) ((arr_2 [i_0] [i_2]) ^ (arr_9 [i_2] [i_2] [i_2] [i_2]))));
                    var_19 -= ((unsigned short) arr_5 [i_1]);
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (1572765531U)));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned int) ((int) var_11))))));
                }
            } 
        } 
    } 
}
