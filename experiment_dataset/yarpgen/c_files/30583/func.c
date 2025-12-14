/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30583
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
    var_14 = ((/* implicit */short) ((unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 258048U)) : (var_7))), (((long long int) var_13)))));
    var_15 -= ((/* implicit */signed char) var_12);
    var_16 = (-(((/* implicit */int) var_4)));
    var_17 ^= ((/* implicit */signed char) (unsigned char)229);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (-((((!(var_4))) ? (15130211337562102969ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32763)))))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (unsigned short)35898))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) arr_0 [i_0]))), (((((/* implicit */int) var_4)) << (((arr_5 [i_0] [i_0] [i_0]) - (1747354388)))))));
    }
}
