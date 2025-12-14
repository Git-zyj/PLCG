/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3461
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
    var_20 = ((/* implicit */short) ((min((min((((/* implicit */unsigned long long int) (short)9173)), (11139700741906936121ULL))), (((/* implicit */unsigned long long int) ((signed char) (short)5))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51130)))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min(((short)-9196), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) var_4))))) - (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_11)))))));
    var_22 = ((/* implicit */long long int) var_19);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) max(((-((+(((/* implicit */int) arr_2 [3ULL])))))), (((/* implicit */int) (unsigned short)0))));
                var_24 = ((/* implicit */long long int) (short)-9188);
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
