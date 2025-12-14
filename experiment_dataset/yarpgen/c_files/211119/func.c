/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211119
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_8)))))) ? (((long long int) (unsigned short)50775)) : (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) var_0)) : (((long long int) var_10))))));
    var_15 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58243)) | (-730657673)))) && (((/* implicit */_Bool) (short)-11687))))) | (((/* implicit */int) (unsigned short)14770))));
                arr_5 [i_0 + 1] [1] [(signed char)9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 3])) ? (arr_1 [i_0 - 2] [i_0 - 3]) : (arr_1 [i_0 - 2] [i_0 - 3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11687)))));
            }
        } 
    } 
}
