/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45292
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2690454168U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) >= (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? (arr_3 [i_0 - 2]) : (arr_4 [i_0] [i_1])))))));
                var_16 = (unsigned short)63619;
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)29683))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) ((int) -1027212658899430661LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_8 [(short)15] [(short)15]))))) : (2690454168U));
        arr_9 [i_2] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1125924672U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((+(2690454139U))) : (((unsigned int) var_5))))), (((unsigned long long int) max(((unsigned short)32767), (arr_8 [8ULL] [i_2])))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (~(-6150353770376015675LL)))))));
    }
}
