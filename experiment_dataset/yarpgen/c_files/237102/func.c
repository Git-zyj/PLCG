/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237102
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (((arr_2 [i_0] [i_0]) | (arr_2 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3995999730U)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)511)))))));
                        var_17 |= (~(((((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0])) ^ (arr_6 [i_0] [i_2] [i_3]))));
                        var_18 = ((((/* implicit */_Bool) ((arr_1 [i_3]) ^ (arr_1 [i_2])))) ? (arr_1 [i_2]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_2]) : (arr_1 [i_2]))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((arr_1 [i_0]) != (((arr_1 [i_0]) % (arr_1 [i_0]))))))));
                        var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_0] [i_3]) : (arr_1 [i_0]))) : (((arr_9 [i_0]) + (arr_1 [i_2]))))) + (9223372036854775807LL))) << ((((+(((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-2973)))))) - (255)))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 3833216197U)) ? (298967570U) : (2372600171U)));
}
