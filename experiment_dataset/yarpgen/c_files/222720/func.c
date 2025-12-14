/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222720
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((max((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))), (((int) arr_2 [i_0] [i_1]))));
                var_10 = ((/* implicit */short) max((((((/* implicit */_Bool) -6LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_2))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) ^ (((((/* implicit */_Bool) var_1)) ? (12958687880312596253ULL) : (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */int) ((((((-1LL) + (9223372036854775807LL))) << (((/* implicit */int) (signed char)0)))) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_9 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) (+(((var_8) - (arr_8 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_0))))) < (((arr_5 [i_2]) | (((/* implicit */long long int) var_9)))))))) : (((((/* implicit */_Bool) var_2)) ? (2256800754430517446LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))));
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
            }
        } 
    } 
}
