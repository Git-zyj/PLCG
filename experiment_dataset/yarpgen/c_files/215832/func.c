/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215832
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    var_14 = (-(max((((/* implicit */unsigned long long int) var_3)), (arr_6 [i_2 - 3] [i_2 - 3] [i_2 + 4] [i_2 + 2]))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)0)))) & (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (signed char)94))))))) ? (arr_6 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)215), ((unsigned char)195)))) ? (((/* implicit */int) (unsigned char)195)) : ((~(((/* implicit */int) (signed char)68)))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 14532601545564031594ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))) : (arr_6 [i_0] [i_0] [i_0] [(unsigned char)0])))));
        var_17 -= ((/* implicit */unsigned char) ((14532601545564031605ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_2 [i_0])))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) & (18446744073709551614ULL)))));
    }
    var_18 = ((/* implicit */unsigned char) (~(min((min((((/* implicit */unsigned long long int) (unsigned char)210)), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))) <= (3914142528145520011ULL))))))));
    var_19 *= ((/* implicit */long long int) (signed char)0);
}
