/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43759
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
    var_20 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) min((var_8), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_0 [i_0] [i_1])))))) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)65535)) - (65527)))))), (((((/* implicit */_Bool) var_15)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)6]))))))) - (245ULL)))))));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_1);
        }
        var_23 *= (unsigned char)137;
        arr_5 [10LL] = ((/* implicit */long long int) ((min((((((/* implicit */int) var_9)) & (((/* implicit */int) arr_3 [(_Bool)1] [2LL])))), (((((/* implicit */_Bool) 1122571405)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) < ((+((-(((/* implicit */int) var_9))))))));
    }
}
