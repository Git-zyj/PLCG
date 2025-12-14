/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27160
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
    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((var_4), (var_10)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((signed char) var_11));
        arr_4 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (268435455U)))));
        arr_5 [i_0] = var_2;
        var_22 ^= ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) var_10)))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) 4026531841U);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_10 [i_1] [i_1] = (~((~(arr_3 [i_1]))));
        arr_11 [i_1] [(signed char)7] &= ((/* implicit */unsigned int) var_19);
        arr_12 [i_1] [i_1] = ((/* implicit */int) (-(var_6)));
    }
    var_23 = ((/* implicit */unsigned char) (+(((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            {
                arr_18 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) var_6);
                var_24 -= ((/* implicit */unsigned long long int) max((((/* implicit */short) ((unsigned char) (_Bool)0))), (var_3)));
            }
        } 
    } 
}
