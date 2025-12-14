/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25485
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */int) (!(arr_5 [i_0 - 1])));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) ((((((int) (unsigned short)54853)) > (((/* implicit */int) (unsigned short)10683)))) ? ((~(var_14))) : (((arr_8 [i_0 - 1] [i_0 - 1] [(unsigned short)3]) * (((/* implicit */int) var_0))))));
                var_18 = ((/* implicit */short) arr_1 [i_1] [i_1]);
                arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((-3639145) + (((/* implicit */int) (unsigned short)37326))));
            }
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                arr_13 [i_0] = ((/* implicit */unsigned short) ((((var_5) + (2147483647))) >> (((((/* implicit */_Bool) (unsigned short)54827)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))) : (8159108513318883556LL)))));
                arr_14 [(unsigned short)0] [i_1] [(signed char)12] &= ((/* implicit */unsigned short) var_8);
            }
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? ((((~(9223372036854775799LL))) & (((/* implicit */long long int) (~(arr_9 [i_0] [i_0])))))) : (((/* implicit */long long int) ((arr_3 [i_0 - 1]) - (arr_3 [i_0 - 1]))))));
        }
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_19 -= (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!((_Bool)0)))), ((~(var_15)))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4 + 3] [i_0])) + (((/* implicit */int) arr_16 [i_0 - 1]))))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_4 + 1])) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
            arr_18 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10658)))))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */long long int) 1424267775)) : (9223372036854775799LL)))))));
        }
        for (signed char i_5 = 2; i_5 < 9; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((-2147483628) + (var_7)))))));
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_5 + 1] [i_0])) <= (((/* implicit */int) arr_12 [i_0 - 1] [i_5 + 4] [i_0]))))) <= (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_12 [i_0 - 1] [i_5] [i_0])))))));
        }
        var_22 = ((/* implicit */short) min((((var_15) % (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0 - 1])))))));
        var_23 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0 - 1]))) == (min((((var_15) / (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) max((2143353914), (1371331910))))))));
    }
    var_24 = ((/* implicit */_Bool) var_12);
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-9223372036854775778LL)))) ? (var_14) : (((/* implicit */int) var_2))))))))));
}
