/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47291
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0 + 3] [i_0 + 3]));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 2] [i_0 + 2]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10125740273390591868ULL))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (arr_1 [i_0 + 3] [i_0 + 1])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)191));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1]) ? (arr_1 [i_1] [i_1]) : (var_2)))) ? (((((/* implicit */_Bool) 10005080324205708314ULL)) ? (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (10005080324205708303ULL))) : (((unsigned long long int) (unsigned char)52)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_15)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 += var_2;
            var_20 = arr_1 [i_2] [7ULL];
        }
        arr_11 [i_1] [5ULL] = ((unsigned char) (unsigned char)255);
    }
    var_21 ^= ((/* implicit */unsigned char) ((var_16) | (var_5)));
    var_22 = ((/* implicit */_Bool) min((var_16), (min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) var_3))))));
}
