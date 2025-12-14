/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245625
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) % ((~(((/* implicit */int) (unsigned short)6399)))))), (((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_6 [11ULL] [i_1] [i_2]))))))));
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6396)) << (((((/* implicit */int) var_4)) - (12)))))), (min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1] [(signed char)10] [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                    var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) - (max((var_13), (arr_4 [i_1]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59137))))))));
}
