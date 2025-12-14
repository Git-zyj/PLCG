/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4566
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)101))));
        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 36028794871480320ULL)) ? (((/* implicit */int) (short)-8300)) : (15855653))) : (((((/* implicit */int) arr_3 [i_0] [(short)2])) - (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)16] [i_0])))))));
            arr_7 [i_1] [10U] [i_1] = ((/* implicit */_Bool) (-(max((min((((/* implicit */unsigned long long int) (unsigned char)251)), (14595194303134688366ULL))), (((/* implicit */unsigned long long int) ((int) arr_6 [i_0] [i_1])))))));
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) > ((~(var_13))))))));
            arr_8 [i_1] [i_1] [3ULL] = ((/* implicit */unsigned int) min(((short)-6987), (((/* implicit */short) var_6))));
        }
    }
    var_22 = ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 2147483620)))))) : (((/* implicit */int) ((short) min((var_0), (((/* implicit */short) var_12))))))));
    var_23 ^= ((/* implicit */signed char) (~(var_17)));
}
