/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51018
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [(signed char)21] = ((/* implicit */long long int) (short)24260);
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) 255)))));
                    arr_11 [i_2] [i_3] = arr_2 [i_2];
                }
            } 
        } 
        var_19 = ((/* implicit */int) (~(((9223372036854775807LL) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775805LL))) + (62LL)))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        var_20 = ((/* implicit */signed char) var_11);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (arr_5 [i_4 + 2]) : (arr_5 [i_4 - 1])));
    }
    var_22 = ((/* implicit */unsigned short) 1073741824);
    var_23 = ((/* implicit */long long int) ((-411956765) & (((/* implicit */int) ((short) min((((/* implicit */unsigned char) (signed char)-108)), ((unsigned char)15)))))));
    var_24 = ((/* implicit */_Bool) -1073741825);
}
