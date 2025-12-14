/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24743
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
    var_18 = ((/* implicit */short) var_6);
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (var_12))))) > (((((/* implicit */_Bool) 2922558624628631834ULL)) ? (267363637U) : (((/* implicit */unsigned int) 2147483647)))))))));
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) : (min((var_0), (((/* implicit */unsigned long long int) var_15)))))) - (var_0)));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_11))))) ? (var_5) : (((((/* implicit */_Bool) 4027603665U)) ? (267363630U) : (267363622U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13)))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1] [i_2])))))));
                    var_23 = ((/* implicit */signed char) var_15);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) var_4);
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_5 [i_2] [i_1] [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_5 [i_0] [i_2] [i_3] [i_2]) : (arr_5 [i_2] [i_3] [i_1] [i_2])))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 267363630U)) ? (-7122420714380057500LL) : (((/* implicit */long long int) 267363638U)))) <= (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */long long int) arr_4 [i_1] [i_1])) : (arr_3 [i_1] [i_2])))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4027603674U)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_2])) : (7680)))), (4027603665U)))) ? (var_6) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                }
            } 
        } 
    } 
}
