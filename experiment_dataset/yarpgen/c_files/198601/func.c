/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198601
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) <= (arr_0 [i_0]))));
        arr_4 [3ULL] [(signed char)4] = ((((/* implicit */_Bool) max((min((arr_0 [0ULL]), (((/* implicit */unsigned long long int) -9223372036854775804LL)))), (((/* implicit */unsigned long long int) (short)-32764))))) ? (((((/* implicit */_Bool) ((-9223372036854775804LL) | (((/* implicit */long long int) 983203331))))) ? (((arr_2 [(unsigned char)0]) ? (9223372036854775803LL) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)98), ((unsigned char)136))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)18]))) / ((+(min((var_10), (((/* implicit */long long int) var_12))))))));
        var_20 = max(((-(((/* implicit */int) (signed char)8)))), (((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) arr_5 [i_1])))));
        var_21 -= ((/* implicit */unsigned long long int) var_3);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) arr_10 [17ULL]))))) | (((/* implicit */int) ((signed char) (unsigned char)0)))));
        arr_11 [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_5 [2ULL]))))) < (((/* implicit */int) arr_5 [i_2]))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    arr_19 [(unsigned short)5] [19] [8] = ((/* implicit */short) var_8);
                    arr_20 [i_3] [(short)19] = ((/* implicit */_Bool) (unsigned char)136);
                }
            } 
        } 
        arr_21 [i_3] = ((((_Bool) arr_8 [(signed char)16])) ? ((-(((/* implicit */int) arr_6 [i_3])))) : (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) arr_13 [(short)3] [(_Bool)1])) : ((~(((/* implicit */int) (unsigned char)119)))))));
        var_23 = min((min((((/* implicit */long long int) var_11)), (var_18))), (((/* implicit */long long int) var_1)));
    }
    var_24 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_6)) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (var_7))) - (46948))))));
}
