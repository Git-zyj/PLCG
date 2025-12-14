/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200386
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (short)24466))));
            arr_5 [i_0] [i_1] &= max(((short)24466), (((/* implicit */short) (_Bool)1)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_0] [4LL] [i_2])))) / (((/* implicit */int) ((_Bool) (unsigned short)2425)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24465))));
            arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0]))))), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(((unsigned int) 11291430U))))));
            var_17 = (((~(arr_0 [i_0]))) + (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)0)))));
        }
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            var_18 = ((_Bool) arr_2 [i_3 + 1] [i_3 + 1]);
            arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_3]))))) ? (arr_10 [(unsigned char)16] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3 + 1])))));
            arr_14 [i_0] [(_Bool)1] [i_3 - 1] |= ((/* implicit */_Bool) (short)16856);
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19805))) : (arr_2 [i_0] [i_3 + 1])));
            arr_15 [i_3] [i_3] [i_0] = ((/* implicit */short) ((_Bool) arr_10 [i_3 + 1] [i_3 - 1]));
        }
        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0])), (1756905608)))) || (((/* implicit */_Bool) (short)-24447))));
        arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24447))))) && (((/* implicit */_Bool) ((((_Bool) 11291424U)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-32)), (arr_7 [(unsigned char)15] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_4))))))))));
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_2 [i_4] [i_4]);
        arr_19 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [(signed char)8] [i_4] [i_4]), ((signed char)28)))) ? (((arr_18 [i_4]) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (unsigned short)58063)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45193)) == (((/* implicit */int) arr_4 [i_4] [i_4]))))))));
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_7);
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5])) + (((/* implicit */int) arr_20 [i_5])))))));
        var_24 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) arr_20 [i_5])));
    }
    var_25 = (((+(var_11))) - (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_10))) ? (max((((/* implicit */long long int) var_8)), (var_11))) : (((long long int) (signed char)116)))));
}
