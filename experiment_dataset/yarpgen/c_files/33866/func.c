/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33866
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (var_16)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)32533))));
        var_19 = arr_1 [i_0];
        var_20 *= ((/* implicit */unsigned char) (unsigned short)8328);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_5 [i_2] [i_3]))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3]))) : (arr_3 [i_0] [i_1] [i_2])));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned short)42380)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-113)) + (2147483647))) >> (((/* implicit */int) var_17))))))))));
    var_24 = ((/* implicit */short) (-(((((/* implicit */int) var_0)) + (((((/* implicit */int) (signed char)-101)) & (((/* implicit */int) var_11))))))));
    var_25 &= ((/* implicit */_Bool) var_16);
}
