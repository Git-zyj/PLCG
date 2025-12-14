/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42571
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (((max((((/* implicit */unsigned int) var_4)), (3320511593U))) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) arr_1 [i_0]))))) >= (((14336U) >> (((10030032085578537923ULL) - (10030032085578537892ULL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((10030032085578537923ULL), (10030032085578537942ULL))) == (max((var_12), (((/* implicit */unsigned long long int) var_0))))))) + (max((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))), ((~(var_5)))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */long long int) ((/* implicit */int) ((63) < (((/* implicit */int) arr_0 [i_0])))))) ^ (min((752683919347591776LL), (((/* implicit */long long int) 416916118))))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) << (((var_7) - (13945551667292880416ULL)))))), (max((8971275647366898566ULL), (var_7))))), (((/* implicit */unsigned long long int) ((arr_4 [i_1] [(unsigned short)2]) == (arr_4 [i_1] [(short)15]))))));
        var_21 = ((/* implicit */unsigned long long int) max((((var_1) * (((/* implicit */unsigned int) min((var_14), (((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5836)) * (((/* implicit */int) var_13)))))));
}
