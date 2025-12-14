/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45391
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
    var_15 ^= ((/* implicit */int) var_10);
    var_16 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_8);
                arr_6 [i_0] = ((/* implicit */unsigned int) var_12);
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_6))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (var_11)))) ? (((/* implicit */int) ((unsigned char) ((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */int) var_5))));
                                var_19 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                } 
                var_20 = (-(((/* implicit */int) min((((/* implicit */signed char) var_5)), (max((var_10), (((/* implicit */signed char) var_5))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)7))))), (max((var_11), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(var_3)))), (((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))) : (((max((var_11), (((/* implicit */unsigned long long int) (unsigned char)0)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))))))));
}
