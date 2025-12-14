/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25910
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 7; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_4 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (arr_0 [i_0])));
                        arr_10 [i_2] [i_1] = ((long long int) max((144115188075855871ULL), (((/* implicit */unsigned long long int) arr_0 [i_2 - 1]))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(max((((/* implicit */int) var_11)), (-1474631992))))))));
                    }
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 1474631991))));
                        arr_14 [(short)7] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_2)) ? (arr_3 [(signed char)8] [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_2]))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_6 [i_4] [i_2] [i_1] [i_0])))))));
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(var_8))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-4982)) : (((/* implicit */int) arr_4 [i_1]))))))) ? (((/* implicit */long long int) max(((-(arr_1 [i_0] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -365288260419874727LL)) ? (((/* implicit */int) var_12)) : (2147483635))))))) : (arr_7 [i_0] [i_2] [5U] [i_0])));
                }
            } 
        } 
        var_23 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-25);
    }
    var_24 = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2)))))) * (max((((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18)))), (((((/* implicit */_Bool) var_7)) ? (-1474631992) : (((/* implicit */int) var_15))))))));
}
