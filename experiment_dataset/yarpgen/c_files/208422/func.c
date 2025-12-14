/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208422
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
    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
    var_18 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = -8520831325065446953LL;
                                var_20 = ((/* implicit */unsigned int) arr_6 [i_4]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? ((+(arr_5 [i_0]))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (4190208U)))));
                }
            } 
        } 
    } 
}
