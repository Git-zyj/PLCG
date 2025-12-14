/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50910
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
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) <= (((/* implicit */int) var_4)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((arr_1 [i_1]) / (arr_3 [i_0] [i_1]))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
