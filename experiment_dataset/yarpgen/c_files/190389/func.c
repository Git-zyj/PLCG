/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190389
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
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) arr_1 [i_4] [i_0]);
                                var_15 -= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54782))) <= (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_2] [i_4])))))))), (((unsigned char) arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_3]))));
                                var_16 = ((/* implicit */int) (-(arr_7 [i_1])));
                                var_17 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_9 [i_3 - 1] [i_1] [i_2] [i_3] [i_4]), (var_2)))) ? (((((/* implicit */int) arr_9 [i_3 + 2] [i_2] [i_2] [i_3 - 4] [i_4])) >> (((((/* implicit */int) arr_5 [i_3 - 3] [i_0 - 1] [i_2] [i_1])) - (121))))) : (((((/* implicit */_Bool) arr_5 [i_3 - 4] [i_1 + 1] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)10755)) : (((/* implicit */int) arr_5 [i_3 - 2] [i_1] [i_2] [i_1]))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_9 [i_3 - 1] [i_1] [i_2] [i_3] [i_4]), (var_2)))) ? (((((/* implicit */int) arr_9 [i_3 + 2] [i_2] [i_2] [i_3 - 4] [i_4])) >> (((((((/* implicit */int) arr_5 [i_3 - 3] [i_0 - 1] [i_2] [i_1])) - (121))) + (53))))) : (((((/* implicit */_Bool) arr_5 [i_3 - 4] [i_1 + 1] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)10755)) : (((/* implicit */int) arr_5 [i_3 - 2] [i_1] [i_2] [i_1])))))));
                                var_18 = ((/* implicit */unsigned char) 8178313074666826013LL);
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)63833))) : ((-(((/* implicit */int) arr_3 [i_1] [i_1] [i_0 + 4])))))));
            }
        } 
    } 
}
