/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41297
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (short)-1950)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_1))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((arr_5 [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) 140737488355327LL)))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_4 [i_0] [i_0])))) ? (max((var_9), (var_16))) : (((/* implicit */unsigned int) ((int) var_16)))))) ? (697586490) : (((/* implicit */int) max((((unsigned char) (unsigned short)11506)), (((/* implicit */unsigned char) arr_0 [i_2 + 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]);
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 578859486))) ? (((arr_9 [i_0] [i_0] [i_0]) & (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (arr_7 [i_0] [i_1 + 2] [i_0])));
                        arr_17 [i_0] [i_0] = ((/* implicit */int) var_5);
                    }
                    arr_18 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2 + 1] [i_2 - 1]))) : (var_15))), (((/* implicit */unsigned int) ((arr_0 [i_1]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((_Bool) arr_2 [i_0]))))))));
                    var_22 = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))) : (3959604878U)))))), ((!((_Bool)1)))));
                }
            } 
        } 
    } 
}
