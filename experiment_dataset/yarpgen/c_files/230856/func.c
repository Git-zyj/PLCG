/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230856
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
    var_20 = ((/* implicit */int) 7681781864928854831LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) var_7);
                arr_7 [i_1] = ((/* implicit */_Bool) var_9);
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0 - 2] = ((/* implicit */unsigned long long int) (unsigned short)1930);
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)47)) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (var_7) : (16370090870566692400ULL))) : (max((9223372036854767616ULL), (((/* implicit */unsigned long long int) var_18)))))) : (min((arr_12 [i_0] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2076653203142859215ULL) >> (((arr_13 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_1] [i_1]) - (1624143106117337098ULL)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_1] [i_1] [i_0 - 2] [i_0 + 1]))))));
                var_23 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) 16370090870566692403ULL))))))));
            }
        } 
    } 
}
