/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226923
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
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])))))) : (4294967295U)));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1 - 1]) + (arr_2 [i_1 - 1] [i_1 - 1])))) ? ((((_Bool)1) ? (arr_2 [i_1] [i_1 - 1]) : (arr_2 [i_1] [i_1 - 1]))) : (((arr_2 [i_1] [i_1 - 1]) & (arr_2 [i_1 - 1] [i_1 - 1])))));
                }
            } 
        } 
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0 - 1] [i_0 + 2]), (arr_2 [i_0 - 1] [i_0 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0 - 1] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 2])) ? (arr_2 [i_0 - 1] [i_0 + 2]) : (arr_2 [i_0 - 1] [i_0 + 2])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_5))))))) ? (2640389175U) : (((/* implicit */unsigned int) (+(arr_9 [i_3]))))));
        var_15 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((3294737957U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    }
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (2640389174U)));
    var_17 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)53)))))) || ((((!(var_4))) && ((!(((/* implicit */_Bool) var_2))))))));
}
