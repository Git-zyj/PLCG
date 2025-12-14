/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201121
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)9845)), (2114960187)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned char) arr_0 [i_0]))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)6]))))))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_2])))) && (((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) arr_0 [i_2]))))));
                    arr_9 [3U] [i_1] [2] [(signed char)5] = ((/* implicit */signed char) ((max((max((var_1), (((/* implicit */unsigned int) -2114960169)))), (((/* implicit */unsigned int) ((short) arr_0 [i_2]))))) << (((/* implicit */int) ((unsigned char) arr_4 [(short)5] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = var_13;
}
