/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221738
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
    var_10 = ((/* implicit */long long int) max((((((/* implicit */int) (short)-94)) * (((/* implicit */int) var_9)))), (((/* implicit */int) min((((unsigned char) var_8)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))))))));
    var_11 = ((/* implicit */unsigned long long int) ((min((0ULL), (18446744073709551607ULL))) != (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 4; i_1 < 13; i_1 += 1) 
    {
        arr_5 [(unsigned short)10] = ((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1 - 3])), (13137370798277957282ULL)))))) : ((~(((arr_4 [i_1]) * (((/* implicit */unsigned int) -1369171354)))))));
        var_14 |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 1776362729))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_7))) <= (((((/* implicit */_Bool) arr_2 [11ULL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))))), (((((/* implicit */_Bool) 3614795737893216149ULL)) ? (4260607557632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84)))))));
                var_16 = max(((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_3]))) - (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32512))) / (arr_2 [i_2] [i_3])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_2])), (2048U))))))));
                var_17 = ((/* implicit */unsigned long long int) -716296473);
            }
        } 
    } 
}
