/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232864
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) arr_5 [i_0]);
                        var_16 *= ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_7 [i_0] [i_0]))));
                        var_18 = (((+(arr_7 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967295U))) << (((/* implicit */int) arr_2 [i_3]))))));
                    }
                    var_19 -= ((/* implicit */unsigned int) min(((~(((/* implicit */int) min((arr_6 [i_2] [i_1 - 4] [i_0]), (((/* implicit */unsigned char) arr_3 [i_0] [i_1]))))))), (arr_4 [6LL] [i_1] [i_2])));
                    var_20 = ((/* implicit */unsigned long long int) (+((-((+(arr_4 [i_0] [i_1] [i_2])))))));
                    var_21 = (((-(arr_7 [i_0] [i_1 + 1]))) | (((/* implicit */unsigned long long int) min((arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 2]), (((/* implicit */int) arr_10 [(unsigned char)9] [i_1 - 4] [i_1] [i_1] [i_1] [i_1 - 1]))))));
                    arr_11 [i_0] = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((unsigned short) (+((~(var_1))))));
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (5953714989123443085LL)));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_12))));
    var_25 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) == (var_3)))));
}
