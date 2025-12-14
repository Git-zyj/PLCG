/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238694
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
    var_14 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((var_13) >= (((/* implicit */unsigned long long int) 253510554))))), (max((((/* implicit */unsigned long long int) var_11)), (var_5))))) << (((((((unsigned int) -704068026)) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (var_6))))))) - (3590899267U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 - 1] [16U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1] [(unsigned char)0]))) : (arr_3 [i_0] [i_0 + 2]))) < (((unsigned int) arr_3 [i_0] [i_1]))))), (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [10U]))) | (arr_0 [i_0]))) % (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
                var_16 *= ((/* implicit */unsigned char) min((min((min((((/* implicit */short) arr_4 [i_0 + 1] [i_1 + 1] [(unsigned char)16])), (arr_1 [i_0 + 1] [10]))), (((/* implicit */short) ((((/* implicit */_Bool) -704068022)) && (((/* implicit */_Bool) -5367888333351313109LL))))))), (arr_1 [8ULL] [8ULL])));
                var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (((unsigned int) -704068026)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11862)))))), (((((long long int) arr_1 [i_0] [i_0])) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))) : (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (((unsigned int) -704068026)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11862)))))), (((((long long int) arr_1 [i_0] [i_0])) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
}
