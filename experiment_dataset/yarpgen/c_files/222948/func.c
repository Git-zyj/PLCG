/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222948
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
    var_10 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1974314026U))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) arr_0 [2U] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2320653285U)))))));
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_7)))) & (((/* implicit */int) var_2)))) + (((/* implicit */int) (unsigned char)217))));
                                var_13 = ((/* implicit */int) (~((-(var_4)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) (-(((var_0) ? (arr_13 [i_1] [i_3] [i_3 - 1] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    arr_16 [(short)16] = arr_10 [i_3] [10U] [i_3] [i_3] [12] [i_3];
                }
            } 
        } 
        var_15 = ((/* implicit */int) (-((~(var_4)))));
    }
    var_16 = (~(var_4));
}
