/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218919
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
    var_16 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_1 [i_1])))) + (2147483647))) << (((((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (arr_2 [i_0]))) + (6326710014448581181LL))) - (9LL)))))) ? (var_4) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), (arr_3 [i_1] [i_1 + 1] [i_0])))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_3 [i_3] [i_2 - 1] [i_3]))));
                                arr_12 [i_1] [i_3] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 2] [i_1]))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_1 [i_4 + 2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_4 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [4ULL] [i_3] [4ULL] [i_3]), (((/* implicit */unsigned short) var_12)))))) : (arr_3 [i_4] [i_2 - 1] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_1))))) : (((((/* implicit */long long int) var_5)) & (arr_2 [i_1]))))) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0] [i_1])) ? (arr_10 [i_0] [i_1] [3] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [(unsigned short)0])))))) : (((long long int) arr_10 [(unsigned short)4] [i_1] [i_1 + 1] [i_1] [9ULL]))));
            }
        } 
    } 
    var_21 |= ((/* implicit */_Bool) var_4);
}
