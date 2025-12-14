/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245862
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
    var_16 = ((/* implicit */unsigned short) min((min(((-(((/* implicit */int) var_5)))), ((~(((/* implicit */int) (_Bool)1)))))), (var_6)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((var_14) << (((((((/* implicit */int) arr_1 [i_0 - 1])) + (13998))) - (21))))) / ((+(((/* implicit */int) arr_1 [i_0])))))) : (min((((/* implicit */int) arr_1 [i_0 + 1])), (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (2147483647)))))));
        arr_3 [i_0 - 1] = ((/* implicit */long long int) var_15);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] [7LL] [i_2] = ((/* implicit */unsigned long long int) ((arr_14 [i_1] [i_2] [i_3] [i_4]) / (arr_8 [i_3])));
                        arr_18 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) + (0LL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_21 [i_1] [2] [i_1] = ((/* implicit */_Bool) arr_16 [i_1] [i_1] [9LL]);
            arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((-4LL) % (4LL)));
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            arr_25 [i_1] [i_1] = ((/* implicit */unsigned short) arr_16 [i_6] [i_6] [i_1]);
            arr_26 [i_1] [i_1] = ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 14782696321363523877ULL)) ? (var_4) : (((/* implicit */unsigned long long int) var_14))))));
            arr_27 [14ULL] [i_6] = var_14;
        }
    }
}
