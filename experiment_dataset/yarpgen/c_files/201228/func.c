/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201228
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
    var_14 = ((/* implicit */unsigned short) (!(var_1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (unsigned short)4095))), (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_1 - 1])) ? (arr_4 [i_1 + 1] [i_1] [i_1 + 1]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    arr_12 [i_2] [(unsigned short)3] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((arr_6 [i_1 + 1]) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1])))) - (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1])) != (((/* implicit */int) (unsigned char)164)))))));
                }
            } 
        } 
    } 
}
