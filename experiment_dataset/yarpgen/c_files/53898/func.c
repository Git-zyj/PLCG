/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53898
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 1087991341U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) : (3206975955U))) : (((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))) : ((~(674929339U))))));
                arr_6 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)51215)), (var_0)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_10 *= ((/* implicit */signed char) arr_7 [i_2]);
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 674929339U)) ? (((/* implicit */unsigned long long int) arr_9 [i_2])) : (arr_11 [i_3])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (min((arr_11 [i_2]), (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) arr_7 [(unsigned short)10])) : (((/* implicit */int) arr_7 [i_2])))))))));
                arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((3797249581U) == ((+(((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_10 [i_3]) : (arr_10 [i_3])))))));
            }
        } 
    } 
}
