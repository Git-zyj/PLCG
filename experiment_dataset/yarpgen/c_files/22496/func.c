/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22496
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (410811499) : (arr_0 [i_0]))))));
        var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) (signed char)-70)) ? (410811499) : (arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) arr_3 [i_1]))))) | (((((/* implicit */_Bool) arr_4 [(unsigned char)2])) ? (((/* implicit */int) (unsigned short)31845)) : (499882723)))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(arr_4 [i_1])))) & (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (arr_3 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) -916128509)) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (arr_5 [i_1])));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) (((~(10420265802935040122ULL))) | (((((/* implicit */_Bool) (unsigned short)3926)) ? (arr_3 [i_2]) : (arr_3 [i_2])))));
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_2]))) && (((/* implicit */_Bool) (-(arr_3 [i_2]))))));
        var_17 ^= ((/* implicit */unsigned short) (+((+(arr_4 [(unsigned char)22])))));
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))));
}
