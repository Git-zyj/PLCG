/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234638
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    var_11 |= ((/* implicit */unsigned char) (~(var_7)));
    var_12 = (~(var_3));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) (unsigned char)227);
        var_14 = ((/* implicit */_Bool) min((var_14), ((!(((/* implicit */_Bool) (-(arr_1 [i_0]))))))));
        var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_16 *= (+(arr_3 [i_1 + 3] [i_1 + 4]));
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) == (((/* implicit */int) arr_2 [i_1] [i_1])))))) < (arr_3 [i_1] [i_1 + 1])));
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_1 + 4] [i_1 + 1]));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_18 = min(((-(((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) : (var_3))))), (var_7));
        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */_Bool) max((arr_3 [i_2] [i_2]), (((/* implicit */unsigned long long int) ((arr_2 [(unsigned char)22] [(_Bool)1]) && (((/* implicit */_Bool) arr_0 [i_2] [i_2])))))))) && (((/* implicit */_Bool) arr_1 [i_2]))))));
    }
}
