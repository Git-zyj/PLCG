/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216359
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
    var_15 = ((/* implicit */unsigned short) min(((-(max((((/* implicit */int) (signed char)-43)), (-1016837418))))), (min(((-(((/* implicit */int) (unsigned char)34)))), ((-(((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (min((((/* implicit */unsigned long long int) (signed char)26)), (var_14)))))));
                    arr_9 [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)222)))), (((/* implicit */int) (short)32759))))), (min((min((arr_7 [i_2] [i_0] [i_1] [i_0]), (((/* implicit */long long int) (unsigned char)192)))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_13)), ((unsigned char)196))))))));
                }
            } 
        } 
    } 
    var_16 = (~(min((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) var_13))))), (min((var_1), (((/* implicit */long long int) var_6)))))));
    var_17 = ((/* implicit */_Bool) min((min((max((((/* implicit */unsigned long long int) var_13)), (var_11))), (((/* implicit */unsigned long long int) (~(695239370U)))))), (((/* implicit */unsigned long long int) min(((-(4436477209587279571LL))), (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) var_4))))))))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-((-(max((var_6), (var_6))))))))));
}
