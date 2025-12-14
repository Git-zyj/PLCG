/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191526
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_12 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] = ((short) 2147483647);
            var_13 &= (+(((/* implicit */int) arr_0 [i_0])));
        }
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_14 &= ((/* implicit */short) var_3);
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)0)))) : (arr_4 [i_2 + 3] [(signed char)5] [(short)4]))))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) -211281988))) > (-622598366))))));
        }
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 647953363)) : (3121862254100221082ULL)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_6))))));
}
