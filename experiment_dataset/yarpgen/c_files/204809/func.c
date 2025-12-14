/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204809
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
    var_10 &= ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) / (max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    arr_11 [i_1 - 3] [i_2] [2] [i_2] = ((/* implicit */signed char) (-((-(arr_1 [i_1 - 1])))));
                    arr_12 [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_1 - 3] [i_3] [i_1 - 3]), (arr_5 [i_1 - 3] [i_1 - 4] [i_1 - 4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 759604509477108761ULL)) ? (((/* implicit */int) (short)19526)) : (((/* implicit */int) (signed char)-3))))) : (arr_4 [i_1 - 3])));
                    var_12 = ((/* implicit */long long int) arr_8 [i_2] [(short)5]);
                }
            } 
        } 
    } 
}
