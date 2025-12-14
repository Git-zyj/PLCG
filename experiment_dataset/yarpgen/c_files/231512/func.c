/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231512
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
    var_18 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 12501046080041269217ULL)) ? (var_17) : (var_17))))) << ((((~(var_15))) - (7238905728551642420LL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)1)));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_17) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)22322))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (short i_4 = 1; i_4 < 24; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((arr_11 [i_2]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_3]))))))))));
                            var_22 = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) arr_10 [i_1])) ? (-756032681587325708LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19077)))))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(arr_15 [i_1] [i_2]))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_24 -= ((/* implicit */unsigned short) 0LL);
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!((!((_Bool)1)))));
                            var_25 = 27ULL;
                            arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) -756032681587325685LL)) : (arr_19 [i_1] [i_2] [i_3] [i_1] [i_6])))) ? (9223372036854775807LL) : (((/* implicit */long long int) 96541735))));
                        }
                    }
                } 
            } 
        } 
        arr_23 [i_1] = ((/* implicit */unsigned short) var_9);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    arr_31 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (var_3) : (arr_11 [i_7]))), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */long long int) var_13)) : (arr_29 [i_1] [i_1] [i_7] [i_8])));
                    arr_32 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-19059))))));
}
