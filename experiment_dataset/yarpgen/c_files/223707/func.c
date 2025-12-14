/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223707
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_7)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_14)) ? (var_3) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (4056091595U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)3] [i_1] [i_3] [1ULL] [(unsigned char)3] [i_4] [i_4])))))))));
                                var_18 = ((/* implicit */unsigned short) (-(max((((((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0])) * (((/* implicit */int) var_16)))), (((/* implicit */int) max(((unsigned char)0), (var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_16);
}
