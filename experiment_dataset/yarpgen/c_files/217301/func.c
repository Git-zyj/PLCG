/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217301
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
    var_14 = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */int) min((var_8), (var_2)))) + (2147483647))) << (((((((/* implicit */int) var_6)) + (48))) - (29))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 *= arr_5 [i_2] [i_0];
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] [i_3] = ((signed char) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3 - 2])) <= (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 2]))));
                                arr_16 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) min((arr_14 [i_0] [i_1] [i_2] [i_3] [i_2]), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_4])), (arr_5 [i_4] [i_1])))) ? ((((_Bool)1) ? (704476121) : (((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) ((unsigned short) arr_0 [i_3])))))));
                                var_16 = ((/* implicit */unsigned short) -943968901);
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min(((signed char)90), (((/* implicit */signed char) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2713301815U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35)))))))))) : (min((((/* implicit */unsigned long long int) var_11)), (var_9)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((_Bool) (((!(((/* implicit */_Bool) (unsigned char)248)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))));
}
