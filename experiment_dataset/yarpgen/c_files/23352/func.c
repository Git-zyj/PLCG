/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23352
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
    var_16 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (min((((/* implicit */unsigned long long int) var_0)), (var_4))))) - (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            arr_8 [i_0 + 2] [i_1] [(signed char)10] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1])))))));
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_0 [i_0]))) : (arr_0 [i_1])));
            arr_10 [i_0] [i_0] [(unsigned short)5] = ((/* implicit */short) arr_1 [i_0]);
        }
        arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) (_Bool)1))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_2);
    var_18 = ((/* implicit */unsigned char) var_2);
}
