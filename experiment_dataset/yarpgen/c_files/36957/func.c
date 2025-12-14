/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36957
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] = 5;
                    var_12 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2] [i_2 + 2]))) < ((+(var_5))))));
                    arr_7 [19] = ((/* implicit */unsigned short) (+(var_5)));
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 3] [i_2 + 1]))) > (var_0)))), (((((((/* implicit */_Bool) 0ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])))) | (((/* implicit */long long int) (+(5))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (7)))) & (min((var_6), (((/* implicit */long long int) 268435440))))))));
    var_14 = ((/* implicit */long long int) var_11);
}
