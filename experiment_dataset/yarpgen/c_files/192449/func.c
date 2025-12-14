/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192449
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
    var_17 = ((((/* implicit */_Bool) (+(var_14)))) ? (var_12) : (((/* implicit */unsigned long long int) (~(((var_8) & (469092091U)))))));
    var_18 = ((/* implicit */unsigned int) min((0ULL), (((/* implicit */unsigned long long int) 3864548290U))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (arr_0 [i_0]) : (var_3)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_20 = min((((unsigned long long int) max((arr_2 [i_1]), (var_7)))), (((/* implicit */unsigned long long int) 1182060563U)));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 0U)) ? (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_9 [i_1 - 2] [i_2 - 3] [i_1 - 2] [i_1 - 2] [i_1] [4ULL]))) : (((unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((unsigned int) min((arr_7 [i_2] [i_1]), (arr_3 [i_1])))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) var_16);
    }
}
