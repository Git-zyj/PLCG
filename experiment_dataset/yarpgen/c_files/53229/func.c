/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53229
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
    var_12 = ((/* implicit */_Bool) ((var_4) >> (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)24))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) var_6)) : (-5855221565371615114LL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (max((((/* implicit */long long int) arr_1 [0])), (-7093184411335794365LL)))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_7)))) > ((-(((/* implicit */int) (short)2047))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_15 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] [11] = ((/* implicit */unsigned int) (signed char)-96);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_8))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 4; i_5 < 17; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_5] [i_0] [i_0] [9ULL] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)64))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((6881709216426208202LL) ^ (5855221565371615114LL)))) ? (var_6) : (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))));
                            arr_20 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                            arr_21 [15LL] [i_1] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) (signed char)-25);
                        }
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) var_2);
}
