/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217951
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
    var_20 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)374)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) min((arr_5 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) var_0)))))))))));
                    var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((((arr_4 [i_0] [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) -358332327)) ? (577118420U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)374))))) - (577118420U))))));
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned int) max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) ((unsigned int) arr_7 [i_0] [16U] [2U] [18])))));
    }
    var_24 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)371)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (unsigned short)353)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))))))) != (max((((/* implicit */unsigned int) var_14)), (var_13)))));
}
