/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23009
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
    var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) 13ULL))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (arr_5 [i_2] [(short)13] [i_1 + 2] [i_0])))) ? ((-(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((arr_4 [2ULL] [i_1 + 2] [16ULL]) ? (((/* implicit */int) arr_3 [(unsigned char)12])) : (((/* implicit */int) arr_1 [11] [11]))))))));
                    arr_8 [6ULL] = ((unsigned short) max((((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_2])))), (((/* implicit */int) arr_6 [i_0]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_1)))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
}
