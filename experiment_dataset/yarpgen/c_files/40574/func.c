/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40574
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (unsigned char)101)), (18446744073709551605ULL))))))));
    var_15 = ((/* implicit */_Bool) max(((+(max((var_12), (((/* implicit */int) var_1)))))), (682307344)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)32)))), (var_10))) <= (max((var_5), (((/* implicit */int) ((unsigned char) var_7)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)22807)) : (var_12))))))));
                                var_17 ^= max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 1] [i_4])) ? (((/* implicit */long long int) 5U)) : (6043062816893784038LL)))))), (((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned long long int) var_13)) : (max((1755643438858631918ULL), (((/* implicit */unsigned long long int) 768438611)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((int) (~(max((((/* implicit */int) (_Bool)0)), (-1792920349))))));
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_12) : (var_3))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((/* implicit */int) ((unsigned char) var_5))) << ((((+(((/* implicit */int) (unsigned char)124)))) - (118))))) : (((((/* implicit */_Bool) (+(616871351)))) ? ((~(var_12))) : (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
}
