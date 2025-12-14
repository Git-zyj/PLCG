/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242118
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
    var_14 = ((/* implicit */unsigned short) var_7);
    var_15 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (((unsigned long long int) ((((/* implicit */int) (signed char)20)) - (var_7))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_3))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_8))))) > ((+(arr_2 [i_0]))))))) == (((arr_0 [i_0] [i_0]) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) + (var_10)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [20U] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [2]);
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (+((-(arr_0 [i_1] [i_1]))))))));
                    arr_9 [i_0] [i_1] [(short)18] [i_0] = ((/* implicit */unsigned char) (signed char)20);
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_5 [i_2] [i_1] [i_0]))));
                    arr_10 [(signed char)10] [i_0] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_5 [21] [i_1] [i_2])))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) var_10);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))));
    }
}
