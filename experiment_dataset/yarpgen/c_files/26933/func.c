/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26933
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
    var_16 = ((/* implicit */long long int) 888797001U);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */long long int) 3406170295U)), (var_6)))))) && (((((((/* implicit */_Bool) var_2)) ? (888797001U) : (888797001U))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-93)) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15928)) >> (((3406170264U) - (3406170244U)))))), (min((1878117947605170788LL), (((/* implicit */long long int) 472748428)))))) : (((/* implicit */long long int) -536839702))));
                    var_19 = ((/* implicit */long long int) arr_3 [i_0]);
                    var_20 = ((/* implicit */unsigned short) (((-(max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (var_9))))) < (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-32)) * (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1]))))), (min((((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_1 - 1] [i_1])), (arr_0 [i_1 + 2] [i_2]))))))));
                    var_21 = ((/* implicit */long long int) max((arr_2 [i_0]), (((/* implicit */short) ((unsigned char) max((arr_2 [i_1]), (arr_6 [i_0])))))));
                }
            } 
        } 
    } 
}
