/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38005
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_9)))) : (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    var_13 = ((/* implicit */long long int) arr_3 [i_0] [i_1] [17]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) var_8)), ((+(645305277023548524LL)))))));
}
