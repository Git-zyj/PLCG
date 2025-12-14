/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53950
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
    var_18 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_1 + 4]));
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_21 -= ((/* implicit */short) arr_0 [i_1 + 1] [i_1 + 3]);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && ((_Bool)1)));
    }
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        var_22 ^= ((/* implicit */_Bool) var_8);
        var_23 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_0 [i_2] [(unsigned short)15])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)-1)))), (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) (unsigned short)25631);
                    var_25 *= ((/* implicit */unsigned short) ((_Bool) arr_11 [(unsigned short)2]));
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned short) (((_Bool)0) ? ((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46584)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15240))) : (2922221756U))))))))));
    }
    var_27 = ((/* implicit */unsigned short) var_10);
}
