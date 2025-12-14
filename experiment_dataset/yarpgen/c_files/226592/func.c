/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226592
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) -14899340))));
        arr_4 [i_0] &= ((/* implicit */unsigned char) (-(arr_0 [i_0 + 1])));
        var_17 |= ((/* implicit */unsigned char) ((_Bool) var_3));
        arr_5 [i_0] = (signed char)-60;
        var_18 += ((/* implicit */_Bool) (signed char)59);
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_2]))));
                    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1 + 3])) % (((/* implicit */int) arr_9 [i_1 + 3]))))) ? (min((((/* implicit */long long int) (signed char)59)), (arr_1 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))));
                    arr_15 [i_3] [i_2] [i_3] [i_1 + 3] = ((/* implicit */unsigned char) (short)19259);
                }
            } 
        } 
        arr_16 [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) arr_8 [i_1 + 2])) : (((/* implicit */int) (signed char)-60))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))) : (arr_13 [i_1 + 3] [i_1] [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    }
    var_21 -= ((/* implicit */unsigned int) (signed char)-59);
}
