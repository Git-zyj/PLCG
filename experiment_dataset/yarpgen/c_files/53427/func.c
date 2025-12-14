/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53427
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((min((((long long int) var_3)), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-117))))))) + (((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_0])))) / (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_0)))))))));
        arr_3 [i_0] = ((/* implicit */int) var_3);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_9))))) != (var_8))))));
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_1])), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))) : ((-(var_2)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                {
                    var_14 *= ((((arr_10 [i_3 - 2] [i_3 + 2] [i_3 + 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23752))))) ? (min(((-(var_3))), (((/* implicit */unsigned int) ((signed char) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                    arr_17 [i_3] [i_3] = ((/* implicit */int) var_13);
                    arr_18 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) (!((!(((/* implicit */_Bool) var_12)))))));
                    arr_19 [i_1] [i_3] [(unsigned short)23] = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_28 [i_2] &= ((/* implicit */long long int) (-(((/* implicit */int) min((arr_26 [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_1] [i_2] [(unsigned short)20] [i_4]))))))))));
                                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)102)) && (((/* implicit */_Bool) (signed char)-108))));
                                arr_29 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2)))))))));
                                var_16 = var_6;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (max((var_3), (var_3)))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)107)), (254987238U)))), (var_2))) : (var_5)));
    var_18 *= var_7;
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_12))));
}
