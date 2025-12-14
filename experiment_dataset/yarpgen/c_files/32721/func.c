/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32721
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
    var_17 = ((/* implicit */signed char) (-((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)13783), (((/* implicit */unsigned short) var_6))))) ? (max((((/* implicit */unsigned int) var_1)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))))));
        var_19 = ((/* implicit */unsigned short) var_6);
        arr_3 [i_0] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-30320)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_10))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)51730)) : (((/* implicit */int) var_5)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            {
                arr_9 [i_1] [i_1] [i_2] = ((/* implicit */int) (-(((11ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_10 [i_2] = ((/* implicit */short) var_6);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_3);
}
