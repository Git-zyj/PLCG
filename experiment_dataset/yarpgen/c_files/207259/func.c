/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207259
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (signed char)0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */_Bool) arr_4 [i_2] [5] [i_2]);
                    var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) (((((-(((/* implicit */int) var_1)))) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_1] [i_1])) - (74)))))), (min((arr_7 [i_0] [i_2] [i_0] [i_0]), (min((((/* implicit */unsigned int) arr_0 [i_1] [i_2])), (arr_2 [(unsigned char)9])))))));
                    arr_9 [i_2] [(_Bool)1] [1] = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) ((unsigned char) 3094153847412355970LL))))));
                    var_12 = ((/* implicit */unsigned char) min((max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0])))), (((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_6)))))));
                }
            } 
        } 
    } 
}
