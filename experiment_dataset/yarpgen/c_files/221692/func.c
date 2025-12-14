/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221692
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -5326324990584915142LL)))) ? ((((-(var_5))) >> (((/* implicit */int) arr_8 [(signed char)17] [i_4 - 1] [i_4 - 1] [i_4] [i_4])))) : (max((max((((/* implicit */unsigned int) arr_11 [2U] [17U] [i_0] [14ULL] [i_0] [6ULL] [i_0])), (var_8))), (((/* implicit */unsigned int) arr_11 [i_4] [i_4] [i_4 - 1] [i_4] [(signed char)6] [i_1] [(signed char)6]))))));
                                var_15 = ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                    arr_13 [i_0] [(_Bool)1] [i_0] [i_2] = (+(min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned short)19])) ^ (arr_7 [i_0] [(signed char)21] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_11 [(short)0] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_10 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1]))))))));
                    var_16 = ((/* implicit */unsigned int) ((short) arr_2 [i_2] [i_1] [i_0]));
                }
            } 
        } 
    } 
    var_17 = var_9;
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (((~(var_14))) >= (max((((((/* implicit */_Bool) 5326324990584915141LL)) ? (var_0) : (((/* implicit */unsigned long long int) var_7)))), (max((var_0), (((/* implicit */unsigned long long int) var_3)))))))))));
    var_19 = var_4;
}
