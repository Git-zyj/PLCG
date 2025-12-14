/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45384
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned char) ((signed char) ((short) arr_1 [i_1 + 1])));
                var_19 = ((/* implicit */signed char) max((var_19), (((signed char) ((long long int) var_7)))));
                var_20 += ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((2076432138124854665ULL) != (var_11)))) * (((/* implicit */int) var_16))))) : (((((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_6)))))) + (var_15)))));
    var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 160664072)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_9)))) ? (var_14) : (((var_12) * (((/* implicit */unsigned long long int) var_2)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 4; i_2 < 14; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
        var_24 += ((/* implicit */unsigned int) var_15);
        var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) || (((/* implicit */_Bool) arr_2 [i_2 + 3]))));
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_26 &= ((/* implicit */_Bool) arr_2 [i_3]);
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    var_27 -= ((/* implicit */long long int) (+(arr_10 [i_3])));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1702613209))))))))));
                                arr_21 [i_3] [i_4] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */long long int) arr_18 [i_6 + 1] [i_5] [i_5] [i_5] [i_4] [i_5])) : (arr_13 [i_6 + 1] [i_4] [i_4] [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
