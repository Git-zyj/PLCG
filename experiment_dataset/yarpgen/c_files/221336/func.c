/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221336
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
    var_17 = ((/* implicit */unsigned int) var_6);
    var_18 -= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((unsigned int) 43831335U))), (var_9))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (4179494727U) : (115472547U)))), (min((var_11), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [0U] [i_2] [i_3 + 2] = ((/* implicit */unsigned short) ((var_13) + (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(4179494727U))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) / (arr_3 [i_2] [i_2] [(unsigned short)6])))))))));
                            var_20 = ((((/* implicit */_Bool) (~(((arr_4 [i_1] [3]) + (((/* implicit */unsigned long long int) var_4))))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_2] [i_3] [i_0])) ? (((/* implicit */int) arr_7 [10U] [i_1] [i_2] [i_2] [i_3 - 1])) : (var_13))) : (((((/* implicit */int) var_2)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1] [i_3]))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_15)) ? (779837956U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))))), ((-((~(arr_2 [i_1])))))));
                var_22 ^= ((/* implicit */long long int) var_7);
            }
        } 
    } 
    var_23 = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (min((var_5), (var_0)))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : ((~(var_10))))));
}
