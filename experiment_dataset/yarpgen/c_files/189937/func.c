/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189937
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
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((int) var_4)) ^ ((-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((944468450), (((/* implicit */int) (_Bool)0))));
                            var_18 = ((/* implicit */long long int) min((7583189138231618046ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (63488LL))))));
                            var_19 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (short)-21583)), (10ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
}
