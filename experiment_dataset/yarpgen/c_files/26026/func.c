/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26026
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
    var_18 = (((!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-5336692948714329134LL)))))) || (((/* implicit */_Bool) ((var_0) / (max((var_8), (((/* implicit */long long int) var_15))))))));
    var_19 &= ((/* implicit */unsigned char) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) 4194288LL)) ? ((-(((/* implicit */int) var_14)))) : (((((/* implicit */int) var_1)) % (32704))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) -32704);
        arr_3 [i_0] &= ((/* implicit */signed char) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((1179554018U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
        var_21 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 32704)) ? (32707) : (((/* implicit */int) (short)6769)))) + (((((/* implicit */int) (short)6752)) ^ (((/* implicit */int) (short)-6770))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) arr_4 [i_1] [i_1])))))));
    }
}
