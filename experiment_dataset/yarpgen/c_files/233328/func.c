/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233328
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [5ULL] = ((/* implicit */unsigned long long int) (signed char)94);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) arr_9 [i_3] [i_2] [i_3]);
                                arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)14289))))));
    var_20 = ((/* implicit */unsigned int) var_1);
    var_21 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-53)));
}
