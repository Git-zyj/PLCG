/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38048
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
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (unsigned char)57))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3]))))) == (var_5)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) (unsigned short)6484);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3268066580074115664ULL)) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_5))), (((/* implicit */long long int) arr_5 [i_0 + 1] [i_2 - 1] [i_2])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_10 [i_3] [9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 - 3])))));
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)49))));
        arr_12 [(unsigned char)8] = (+(((/* implicit */int) arr_7 [i_3 - 2] [i_3] [i_3 + 1])));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_3] [i_3])) || (((/* implicit */_Bool) (unsigned char)49)))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    }
    var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((long long int) var_10))))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) var_13))))) : (((((((/* implicit */_Bool) (unsigned char)249)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_16)))) - (44472)))))));
}
