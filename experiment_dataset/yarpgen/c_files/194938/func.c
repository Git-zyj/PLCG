/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194938
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_10 = arr_2 [i_0];
        var_11 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) arr_0 [i_0])) - (arr_2 [i_0])))));
        var_12 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4073064165U)) ? (((/* implicit */int) (signed char)-1)) : (-1)))) && (((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [(signed char)6])))))))) >> (((((/* implicit */int) var_4)) - (37)))));
        var_13 = min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), ((~(arr_1 [i_0]))))));
        var_14 = ((/* implicit */int) var_3);
    }
    var_15 = ((/* implicit */unsigned char) var_1);
    var_16 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))))), (((signed char) 7553238140217523510LL)))))));
}
