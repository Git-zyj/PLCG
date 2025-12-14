/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249971
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (+(((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2] [i_2])) * (((/* implicit */int) arr_6 [i_2] [i_2]))));
                        arr_9 [i_0 - 2] [i_1] [i_0 - 1] [i_0] [i_1 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2])) || (((/* implicit */_Bool) var_2))));
                    }
                    var_12 &= ((/* implicit */unsigned short) arr_3 [i_2]);
                    arr_10 [i_0 + 1] [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) (unsigned short)24732);
                    var_13 = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
                }
            } 
        } 
    }
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_2)) : (4419618364506686181LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
}
