/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233784
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [3ULL] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 2])) & (((/* implicit */int) ((unsigned char) var_3))))));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_10 &= ((/* implicit */unsigned char) ((((((/* implicit */long long int) (-(1225454804)))) < (((((/* implicit */_Bool) 4290772992LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4))))) ? (((unsigned long long int) ((((/* implicit */_Bool) -1225454832)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (1430343749718777386LL)))) && (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) != (4724560691444728171LL)))))))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((unsigned long long int) (((_Bool)0) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))) * (((/* implicit */unsigned long long int) var_5)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (var_4)))) ? (((/* implicit */unsigned long long int) min((var_0), (var_0)))) : ((~(var_2)))))) ? (max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) (unsigned char)240)), (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_13 &= ((/* implicit */unsigned char) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)8191))) && (((/* implicit */_Bool) var_3))))))));
}
