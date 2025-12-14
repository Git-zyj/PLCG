/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36432
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = var_0;
                    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) var_8))));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) (short)5980);
                }
            } 
        } 
    } 
    var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_9), (((/* implicit */unsigned long long int) var_7)))), (10960189409502985121ULL)))) ? (max((((2147483647) & (((/* implicit */int) (unsigned short)39195)))), (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) : (((/* implicit */int) var_4))));
    var_12 |= ((/* implicit */signed char) var_3);
}
