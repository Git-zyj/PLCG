/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20355
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
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((max((((/* implicit */int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))) + (((/* implicit */int) arr_1 [i_0 + 3] [i_0]))))));
        var_17 = min((((/* implicit */short) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))), ((short)-32767));
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) min((852718049), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_18 = ((((((/* implicit */long long int) arr_0 [i_0 + 3])) / (-3570612365761609111LL))) * (((/* implicit */long long int) ((3556648960U) * (((/* implicit */unsigned int) arr_0 [i_0 + 1]))))));
        arr_4 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (6889)))))))) : (((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((((((/* implicit */int) arr_1 [i_0] [i_0])) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (6889))) - (28659))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
        var_20 = ((/* implicit */long long int) ((arr_6 [i_1] [i_1]) != (arr_6 [i_1] [i_1])));
    }
    var_21 = ((/* implicit */int) var_12);
}
