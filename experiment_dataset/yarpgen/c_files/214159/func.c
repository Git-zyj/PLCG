/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214159
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
    var_20 = ((/* implicit */short) ((((/* implicit */int) var_17)) < (((/* implicit */int) (unsigned char)80))));
    var_21 |= ((/* implicit */unsigned int) ((short) var_9));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [(short)1] [i_1] [i_0 - 2] &= ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)80)) & (((((/* implicit */int) (unsigned char)176)) & (((/* implicit */int) (unsigned short)28832)))))) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3800352563U)) ? (arr_2 [i_2] [i_0]) : (215125205)))) && (((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) << (((-2166450570464089397LL) + (2166450570464089416LL)))))))))));
                    arr_9 [i_2] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */signed char) arr_0 [i_0 + 2] [i_1 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_14 [i_3] [i_0 - 3] [i_1] [i_0 - 3] [i_1] [i_0 - 3] = arr_3 [i_3];
                        var_22 = ((/* implicit */int) arr_0 [i_3] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)14046)) > (215125190)))) - (((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21043))))))))) && (((((/* implicit */int) (_Bool)1)) < (((((-215125226) + (2147483647))) << (((((/* implicit */int) (unsigned char)2)) - (2)))))))));
    var_24 = ((/* implicit */unsigned int) var_4);
}
