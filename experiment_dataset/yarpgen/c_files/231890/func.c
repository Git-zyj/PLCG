/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231890
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((var_11) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_7))) < (((((/* implicit */_Bool) (unsigned short)51479)) ? (var_2) : (var_2)))))) : (((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1]))) : (var_13))));
                    var_19 = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) max((((/* implicit */short) var_11)), (var_16)))) : (((/* implicit */int) min((var_0), ((_Bool)0)))))))));
                    arr_7 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (!(max(((_Bool)1), ((_Bool)1)))));
                }
            } 
        } 
    } 
}
