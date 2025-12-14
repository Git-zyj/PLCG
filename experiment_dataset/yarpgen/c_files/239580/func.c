/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239580
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (!(((var_5) || (((/* implicit */_Bool) var_3))))));
                            var_20 = var_9;
                            var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_13))))) ? (arr_9 [14ULL] [i_0] [i_2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 0ULL)))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (arr_4 [i_0]))), (arr_7 [i_1 + 1] [i_1 + 1]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) var_6);
                var_23 |= ((/* implicit */_Bool) min((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22944))))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 + 1] [4ULL]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
    var_25 = ((_Bool) var_9);
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (short)22943)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_7)))) - (((/* implicit */int) ((arr_10 [i_4] [i_4] [i_5] [i_4] [i_6] [(signed char)19]) || (arr_10 [i_4] [i_4] [i_5] [i_4] [i_6] [17ULL]))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18446744073709551586ULL))) || (((/* implicit */_Bool) min((arr_16 [i_6]), (((/* implicit */unsigned long long int) var_7)))))));
                    var_28 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_6])) ? (((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))), (arr_16 [i_6])))));
                }
            } 
        } 
    } 
}
