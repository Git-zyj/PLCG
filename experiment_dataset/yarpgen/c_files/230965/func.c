/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230965
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(signed char)4] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)19708))) ? (((/* implicit */int) arr_6 [18U] [i_1 + 1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)6] [i_1]))));
                    arr_9 [i_1] = (-((-(arr_2 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        var_11 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)16]))) >= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1294303054693356070LL) : (arr_2 [i_0] [i_0] [i_0 - 1])))));
    }
    var_12 = var_7;
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17926))))))))));
}
