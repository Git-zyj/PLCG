/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41354
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
    var_12 -= ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_4))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    arr_12 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1 + 1]))) & (var_5)))) ? (min((var_2), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                }
            } 
        } 
    } 
}
