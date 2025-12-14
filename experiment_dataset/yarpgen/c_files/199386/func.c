/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199386
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-19088)) ? ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18616))) : (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
                arr_4 [i_0] [i_0] &= ((/* implicit */unsigned int) var_5);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 140737471578112ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_1])))) : (arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_21 ^= ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned int) arr_6 [i_2])) : (var_1))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) arr_6 [i_2])) : (arr_7 [i_2])))))));
        var_22 = ((/* implicit */short) (+(max((arr_7 [i_2]), (((/* implicit */unsigned int) arr_6 [i_2]))))));
        var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_2])))));
        var_24 = ((/* implicit */unsigned long long int) var_8);
    }
}
