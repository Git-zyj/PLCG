/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214559
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) var_9);
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2 + 1] = ((/* implicit */int) arr_6 [(signed char)8]);
                                arr_14 [i_0] [i_4] = ((/* implicit */short) ((unsigned short) (~(2147483647))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned int) (-(arr_7 [i_0] [i_0] [i_2 + 1] [i_2 - 1] [i_2 + 1])))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))), (max((4294967295U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned char) var_19);
}
