/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28027
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [6LL] [i_2] [6LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(13223402595715878844ULL))))));
                        var_12 = ((/* implicit */unsigned char) (!(var_2)));
                    }
                    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_13 -= ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_1 [i_1])))));
                        arr_15 [i_0] [i_1] [2ULL] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4 - 3] [i_4 - 2]))));
                    }
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (-9223372036854775807LL - 1LL)));
                    var_14 |= (+(((/* implicit */int) var_11)));
                }
            } 
        } 
        arr_17 [i_0] [11ULL] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) < ((-(var_8)))));
    }
    var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL))));
}
