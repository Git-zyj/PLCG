/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19498
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
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_2 [i_1] [i_2])) > (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) 3524829065U)) : (-1LL)))));
                    var_20 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2])))) ? (arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2]) : (((((/* implicit */_Bool) var_18)) ? (arr_7 [i_2 - 1] [7LL] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 0LL)) ? (arr_3 [i_4]) : (((/* implicit */long long int) var_14)))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */unsigned int) (-(var_16)));
    var_24 = var_5;
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    arr_23 [i_5] [i_6] [i_7] [i_6] = ((((/* implicit */_Bool) ((((var_7) + (((/* implicit */long long int) ((/* implicit */int) (signed char)58))))) + (((/* implicit */long long int) var_5))))) ? (min((arr_21 [i_7] [i_6] [i_6] [i_5]), (((/* implicit */unsigned int) (+((-2147483647 - 1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [18ULL]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))));
                    var_25 = var_2;
                    arr_24 [i_5] [i_6] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (0ULL)))) ? (((/* implicit */long long int) ((unsigned int) 576460752303421440LL))) : (-4037383129180875668LL)))) ? (((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)58)))))))) : ((~((~(var_11)))))));
                    arr_25 [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6] [i_5])) ? ((+(((/* implicit */int) arr_19 [i_5] [i_6] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -8074374739911013300LL)))))));
                }
            } 
        } 
    } 
}
