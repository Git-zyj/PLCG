/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245766
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (9ULL)));
    var_11 = ((/* implicit */unsigned int) ((unsigned char) 2402078899U));
    var_12 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) ((signed char) var_8))), (var_4))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (unsigned char)250))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) arr_4 [10ULL] [i_2] [i_2]);
                    var_15 = ((/* implicit */_Bool) (-(max((((arr_0 [i_0] [4U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)124)), (3951667166U))))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2046)) << (((((/* implicit */int) max(((unsigned char)27), (var_7)))) - (221)))))) && (((/* implicit */_Bool) (~(((unsigned int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
}
