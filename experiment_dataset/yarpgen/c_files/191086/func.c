/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191086
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
    var_13 = ((/* implicit */signed char) max((min((var_11), (((/* implicit */unsigned long long int) 2291412191U)))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 = arr_6 [i_1] [i_1];
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) (signed char)70);
                                var_16 = ((/* implicit */long long int) (signed char)80);
                                var_17 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37407))));
                                var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [(unsigned char)14] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1])))))) : (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_12)) : (arr_13 [i_0]))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_1)) >= (((var_12) ? (((unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_7);
    var_21 = ((/* implicit */long long int) var_9);
}
