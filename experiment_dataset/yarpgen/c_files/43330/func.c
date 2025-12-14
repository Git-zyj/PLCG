/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43330
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) var_3)), (var_6))))))));
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_1)))) ? ((+(((/* implicit */int) (unsigned short)65527)))) : ((+(((/* implicit */int) var_10))))));
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) 0U)) ? (743827017361545875ULL) : (((/* implicit */unsigned long long int) -303900827))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [(short)2] [i_1] = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_9)))));
                                var_15 = ((unsigned int) ((var_1) + (var_1)));
                                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_7))))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (((var_0) / (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))))))));
                }
            } 
        } 
    } 
}
