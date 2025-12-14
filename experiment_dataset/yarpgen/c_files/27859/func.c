/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27859
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
    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) (_Bool)0))))) : (min((var_11), (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((var_5) != (((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_1] [i_0 + 2]))))), ((signed char)114)));
                    arr_8 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_2])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) (signed char)-36)), (arr_3 [i_0 - 3]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))))));
}
