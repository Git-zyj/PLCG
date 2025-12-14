/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214911
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])), (var_5)))));
                var_14 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_6 [i_0 - 1] [i_0 - 1])), (arr_4 [i_0 - 1]))) & (((/* implicit */long long int) ((unsigned int) arr_5 [i_0] [i_0 - 1])))));
                var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1])))))) ? (max((arr_1 [i_0 - 1]), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 - 1] [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_12)), (var_9))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_9))) - (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (var_2)))) : (min((var_5), (((/* implicit */unsigned long long int) var_12))))))));
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2 + 1])) ? (arr_14 [i_2 - 1] [i_2 + 1]) : (min((arr_14 [i_2 - 1] [i_2 + 1]), (arr_14 [i_2 - 1] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_22 [i_2] [i_2] [i_2] [i_4] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1])) ? (((((/* implicit */long long int) ((arr_7 [i_4]) << (((arr_12 [i_2] [i_3] [i_5]) + (5241641467544837245LL)))))) - (arr_12 [i_2 - 1] [i_6 + 1] [i_6 - 1]))) : (((/* implicit */long long int) var_2))));
                                arr_23 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(unsigned char)5] [5LL] [i_2 + 1] [i_4] [i_4])) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2 + 1] [i_4] [i_2])) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4] [i_4])) ? (((/* implicit */int) arr_20 [(_Bool)1] [(_Bool)1] [i_2 + 1] [i_4] [i_2])) : (var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [(unsigned char)14] [i_2 + 1] [i_4] [i_2])) || (((/* implicit */_Bool) arr_20 [i_2 - 1] [i_2] [i_2 + 1] [i_4] [i_2])))))));
                                var_18 = ((/* implicit */short) arr_16 [i_6 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) var_6)) * (var_3))) : (((/* implicit */unsigned long long int) (-(var_7)))))), (((/* implicit */unsigned long long int) ((((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
}
