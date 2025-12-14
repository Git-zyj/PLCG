/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23189
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
    var_18 = ((/* implicit */short) var_0);
    var_19 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */long long int) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (var_17)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) var_12)) : (var_7))))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_3)))) ? (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned int) var_5)))) : (var_7)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [17LL] = ((/* implicit */unsigned int) var_6);
                            arr_17 [i_0] [i_0] [i_4] [16U] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_3))) : (((/* implicit */unsigned long long int) var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
