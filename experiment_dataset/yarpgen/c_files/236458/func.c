/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236458
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
    var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))), (var_10))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (min((var_13), (((/* implicit */unsigned int) (signed char)74)))))))));
    var_18 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((arr_1 [i_2 + 1] [i_2 + 2]) ? (arr_3 [i_0]) : (min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)16]))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) var_8)))))))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (~(((/* implicit */int) (signed char)37))))) / ((-(-4209462907403067766LL))))) << (((513912941858342102LL) - (513912941858342060LL)))));
                    var_21 = ((/* implicit */unsigned short) ((_Bool) (-(var_11))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) var_2))) % (min((var_11), (((/* implicit */unsigned long long int) ((_Bool) var_11)))))));
}
