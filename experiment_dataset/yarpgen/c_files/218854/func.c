/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218854
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_5 [(short)14] [i_1] [(short)5])))), (((((/* implicit */_Bool) (short)-27562)) ? (((/* implicit */int) (_Bool)1)) : (130023424)))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [(_Bool)0])) : ((((((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))) + (2147483647))) >> (min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])), (var_1)))))));
                    arr_7 [(unsigned short)12] [4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [(signed char)18] [i_2])))) / (min((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */int) arr_3 [(_Bool)1] [1U] [i_2])) + (((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_9))))) ? (max((var_2), (var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_0))))))));
}
