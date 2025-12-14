/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220123
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2] [i_2 + 2] [i_2])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) (unsigned short)512))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_7 [i_0 - 2] [i_0 - 2] [i_2 - 1] [i_0 - 2])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2] [i_4 - 1])))))));
                                var_15 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0]))))), (var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13)))) : (max((((/* implicit */unsigned long long int) ((signed char) (unsigned short)65043))), (((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)490)))))))));
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
}
