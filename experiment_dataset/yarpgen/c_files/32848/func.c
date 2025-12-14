/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32848
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
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (-504821700016026230LL) : (var_5))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5789072869930890717LL)) && (((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) && (var_0))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned short)8004))))) : ((~(var_4)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)0] [i_0] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (1132201789) : (((/* implicit */int) (unsigned char)217))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57531))) % (1038210342U)))));
                    var_19 &= ((/* implicit */unsigned char) (short)9635);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (~(max((max((var_7), (((/* implicit */int) (unsigned short)8004)))), (((/* implicit */int) var_2))))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((unsigned long long int) max(((_Bool)1), (var_0)))))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9628))) : (var_1))))) : (((/* implicit */unsigned long long int) min((min((var_6), (((/* implicit */int) (short)9635)))), (((/* implicit */int) var_2)))))));
}
