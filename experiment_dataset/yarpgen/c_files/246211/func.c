/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246211
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
    var_20 = ((/* implicit */unsigned char) ((((var_8) & (var_19))) ^ (13121470295524754056ULL)));
    var_21 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [(unsigned char)0] &= ((/* implicit */unsigned char) arr_6 [i_0] [i_2] [i_0]);
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (var_6) : (arr_0 [i_1 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 1])) ^ (((/* implicit */int) arr_2 [i_1 - 2])))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) + (arr_4 [i_0]))))))));
                }
            } 
        } 
    } 
}
