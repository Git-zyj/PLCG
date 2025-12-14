/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32388
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
    var_17 ^= ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_3)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) (unsigned short)48571);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_19 += ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [(unsigned char)16] [i_2] [(_Bool)1]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48585))) / (var_14))));
                        var_20 = ((/* implicit */unsigned char) ((unsigned short) var_2));
                        var_21 -= ((/* implicit */unsigned char) min((((_Bool) arr_6 [i_0] [i_3] [i_2] [i_3])), (var_13)));
                        var_22 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_2])) / (((/* implicit */int) var_10)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)12066)) == (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                        arr_13 [(_Bool)0] [(_Bool)0] |= ((/* implicit */unsigned char) arr_4 [(unsigned short)3] [i_1]);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
}
