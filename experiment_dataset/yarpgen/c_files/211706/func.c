/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211706
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))) != (((/* implicit */unsigned long long int) 1023))))), ((((-(1023))) % (((/* implicit */int) var_0))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [(_Bool)1])) <= (((/* implicit */int) arr_1 [i_0 + 1]))))))))));
                            }
                        } 
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((long long int) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_1 + 2] [23U] [i_1 + 2]))))));
                arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) ((signed char) arr_1 [i_0 - 1])))));
                var_18 = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (262230274U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (arr_2 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59)))))));
                arr_20 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14826))) - (1073741824U)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((int) (-(var_3))));
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned int) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]);
        arr_24 [i_7] = ((/* implicit */short) var_7);
    }
    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) (~(var_8)))) & (((((/* implicit */_Bool) var_10)) ? (-34359738368LL) : (((/* implicit */long long int) var_10))))))));
}
