/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210191
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
    var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)34893), (((/* implicit */unsigned short) var_6)))))) / (((long long int) 1965771103U))))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2])) >> (((/* implicit */int) (!(((7481706632626426532ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30643))))))))));
                    var_15 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */unsigned int) 1570317099)) + (1091740121U))) ^ ((+(arr_8 [i_0] [i_1] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
