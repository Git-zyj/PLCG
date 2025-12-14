/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245073
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (((+((+(4294967295U))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)62)))))));
                                var_18 += ((/* implicit */_Bool) ((4294967295U) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27140))) * (4294967295U)))));
                                var_19 += ((/* implicit */signed char) arr_12 [i_4] [i_1] [i_2] [(signed char)0] [(signed char)0]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
}
