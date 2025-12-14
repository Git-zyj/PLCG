/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241799
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
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((var_2) <= (((/* implicit */int) (unsigned char)135)))))) * (((((/* implicit */int) min(((unsigned char)133), ((unsigned char)135)))) | (((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 - 4]))) ? (var_8) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)123)))))) ? (min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */unsigned long long int) var_2)) / (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0 - 4]))))))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3]) : (arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3])))) ? ((+((((_Bool)0) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))))) : (((/* implicit */unsigned long long int) (+(arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0 + 1])))))))));
                    var_15 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_0))));
    var_17 = ((/* implicit */_Bool) ((((4097929414U) * (482216543U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
}
