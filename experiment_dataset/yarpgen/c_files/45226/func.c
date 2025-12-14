/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45226
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) (unsigned short)30456)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (min((((/* implicit */int) ((unsigned short) var_10))), ((~(((/* implicit */int) (short)16306))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (((unsigned char) arr_0 [2LL]))))) ? (((((/* implicit */_Bool) ((5ULL) >> (((/* implicit */int) (signed char)39))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((18446744073709551610ULL) - (18446744073709551597ULL)))))) : (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [(short)18]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_0] |= ((/* implicit */_Bool) (+(var_3)));
                        var_13 -= ((/* implicit */unsigned long long int) var_8);
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (5ULL))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
                        var_15 = (((_Bool)1) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_4])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) 2ULL);
                        var_17 = ((/* implicit */long long int) (~((~(18446744073709551611ULL)))));
                    }
                }
            } 
        } 
    }
}
