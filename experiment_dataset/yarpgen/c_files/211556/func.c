/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211556
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_9)))) & (((/* implicit */int) (_Bool)1))))) ^ (max((max((((/* implicit */unsigned long long int) var_6)), (var_4))), (((/* implicit */unsigned long long int) var_3))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-4LL) : (((/* implicit */long long int) 343831931))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7103997197486448123LL)) ? ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))) : (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_6 [i_1]))))));
                    var_15 = ((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((((((/* implicit */_Bool) 3LL)) && (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) arr_1 [i_2])))))));
                }
            } 
        } 
    } 
}
