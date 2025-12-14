/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215234
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
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 ^= ((/* implicit */unsigned char) var_15);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) arr_3 [i_2]);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (arr_6 [i_0] [i_1])))), (758067656564506970ULL)))));
                    var_21 = (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) - (var_3))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))) < ((~(var_8)))));
                }
            } 
        } 
    } 
    var_23 = max((4926632833966255830LL), (17LL));
}
