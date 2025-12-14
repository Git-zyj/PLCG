/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212011
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
    var_11 = ((/* implicit */int) 4294967295U);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_0)) : (var_7)))) ? (((/* implicit */unsigned long long int) ((var_8) + (var_3)))) : (8074460904348200110ULL)))) && (((/* implicit */_Bool) var_10))));
    var_13 = var_0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) var_9);
                            arr_12 [i_1] [i_1] = ((/* implicit */short) var_0);
                            arr_13 [(signed char)10] [(signed char)10] [i_0] [i_2] [(signed char)14] [i_2] &= ((/* implicit */long long int) (_Bool)0);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) var_3);
                arr_14 [i_1] = ((/* implicit */long long int) (unsigned short)65532);
            }
        } 
    } 
}
