/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215018
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
    var_17 = ((/* implicit */int) var_16);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1 + 1] [i_2 + 1] = ((/* implicit */unsigned long long int) var_14);
                    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_14)))), ((-(((/* implicit */int) (unsigned short)40544))))))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_15))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
}
