/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195150
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_0) : (var_1)));
        arr_5 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_1)) : (1842170718U)));
        var_12 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned short) var_10)))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_6)));
                        arr_12 [3] [i_3] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (~((~(var_9)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) ((int) (_Bool)1));
        var_16 = ((/* implicit */signed char) 521877359);
        var_17 |= ((/* implicit */short) ((_Bool) arr_16 [i_4 - 1]));
    }
    var_18 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */unsigned long long int) ((var_6) + (((/* implicit */int) arr_15 [i_5]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_18 [5])) : (var_10)))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23246))))))))));
    }
}
