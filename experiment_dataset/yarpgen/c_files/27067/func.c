/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27067
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (arr_1 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned int) max(((_Bool)0), ((_Bool)0))))));
                    arr_9 [i_2 + 2] [i_2] = ((/* implicit */int) var_6);
                    var_18 += ((/* implicit */unsigned long long int) arr_4 [i_1]);
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 3] [i_2 - 1])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) 17592186044415LL)) ? (137438953408LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) arr_4 [i_2]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (~(((long long int) ((var_9) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 20; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) arr_13 [i_3] [i_3] [i_3 + 3]);
                    var_22 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_15 [i_4] [i_4] [(unsigned short)13] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3 + 3] [i_3] [i_5 - 1]))) : (var_16))), (((arr_14 [i_3 + 2] [i_3 + 2]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3 + 2])))))))));
                }
            } 
        } 
    } 
}
