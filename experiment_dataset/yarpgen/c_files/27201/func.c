/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27201
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
    var_12 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [(signed char)10] = ((/* implicit */unsigned char) min(((~((~(0ULL))))), (var_9)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_3 [i_1] [15U]))))));
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_3] = var_2;
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_9 [(signed char)22] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [12LL] [i_0 - 1] [3U])), (var_3))) : (((/* implicit */unsigned long long int) var_5))))) ? (max((((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [10U]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (2555795488139672612LL) : (((/* implicit */long long int) 681345817U))))))) : ((~(arr_0 [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_2);
}
