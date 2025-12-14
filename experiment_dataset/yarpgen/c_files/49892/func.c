/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49892
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (unsigned char)213))));
        var_17 = ((/* implicit */_Bool) -2);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)15))));
        var_18 = ((/* implicit */unsigned int) (unsigned char)15);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_1 [(short)5] [i_0 + 1]))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)249)), (arr_3 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)212)) : (arr_3 [i_1 + 1])))) : (-1LL));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */signed char) 132135635);
            arr_11 [i_1] = ((/* implicit */short) min((((((-60641449) + (2147483647))) >> (11LL))), (((((/* implicit */int) arr_4 [i_2 - 2] [i_1 + 2])) ^ (((/* implicit */int) arr_4 [i_2 + 1] [i_1 + 1]))))));
            arr_12 [i_1] = ((/* implicit */int) var_8);
            var_20 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) (unsigned char)255)), (arr_9 [i_2 + 1] [i_2 + 2]))), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)180)))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) >= (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [(unsigned char)8]))) : (-11LL)))))) == (max((((/* implicit */int) (unsigned short)24070)), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)61588))))))));
    }
    for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        var_22 &= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (unsigned short)61600)), (14LL))) >> (((((((/* implicit */_Bool) ((10105236063812120092ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))))) ? (max((((/* implicit */long long int) (unsigned char)168)), (5265533720593412081LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [11] [i_3 - 2]))))) - (41943LL)))));
        arr_16 [i_3] = ((/* implicit */unsigned char) 268435455U);
    }
    var_23 -= ((/* implicit */_Bool) var_14);
}
