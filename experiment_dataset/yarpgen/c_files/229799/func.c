/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229799
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) (signed char)-15);
                var_12 -= ((/* implicit */signed char) (~(2147483647)));
                var_13 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_0 - 2])))) ? (max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (arr_1 [i_1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) 12747392480548821167ULL);
    var_15 = ((/* implicit */unsigned long long int) (unsigned short)14179);
    var_16 = ((var_9) > (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_11)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_11)))))))));
}
