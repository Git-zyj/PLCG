/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232322
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */short) ((arr_1 [i_0]) - (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [5U]))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_0]))))) ? (max((3860538877U), (2443518505U))) : (((/* implicit */unsigned int) ((((int) arr_1 [i_0])) * (((/* implicit */int) ((((/* implicit */long long int) 21U)) <= (arr_0 [14LL] [i_0 + 1])))))))));
        var_15 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) var_6)), (var_0))))))) % (((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-101))))) + (3237406311U)))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_16 *= ((/* implicit */int) ((((max((arr_4 [i_1]), (arr_2 [i_1] [i_1]))) > (max((arr_0 [i_1] [i_1]), (((/* implicit */long long int) (short)(-32767 - 1))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)32761)) / (((/* implicit */int) var_7)))))));
        var_17 &= (!(((((/* implicit */_Bool) arr_3 [i_1 + 1] [(unsigned char)12])) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [(_Bool)0])))));
        var_18 = ((/* implicit */unsigned int) (short)(-32767 - 1));
    }
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) ? ((((~(4294967295U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_4))) > (var_10)))))));
}
