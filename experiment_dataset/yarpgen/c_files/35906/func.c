/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35906
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
    var_18 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] |= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_7))))), ((+(arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))))), (((/* implicit */unsigned long long int) var_6))));
                                arr_14 [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [10LL])))))))), (max((var_6), (((/* implicit */long long int) arr_11 [i_2]))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) var_16);
                    arr_16 [(signed char)12] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max((4017096160005199333LL), (min((((/* implicit */long long int) (-(var_3)))), (((((/* implicit */long long int) 4167219246U)) - (-4017096160005199325LL)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_21 [i_2] = max(((-(((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_5] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_17 [i_0] [i_0] [i_0] [i_0]))))), (max((((/* implicit */long long int) (signed char)-66)), (-4017096160005199334LL))));
                                arr_22 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) (short)16137)) & (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
