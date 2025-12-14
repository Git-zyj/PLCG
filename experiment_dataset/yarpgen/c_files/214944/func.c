/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214944
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((268435455U) & (2175112884U)));
                                var_15 = min((min((min((((/* implicit */unsigned long long int) var_10)), (var_6))), (((/* implicit */unsigned long long int) var_13)))), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) max((((((/* implicit */_Bool) 2175112876U)) ? (var_2) : (2175112875U))), (((unsigned int) arr_0 [i_0])))))));
                    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2175112875U)) ? (125829120LL) : (((/* implicit */long long int) 2119854412U)))), (((/* implicit */long long int) 2119854424U))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [2U])) : (arr_9 [i_0] [i_0] [i_0] [1ULL] [i_0] [i_0]))), (((unsigned long long int) arr_4 [i_0] [i_0] [i_0]))));
        var_18 = var_7;
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_19 += ((/* implicit */long long int) 2119854414U);
                arr_24 [14U] [i_6] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [5U] [i_5] [i_6])), (arr_1 [i_5] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_6])) ? (var_4) : (var_0)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))) : (((/* implicit */unsigned long long int) var_10)))) : (max((((/* implicit */unsigned long long int) ((var_1) % (arr_15 [i_5] [i_6] [i_6])))), (((unsigned long long int) var_5)))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_2))));
                arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) -3971775351704183751LL))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -6LL)))) ? (((((/* implicit */_Bool) 2871006201U)) ? (2175112894U) : (2926379310U))) : (((unsigned int) var_12))))) : ((~(((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5] [9LL]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 605065576U)) ? (((long long int) 2175112875U)) : (((/* implicit */long long int) (+(min((1023U), (605065575U))))))));
    var_22 -= ((/* implicit */long long int) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) -20284598584608753LL))));
}
