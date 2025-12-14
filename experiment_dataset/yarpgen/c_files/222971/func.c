/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222971
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) (-(((/* implicit */int) var_15))));
                    var_18 = ((/* implicit */long long int) arr_6 [(short)10] [i_1] [i_2]);
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(unsigned char)8] [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_9 [i_0] = ((/* implicit */signed char) ((unsigned short) 9223372036854775807LL));
        var_20 ^= ((/* implicit */_Bool) (-(arr_4 [10ULL])));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_1 [(short)8])))) + (2147483647))) << (((((/* implicit */int) var_1)) - (54442))))))));
        var_22 -= ((arr_5 [i_3 + 3] [i_3 + 3]) ? (4664593433739834816ULL) : (((/* implicit */unsigned long long int) -1962178345)));
    }
}
