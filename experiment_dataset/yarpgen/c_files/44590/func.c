/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44590
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
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = arr_7 [i_0 + 1];
                                var_13 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))) * (((unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) min((-2147483626), (((/* implicit */int) (short)0)))))));
                }
            } 
        } 
    } 
}
