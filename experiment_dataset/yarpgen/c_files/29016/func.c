/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29016
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min(((+(min((((/* implicit */unsigned long long int) (short)-20123)), (arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) (~(arr_1 [i_0] [(signed char)15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)20115)))))) : (arr_1 [i_0] [i_0])))));
        var_11 = ((/* implicit */unsigned long long int) (signed char)31);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1]))));
    }
    var_12 = ((/* implicit */int) var_6);
    var_13 = ((/* implicit */unsigned int) (short)-20097);
    var_14 = ((/* implicit */signed char) (+(((long long int) var_10))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
}
