/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222341
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */int) var_3);
        var_18 *= ((/* implicit */unsigned short) ((unsigned char) 65535U));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_12)))));
                        var_19 = ((/* implicit */short) arr_7 [i_3] [(unsigned char)2] [i_1] [i_1] [(unsigned char)2] [i_0]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_20 -= ((/* implicit */_Bool) ((unsigned long long int) ((long long int) arr_9 [(_Bool)1])));
        arr_12 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))) == (arr_3 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_21 = ((/* implicit */_Bool) var_7);
    var_22 = (~((~(var_14))));
}
