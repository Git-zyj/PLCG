/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4491
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = (!(((((_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) var_0))))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((arr_1 [i_0] [i_0 - 2]), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (var_10)))) ? ((-(arr_1 [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) var_9);
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((var_6) ? (((/* implicit */int) var_4)) : (arr_4 [i_1] [i_1]))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (-(arr_6 [i_1])))) : ((-(((unsigned long long int) arr_6 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) var_15);
                        var_19 = ((unsigned short) ((var_1) >> (((/* implicit */int) var_15))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])))));
        arr_19 [i_2] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_11 [(signed char)12] [18] [i_2] [i_2])) : (((/* implicit */int) var_4))))) : (((arr_15 [i_2] [(short)12] [i_2] [i_2] [i_2] [i_2]) ? (arr_12 [18ULL] [i_2] [i_2] [(signed char)21]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (((arr_13 [(short)20] [(short)20] [i_2] [(short)20]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2])))))));
    }
}
