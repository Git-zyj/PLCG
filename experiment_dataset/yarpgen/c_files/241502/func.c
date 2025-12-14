/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241502
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (signed char)31);
        var_13 += ((/* implicit */long long int) ((((_Bool) var_11)) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0)))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18369)) ? (var_8) : (arr_0 [i_0])));
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6108429337800097610LL)) ? (((/* implicit */int) (short)-18370)) : (((/* implicit */int) (unsigned short)65394))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) var_11);
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (short)-18370))))) || (((/* implicit */_Bool) var_4)))))) < (min((17932349294350579067ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)18369)))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_18 += ((/* implicit */long long int) max((((/* implicit */int) (short)-18370)), ((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (short)18369))))))));
                        var_19 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [(short)13] [i_1 - 1])) || (((/* implicit */_Bool) 1707870500117556530LL))))) % (((((/* implicit */_Bool) (short)-18360)) ? (((/* implicit */int) (short)1316)) : (((/* implicit */int) (short)-10956))))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) var_8);
}
