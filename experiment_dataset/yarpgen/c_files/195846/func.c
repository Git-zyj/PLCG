/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195846
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
    var_17 = ((/* implicit */unsigned int) var_16);
    var_18 = ((/* implicit */int) min((var_18), (var_5)));
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26973)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (short)0))))) << (((((/* implicit */int) ((short) var_3))) + (11317))))) : (((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (-1791167219))) + (2147483647))) << (((((((/* implicit */int) (short)0)) | (((/* implicit */int) (short)13275)))) - (13275)))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) arr_1 [i_0]);
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_2 [i_0 - 1]), (((short) arr_1 [i_0])))))));
                var_20 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0 - 4]) | (((/* implicit */int) (short)-13260))))) ? (((((arr_3 [i_0] [i_1 + 1]) + (2147483647))) << (((max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))) - (4294959639U))))) : ((+(((/* implicit */int) ((_Bool) (short)-1)))))));
            }
        } 
    } 
}
