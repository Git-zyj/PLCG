/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224048
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
    var_20 = (signed char)109;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_0] = ((unsigned char) 1687591926U);
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (unsigned char)105))));
            var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) ((arr_2 [1U]) >> (((((/* implicit */int) arr_1 [i_0] [(unsigned short)1])) - (4834)))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_23 |= ((/* implicit */int) var_17);
            arr_9 [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_5 [(unsigned short)6] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)4] [(short)13])))))) == (((((/* implicit */_Bool) 4208501701154944855LL)) ? (8384954833727937118LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [9LL] [i_2]))))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) arr_2 [i_0])));
        var_24 = ((/* implicit */short) var_2);
    }
    var_25 += ((long long int) var_16);
}
