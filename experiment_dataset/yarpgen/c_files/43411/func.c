/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43411
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))));
                    var_14 = var_4;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) min(((unsigned char)93), ((unsigned char)255)))))))));
                    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)252)), ((((!(((/* implicit */_Bool) 5491286694832146154LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) : (2744125621342138930LL)))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                arr_21 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2047LL)) ? (-4136488924783875981LL) : (0LL))) / (min((arr_8 [i_4 + 1] [i_4 + 1]), (((/* implicit */long long int) arr_11 [i_4] [i_5] [i_7]))))));
                                var_17 *= (unsigned char)190;
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4136488924783875980LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) : (-4136488924783875981LL)))) ? (arr_16 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_4 - 1]))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */long long int) ((var_4) == (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -2028LL)))) : (var_5)))));
}
