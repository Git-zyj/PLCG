/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35167
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
    var_10 += ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) var_3)) ? (14956219101026068965ULL) : (((/* implicit */unsigned long long int) var_7)))))) == (max((((/* implicit */unsigned long long int) max((3378930491U), (916036804U)))), (min((((/* implicit */unsigned long long int) (unsigned short)24582)), (var_4)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 *= ((/* implicit */unsigned char) ((arr_3 [i_0 - 1]) & ((~(arr_3 [i_0 - 1])))));
                var_12 &= ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_0 + 4] [i_0])), ((~(((/* implicit */int) arr_5 [i_0 - 2] [i_1]))))));
            }
        } 
    } 
}
