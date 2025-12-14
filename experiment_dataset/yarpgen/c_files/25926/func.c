/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25926
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned short)35051)) : (((/* implicit */int) (unsigned short)15024))))), (var_15))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_21 = ((arr_1 [i_0] [i_0]) < (((/* implicit */int) ((_Bool) var_17))));
        arr_2 [i_0] = ((/* implicit */long long int) 26ULL);
        var_22 *= ((/* implicit */short) (~(((/* implicit */int) var_11))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_23 *= ((/* implicit */unsigned int) ((long long int) arr_5 [i_1 + 2]));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) arr_7 [(short)20] [i_1]);
            var_25 += ((/* implicit */short) ((unsigned char) arr_0 [(unsigned short)10]));
            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_2]))));
        }
    }
    var_27 ^= (-(((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)26034)), (var_15))) > (var_14)))));
}
