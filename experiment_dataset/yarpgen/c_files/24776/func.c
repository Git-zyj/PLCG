/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24776
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
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [(unsigned char)13] [(_Bool)1] [(unsigned char)13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_2]))));
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_1 [i_0])), (((unsigned int) arr_3 [i_0] [i_0 + 2] [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) (unsigned char)255))))) ? (((1694429798035642445ULL) | ((~(var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - ((~(((/* implicit */int) var_13)))))))));
}
