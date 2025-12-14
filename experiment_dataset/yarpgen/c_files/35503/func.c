/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35503
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((_Bool) var_13))))) & (((/* implicit */int) ((signed char) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)1] [i_0])))))))));
                    var_16 |= ((/* implicit */short) arr_7 [4LL]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)653))) * (arr_13 [i_4] [i_4]))), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (signed char)123)), (var_10))) >= (arr_9 [i_3] [i_5]))))) : (((((((/* implicit */_Bool) var_6)) ? (arr_12 [15] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
                    var_18 = ((/* implicit */long long int) var_6);
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_21 [i_3] [i_6] [i_5] [i_6] [i_3] [17LL] [i_5 - 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)123), (((/* implicit */signed char) var_9)))))) == (((long long int) arr_16 [i_6] [i_6] [i_6])))))) - ((((_Bool)1) ? (((/* implicit */long long int) 691329753U)) : (8574245622696750314LL)))));
                                arr_22 [i_6] [i_6] [i_6] [i_3] = ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)242)) << (((((/* implicit */int) (signed char)30)) - (27))))) << (((arr_15 [i_3] [i_4] [i_6]) - (1383341339))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
