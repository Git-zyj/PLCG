/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206145
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */_Bool) min((min((0LL), (((/* implicit */long long int) arr_4 [i_0 + 1] [i_3 - 1] [i_3 - 2])))), (arr_7 [i_1] [i_1] [i_3])));
                            arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((arr_2 [i_3 - 3] [i_0 - 2]) != (((((((/* implicit */_Bool) arr_2 [i_0] [12LL])) && (((/* implicit */_Bool) 0LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30466))) > (18446744073709551615ULL))))) : (min((((/* implicit */long long int) 268362366U)), (0LL)))))));
                            arr_12 [i_0] = ((/* implicit */unsigned long long int) var_15);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_19 [(_Bool)1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [12] [i_1] [12])) ? (arr_16 [3ULL] [i_1] [i_4] [3ULL]) : (arr_16 [i_5] [i_4] [i_1] [i_0 - 2])))) ? (((((/* implicit */_Bool) -12LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)0] [(_Bool)0]))) : (var_5))) : (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [1LL] [i_5] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)155)) && (((/* implicit */_Bool) 4026604929U)))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [10LL] [i_5])) || (((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2] [i_0])))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_9))))));
                            arr_20 [i_0] [i_0] [8] [i_0] [i_5] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 70368744046592ULL)) || (((/* implicit */_Bool) arr_3 [i_4] [i_0]))))), (((long long int) (unsigned char)153))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [9U] [i_0])))))) & (max((2LL), (((/* implicit */long long int) (signed char)-125)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) <= (arr_7 [i_4] [i_1] [i_0 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((arr_27 [i_6] [i_8 + 1] [i_0 - 1]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_21 [14LL]))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)41)))))))))));
                                arr_29 [i_0] [i_7] = min((((/* implicit */long long int) (~(4026604914U)))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 20LL)) || (((/* implicit */_Bool) (unsigned short)8883))))), (((17591112302592LL) & (arr_24 [i_6] [i_6] [i_6] [i_6]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 |= ((/* implicit */int) -1LL);
}
