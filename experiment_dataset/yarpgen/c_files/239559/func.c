/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239559
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
    var_15 = ((/* implicit */unsigned char) ((unsigned int) ((((long long int) -2147483631)) / (((/* implicit */long long int) var_4)))));
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = 0ULL;
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 2] [i_0 + 2])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_0))));
}
