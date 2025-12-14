/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22515
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
    for (int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_6 [i_0 + 3])), ((signed char)(-127 - 1))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (short)10275)) ? (((/* implicit */int) arr_4 [4U] [i_2 + 1])) : (((/* implicit */int) arr_4 [(signed char)4] [i_2 + 1]))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_15 ^= ((/* implicit */int) var_13);
                        arr_12 [i_1] [i_2] [(signed char)6] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-10275))));
                        var_16 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_6 [i_0])), (((((((/* implicit */_Bool) 233661267U)) ? (-7896982567545789689LL) : (7896982567545789688LL))) / (((/* implicit */long long int) arr_2 [i_0 - 3] [i_2 + 1] [i_2 + 1]))))));
                        var_17 -= ((/* implicit */unsigned short) arr_11 [i_0 + 3] [i_1] [i_2 + 1] [i_3 + 1]);
                        var_18 = ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]);
                    }
                    var_19 -= ((/* implicit */long long int) (short)-10275);
                    var_20 ^= ((/* implicit */signed char) arr_2 [i_0 - 2] [i_2 + 1] [i_2]);
                }
            } 
        } 
    } 
    var_21 = var_4;
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) (short)-10270)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((unsigned short) (short)10267)), (var_0)))))))));
    var_23 = ((/* implicit */unsigned int) min(((unsigned short)12019), ((unsigned short)13196)));
}
