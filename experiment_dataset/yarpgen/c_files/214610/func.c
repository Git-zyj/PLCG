/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214610
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
    var_14 |= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_1))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(0LL)));
        var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))));
        var_16 = var_6;
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8766013176389803005ULL)) || (((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)16] [i_1]))));
            arr_11 [(unsigned short)13] [12ULL] [i_1] = (!(var_8));
        }
    }
    var_17 = ((/* implicit */unsigned long long int) var_12);
}
