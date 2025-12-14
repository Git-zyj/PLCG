/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32405
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
    var_15 -= ((/* implicit */unsigned char) max((min(((~(((/* implicit */int) var_13)))), (max((var_0), (((/* implicit */int) var_6)))))), (min((((/* implicit */int) max((var_5), (var_1)))), ((~(((/* implicit */int) var_11))))))));
    var_16 = min((-2305843009213693952LL), (((/* implicit */long long int) (unsigned char)189)));
    var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), (var_3)))), ((~(var_12))))), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) (+(var_7))))))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((max((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (min((((/* implicit */long long int) var_6)), (var_7))))), (min((max((var_9), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_4)))))))));
                            }
                        } 
                    } 
                } 
                var_20 = var_1;
                var_21 += var_3;
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
}
