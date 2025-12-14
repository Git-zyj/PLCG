/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237682
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
    var_13 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_10)))) ? (((/* implicit */int) min(((signed char)68), ((signed char)74)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */short) arr_1 [i_1 - 1] [i_3]);
                                arr_10 [i_0] [i_1 - 1] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */long long int) arr_4 [i_0]);
                            }
                        } 
                    } 
                    arr_11 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_6 [11U] [(unsigned short)6] [i_2] [i_2 - 1] [i_2])), (max((((/* implicit */unsigned int) max((arr_8 [i_0 - 1]), (((/* implicit */short) arr_1 [i_0] [i_0]))))), (arr_0 [i_1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((((/* implicit */_Bool) var_5)) ? (var_6) : (var_8))))))));
}
