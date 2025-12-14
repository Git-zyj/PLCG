/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40882
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
    var_15 *= ((/* implicit */signed char) ((short) min((((/* implicit */int) ((_Bool) (signed char)127))), (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] &= ((/* implicit */_Bool) (~(((int) (~(510296166))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((_Bool) (short)-28945));
                        arr_10 [i_0] [i_3] [(short)10] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (signed char)113)))))))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -510296154)) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (-510296154)))) ? (((((/* implicit */int) (unsigned char)39)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-7739)) && (((/* implicit */_Bool) arr_1 [i_2]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)98), (arr_2 [i_0] [i_1] [i_3]))))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_15 [i_0] [(_Bool)1] [i_1] [21] [(_Bool)1] [i_4] = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))));
                        var_17 = ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4])) >> (((var_5) - (12154269642241521234ULL))))));
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [i_4])) + (var_11))) : (((/* implicit */int) (signed char)-120))));
                        var_18 -= ((/* implicit */unsigned char) ((int) (short)-24077));
                    }
                }
            } 
        } 
    } 
    var_19 = var_6;
}
