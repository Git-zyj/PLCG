/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28179
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (518520756U))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)9839))))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 18014398509481983LL))) ? (((var_0) ? (2604573689U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [6LL] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0U] [0U])))))) ? (var_1) : (var_2)));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) var_11)) : (arr_2 [i_1 + 4]))) + ((-(((/* implicit */int) (unsigned char)183))))));
        arr_5 [2] = ((((/* implicit */_Bool) var_8)) ? ((-(min((((/* implicit */int) (short)11)), (arr_2 [i_1]))))) : (((/* implicit */int) (signed char)23)));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                arr_12 [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11503))))) ? (((((/* implicit */_Bool) var_4)) ? (6646129034482150927ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) var_15))))));
                var_21 = (~(((/* implicit */int) var_13)));
            }
        } 
    } 
}
