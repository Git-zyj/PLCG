/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36908
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_3))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0] [(short)10])))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((((/* implicit */int) arr_6 [i_2] [i_2] [8] [8])) | (((/* implicit */int) (short)8518))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_1 + 1] [i_0])) : (((/* implicit */int) var_1))))) | (min((((/* implicit */long long int) arr_2 [i_2])), (var_7))))) : (min((-3776625351775989033LL), (((/* implicit */long long int) 4294967288U))))));
                    var_12 = ((/* implicit */long long int) arr_3 [6LL] [i_1] [i_2]);
                    var_13 = ((/* implicit */short) max((var_13), (var_8)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 7; i_5 += 2) 
            {
                {
                    var_14 += ((/* implicit */short) ((((/* implicit */int) ((arr_5 [i_5 + 3] [i_5 - 2] [i_4 + 1]) && (((/* implicit */_Bool) var_2))))) == (((((/* implicit */int) arr_5 [i_5 - 1] [i_5 + 3] [i_4 + 1])) * (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 2] [i_4 + 1]))))));
                    arr_16 [i_3] [i_3] [(short)8] [i_5] = ((((/* implicit */int) (signed char)119)) <= (((/* implicit */int) (short)-8531)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
}
