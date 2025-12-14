/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247987
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
    var_13 = ((/* implicit */unsigned int) min((var_5), (max((((/* implicit */unsigned long long int) var_11)), (var_12)))));
    var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (min((3690361123594157650ULL), (((/* implicit */unsigned long long int) (short)0)))))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (var_1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_3)) : (var_12))))) - (3999513568641076861ULL)))));
    var_15 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) min((max((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_4)))), (((/* implicit */int) arr_3 [i_1] [i_2 + 2] [i_2 + 1])))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)5)) && (((/* implicit */_Bool) arr_4 [i_1]))))))));
                    var_16 |= ((/* implicit */unsigned int) ((unsigned short) max((arr_0 [i_2 + 3]), (arr_0 [i_2 + 3]))));
                    arr_8 [i_1] [i_1] [i_2 + 1] [i_2] = ((/* implicit */_Bool) var_11);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_9)))));
}
