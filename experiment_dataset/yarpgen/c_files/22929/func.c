/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22929
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_11 = arr_7 [i_1] [(unsigned char)10];
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                {
                    var_12 &= ((/* implicit */unsigned short) min((arr_9 [(unsigned char)14] [i_3 - 2] [i_3 - 3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 2])))))));
                    arr_14 [0U] &= ((/* implicit */signed char) var_3);
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_9))))), (arr_9 [i_2] [i_2] [i_2]))) * (((/* implicit */unsigned long long int) var_4))));
                    arr_16 [i_2] [i_2] [(signed char)11] [i_3] = ((/* implicit */long long int) arr_5 [i_1]);
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_1] [(_Bool)0] [i_1])) * (((/* implicit */int) var_2))));
    }
    var_14 = var_1;
}
