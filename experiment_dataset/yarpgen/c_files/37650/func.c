/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37650
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) ((min((arr_2 [i_1]), (arr_2 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [12LL]))))))));
                var_21 = ((/* implicit */short) 6780863009801550671LL);
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 2988432316U))) >> (((var_4) - (213127888)))))) == (((min((((/* implicit */long long int) 1306534979U)), (arr_0 [i_0] [i_1]))) / (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) 1306534972U))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_5), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < ((-(1306534979U))))))));
}
