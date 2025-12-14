/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211294
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_17 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (-2837524175618368899LL))))));
        var_18 = (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)5943)))));
        arr_2 [i_0] [i_0] = arr_1 [(signed char)8] [(signed char)8];
        var_19 = ((/* implicit */int) (-(((arr_1 [(unsigned char)9] [i_0]) ? (16670220935942660858ULL) : (((/* implicit */unsigned long long int) var_10))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned long long int) (~(max(((+(827341722U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(unsigned char)3] [i_1])))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (signed char)37);
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (((((/* implicit */_Bool) min((var_10), (var_10)))) ? ((-(arr_3 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (9223372036854775807LL)))))), (((/* implicit */int) var_11)))))));
                }
            } 
        } 
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (1776523137766890765ULL) : (8539780001927474137ULL))), (((/* implicit */unsigned long long int) arr_8 [i_2]))))) ? ((+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2] [i_2])) >> (((/* implicit */int) var_3)))))));
    }
    var_23 = ((/* implicit */_Bool) var_9);
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((+(((/* implicit */int) var_6)))) | (((/* implicit */int) ((((((/* implicit */_Bool) 1682473754796044812ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) == ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))))))));
}
