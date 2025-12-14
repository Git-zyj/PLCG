/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205328
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
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32762))) ^ (max((((/* implicit */long long int) (unsigned char)69)), (var_17)))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0] [i_0 - 1]))) : (max((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */short) var_12);
    }
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)17507))))) : (var_10))))));
    var_21 = ((/* implicit */short) var_2);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_2))) && (((/* implicit */_Bool) var_10))));
}
