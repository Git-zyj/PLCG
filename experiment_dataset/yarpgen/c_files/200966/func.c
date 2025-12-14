/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200966
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29231))) : (18202211363188085936ULL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2275))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (6108348092325642196ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (var_1)))) ? (((((/* implicit */_Bool) (unsigned short)29231)) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_1 - 1])))));
                    var_16 -= ((/* implicit */unsigned short) (((_Bool)1) ? (arr_4 [i_2 - 2]) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1])) ? (arr_7 [i_0] [i_1 + 2]) : (arr_7 [i_1] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_17 = (unsigned short)42579;
}
