/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208300
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
    var_19 = ((/* implicit */unsigned long long int) (-(1019821037)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */signed char) min(((unsigned short)63878), (((/* implicit */unsigned short) (signed char)25))));
                var_21 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_5 [i_0])))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1019821030)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_18)), (arr_3 [i_1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63878))) - (var_6)))))))) : (min((min((((/* implicit */unsigned long long int) -1019821023)), (arr_3 [i_1]))), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 + 3] [i_0 + 4]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18))))) : (((arr_9 [i_0] [i_1] [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_1] [i_1] [i_0 + 1] [i_0]))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (unsigned short)1657))))) ? (var_5) : (var_5))))));
                            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_1 [i_0 + 3])))))))), (min((((/* implicit */unsigned long long int) var_16)), ((~(arr_9 [i_0] [i_1] [i_2] [i_3])))))));
                            var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_7 [i_0 + 4] [i_0 + 2] [i_0 + 2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 4; i_4 < 23; i_4 += 1) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (min((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (max((((/* implicit */long long int) var_16)), (var_0))) : (((/* implicit */long long int) ((arr_13 [i_4 - 4]) + (var_5)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4]))))) : (((/* implicit */int) arr_15 [i_4 + 1])))))))));
        var_28 = min((min((((((/* implicit */_Bool) arr_13 [i_4 - 4])) && (arr_14 [i_4 - 2]))), (((var_8) || (arr_14 [i_4 + 1]))))), (arr_15 [i_4]));
        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_4]))));
        var_30 &= var_17;
    }
}
