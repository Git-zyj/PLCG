/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19265
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
    var_12 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_6))))));
    var_13 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
    var_14 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0 - 3] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min(((~(arr_2 [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) & (((/* implicit */int) (short)4786)))))));
                    var_15 = ((/* implicit */unsigned short) (+((+((~(6333227013224179395LL)))))));
                }
            } 
        } 
    } 
}
