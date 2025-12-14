/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31856
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
    var_15 = ((/* implicit */long long int) var_5);
    var_16 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_2 + 3] [i_2 - 2] [i_2 - 1] [i_2 - 1]) > (arr_8 [i_2 + 1] [i_2 + 3] [i_2] [i_2 + 1]))))) > (((long long int) var_6))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2480583609523076671ULL)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))))), ((-(var_11))))))));
                }
            } 
        } 
    } 
    var_19 = var_1;
}
