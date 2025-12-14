/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28407
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))) <= (var_1)))) != (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (short)-18490))))));
                    arr_6 [i_0] [i_1 + 1] [(_Bool)1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_5 [i_1] [(short)8] [i_2])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_14 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)18478)) ? (((/* implicit */long long int) var_1)) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)18466)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (short)-18465))));
        var_16 += ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_8 [i_3 - 1]))))))));
        var_17 = ((long long int) ((var_0) ? (((long long int) arr_7 [i_3])) : (((/* implicit */long long int) var_5))));
    }
}
