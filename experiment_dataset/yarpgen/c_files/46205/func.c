/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46205
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
    var_18 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = arr_1 [i_1];
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), ((-(var_10)))));
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((var_1), (((/* implicit */long long int) (signed char)-77)))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-31202))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
