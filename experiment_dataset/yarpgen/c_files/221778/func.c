/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221778
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
    var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((284220429U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((var_13) ? (((/* implicit */int) var_5)) : (var_15))) : (var_15)));
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((var_8) ? (var_0) : (var_1))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_0] [i_0 + 2] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)87)), (-624827007)));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (+(max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) var_7);
                                var_18 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (max((var_11), (((/* implicit */unsigned long long int) var_12))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((((var_13) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -624827035)))))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (var_0)))), (max((15640696236398291279ULL), (((/* implicit */unsigned long long int) 624827006))))));
                    var_22 ^= ((/* implicit */signed char) var_10);
                }
            }
        } 
    } 
}
