/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224694
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
    var_20 = ((/* implicit */unsigned char) var_18);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((min((var_7), (((/* implicit */unsigned long long int) var_11)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 4LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)151))))));
            arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 2]));
        }
    }
}
