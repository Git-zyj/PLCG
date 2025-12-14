/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35525
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
    var_16 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(4567891347093429718LL)))), ((~(var_6)))));
        var_18 |= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) var_8)), (var_1))))) == (((/* implicit */unsigned long long int) ((2523593955U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
        arr_2 [5ULL] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) << (((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_6))) - (18446744073709528231ULL))))) - (((/* implicit */unsigned int) ((arr_0 [5ULL]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) arr_7 [i_1 - 2]);
                    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2])))))) ? (((16705057642271509256ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)12]))))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) (short)-7563)) : (((/* implicit */int) var_7))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_24 [i_1] [i_1] [i_1 + 3] [i_1] [11U] [i_1 + 3] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4])))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2275820415U)))))));
                            var_22 = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_1 + 3]));
                        }
                        var_23 -= ((/* implicit */short) var_2);
                    }
                } 
            } 
        } 
        arr_25 [(unsigned char)8] &= ((/* implicit */unsigned long long int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        var_24 = ((/* implicit */short) arr_11 [i_1] [i_1 + 3] [i_1] [2ULL]);
    }
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_8))))))) & (max((((var_2) | (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (var_15)))))));
}
