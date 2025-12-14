/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201560
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
    var_17 *= ((/* implicit */short) (-(((((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((((long long int) (signed char)127)) - (96LL)))))));
    var_18 = var_2;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */long long int) ((int) (~(arr_6 [i_0 - 1]))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)-113)) : (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (short)31636))))))), (((unsigned long long int) arr_3 [i_1]))));
                    var_21 = 14;
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((int) 4206530012U))) | (88437284U)))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_4 [i_0 + 2]), (arr_4 [i_0 - 1])))) > (((/* implicit */int) var_11))));
        var_24 = ((/* implicit */signed char) (unsigned short)54159);
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        var_25 = (+(((/* implicit */int) (unsigned char)53)));
        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) 1708166639298145134ULL)))))) - (((unsigned int) var_6))));
    }
}
