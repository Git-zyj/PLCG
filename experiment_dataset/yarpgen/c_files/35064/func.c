/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35064
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
    var_20 = var_5;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 *= ((/* implicit */_Bool) 3667445254971940867ULL);
        arr_2 [i_0] &= ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_2))))));
        var_22 = ((/* implicit */_Bool) var_17);
        arr_3 [(_Bool)1] = ((/* implicit */long long int) ((3667445254971940867ULL) + (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (16245619679370041917ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_8 [i_1 + 2]))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((arr_7 [12LL] [i_1]) ? (3667445254971940867ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 2])))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_11 [(unsigned char)0] [(signed char)4]))));
        var_25 = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_11 [i_3] [i_3 + 1])))) >> (((5198411344487469182LL) - (5198411344487469179LL)))))) : (((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_11 [i_3] [i_3 + 1])))) + (2147483647))) >> (((5198411344487469182LL) - (5198411344487469179LL))))));
        arr_14 [i_3] = ((/* implicit */_Bool) 16777212);
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    }
    var_26 += ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (3667445254971940836ULL)))))));
    var_27 = ((/* implicit */unsigned short) 3667445254971940867ULL);
}
