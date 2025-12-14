/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5023
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) (short)16383);
                    arr_8 [i_0] [i_1 + 1] [0LL] = ((/* implicit */long long int) arr_4 [i_0 + 1] [i_0] [i_0 + 1]);
                    var_18 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) arr_6 [i_0] [i_0 + 1] [(signed char)5]))) ? (((((/* implicit */int) arr_5 [i_0 + 1] [i_2])) << (((arr_2 [(unsigned short)8]) - (960212369))))) : (((/* implicit */int) arr_6 [i_2] [i_2] [7LL])))), (min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (unsigned short)62547)) ? (arr_2 [i_1]) : (arr_2 [i_0])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_16);
}
