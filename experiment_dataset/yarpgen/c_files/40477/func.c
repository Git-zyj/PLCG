/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40477
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-((-((+(var_15))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_5))));
                            var_22 = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
                            arr_19 [i_4] [i_4] = var_8;
                        }
                    } 
                } 
                var_23 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
            }
        } 
    } 
}
