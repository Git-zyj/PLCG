/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29449
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
    var_17 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_8 [(short)17] = ((/* implicit */unsigned int) -72057594037927936LL);
                var_18 = ((long long int) 8737801632914580429LL);
                var_19 = ((/* implicit */unsigned char) max((((int) arr_6 [i_1 + 2])), (((-630824587) | (((/* implicit */int) var_14))))));
                var_20 -= ((/* implicit */unsigned char) arr_5 [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_0)), ((~(max((arr_3 [i_2] [i_2]), (((/* implicit */unsigned int) 630824599))))))));
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)11)), (((((/* implicit */long long int) -95152255)) / (72057594037927936LL)))))), (max((6634419055227940344ULL), (((/* implicit */unsigned long long int) -72057594037927936LL))))));
        var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) arr_3 [i_2] [i_2]))), (max((((/* implicit */long long int) var_3)), (-6092587326012810830LL)))));
    }
}
