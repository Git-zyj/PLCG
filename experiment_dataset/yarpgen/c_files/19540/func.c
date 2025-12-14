/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19540
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) -670703633)) - (((long long int) arr_2 [i_0]))));
        arr_3 [15ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2147483647) | (((/* implicit */int) (unsigned char)183))))) ? (((/* implicit */int) arr_0 [i_0])) : (((var_9) ^ (arr_1 [i_0])))));
    }
    var_13 = ((/* implicit */unsigned short) max((-8592134275356919826LL), (((/* implicit */long long int) (signed char)106))));
    var_14 = ((/* implicit */_Bool) (unsigned char)200);
}
