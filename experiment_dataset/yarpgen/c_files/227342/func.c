/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227342
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
    var_17 |= ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-16)), (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1])))))))));
                arr_5 [i_1] = ((/* implicit */long long int) (~(arr_4 [i_0] [i_1] [i_1 - 1])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)26704)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)4] [(unsigned short)4] [i_3])) ? (((/* implicit */int) (unsigned short)25601)) : (((/* implicit */int) (signed char)-30))))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))))))));
                            arr_10 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39776))) <= (max((16184038583559527331ULL), (((/* implicit */unsigned long long int) 2147483647))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
