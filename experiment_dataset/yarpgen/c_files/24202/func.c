/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24202
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
    var_20 = ((/* implicit */_Bool) var_3);
    var_21 = (~(((/* implicit */int) (_Bool)1)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_2))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(7702832888547927099LL))))));
            var_23 = ((/* implicit */unsigned char) ((arr_2 [i_0] [i_1]) % (((/* implicit */long long int) ((((/* implicit */_Bool) 5U)) ? (-1000538684) : (((/* implicit */int) (_Bool)1)))))));
            arr_7 [1LL] [1LL] = (((_Bool)1) ? (1057291709U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))));
            arr_8 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (arr_2 [(unsigned char)8] [0ULL]) : (arr_2 [i_0] [i_0]));
            arr_9 [5ULL] [i_1] |= -1172732323381115415LL;
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) arr_10 [i_0] [i_2])) - (1)))));
            var_25 ^= ((/* implicit */unsigned int) 2097151);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(signed char)21]) : (arr_1 [i_0])));
        }
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_3]))) ? (min((((-2394358780605948442LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-19002))))), (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (short)-19006)), (2969762160U))))))));
        arr_16 [i_3] [i_3] = ((((/* implicit */long long int) ((((((/* implicit */_Bool) -7702832888547927100LL)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))))) | (((unsigned int) var_11))))) % (((long long int) ((var_12) << (((/* implicit */int) arr_10 [i_3] [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */_Bool) ((unsigned int) var_2));
        arr_20 [i_4] [i_4] = ((/* implicit */int) (~(max((35U), (((/* implicit */unsigned int) arr_17 [i_4]))))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((var_17), (((/* implicit */short) var_5)))))) ? ((~(var_15))) : (((/* implicit */unsigned int) max(((~(1806196400))), ((~(((/* implicit */int) (_Bool)1)))))))));
}
