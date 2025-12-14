/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28870
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
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_19)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_9);
                                arr_15 [i_0] [(short)5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)-105))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_14))))) : (1435961543U)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6335))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_16)) ? (6545900932014503646ULL) : (((/* implicit */unsigned long long int) -501009671)))))) : (max((var_18), (((/* implicit */unsigned long long int) var_5))))));
                                var_22 = ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 1856280858726867077LL)) ? (5505070549865749670ULL) : (((/* implicit */unsigned long long int) var_5)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)96)), ((unsigned short)6330)))) ? (max((((/* implicit */unsigned int) var_12)), (1320940927U))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2974026368U)))));
                }
            } 
        } 
    } 
}
