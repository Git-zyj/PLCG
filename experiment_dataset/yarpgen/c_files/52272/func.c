/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52272
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_2 + 1] [i_2] [i_0])), (((((/* implicit */int) min((var_3), (var_3)))) - (((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29384)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_4]))))) ? (((arr_4 [i_0] [i_2 - 1] [i_3]) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) | (((/* implicit */long long int) var_0))));
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2))) * (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_4]))) / (-1168519736664315970LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3877))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1168519736664315970LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [(unsigned char)3] [i_3])))))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_2 + 2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) (~(769100558)))), (((((/* implicit */_Bool) -179749515)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23177))) : (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (unsigned short)23177)))) : (((/* implicit */int) ((short) var_6))))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23174)) ? (((/* implicit */int) (unsigned short)42359)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)179)))) + (((/* implicit */int) ((short) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)129))))) : (min((var_2), (((/* implicit */long long int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-((-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 1168519736664315970LL))))))))))));
                arr_20 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)239)) || ((_Bool)1)))) : (((/* implicit */int) arr_19 [i_6 + 2] [i_6 - 1] [i_6 - 2]))))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) var_3)))))) : (((arr_18 [i_5] [(unsigned char)8]) >> (((((/* implicit */int) (unsigned short)56477)) - (56414)))))))));
            }
        } 
    } 
}
