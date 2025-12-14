/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26911
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
    var_20 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(0ULL)));
                                var_21 = ((/* implicit */unsigned char) (+(min((min((arr_2 [i_0] [i_1]), (((/* implicit */int) (short)32767)))), (((/* implicit */int) (_Bool)1))))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
}
