/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206344
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
    var_17 &= ((/* implicit */int) ((_Bool) var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2572)) << (((-1787003266) + (1787003267)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_1 + 4] [i_1 + 4] [i_1 + 4])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((short) var_12))) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))) << ((((((~(((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_4 [(unsigned short)2] [(short)0] [(unsigned short)2])))))) + (29766))) - (26)))));
                                arr_13 [(unsigned short)2] [(unsigned short)2] [i_0] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
