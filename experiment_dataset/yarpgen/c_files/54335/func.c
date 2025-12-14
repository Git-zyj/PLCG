/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54335
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
    var_12 = ((/* implicit */signed char) -1912630254);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_13 = ((signed char) ((unsigned char) arr_1 [i_0 + 4] [i_0 + 4]));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(max((-9156367003526686416LL), (arr_1 [i_0 + 4] [i_0 + 2]))))))));
        var_15 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 2147483647)) : (7875206891926193714LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 4] [i_0]))))) ? (min(((~(arr_1 [(unsigned short)0] [i_0 - 2]))), (((arr_1 [i_0 + 4] [(signed char)4]) ^ (arr_1 [i_0 + 4] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_10)))))) != (min((((/* implicit */long long int) var_4)), (7875206891926193714LL)))))))));
    }
    var_16 |= ((/* implicit */unsigned short) var_2);
}
