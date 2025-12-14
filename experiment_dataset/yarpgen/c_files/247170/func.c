/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247170
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) ((unsigned long long int) var_4));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))) ? (((arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_2 - 1]) + (arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_2 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (_Bool)0))));
    var_16 = ((/* implicit */signed char) ((4887826486850436381ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_11)))))));
}
