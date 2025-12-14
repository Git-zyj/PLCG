/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2250
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
    var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) 1040384U)) + ((+(var_1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned char)235))) ? (arr_11 [i_2 - 3] [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : (((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned char)12] [i_2 - 2] [i_3] [i_4]))))), (max((max((((/* implicit */unsigned long long int) var_8)), (arr_9 [i_4] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_1])))))))));
                            arr_15 [i_0] [i_0] [i_2 - 3] [i_0] [i_1] [i_3] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            var_13 = ((/* implicit */short) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) arr_7 [i_4] [i_3] [i_1] [i_0]))));
                        }
                        var_14 = (~(((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_3] [i_3])))));
                    }
                }
            } 
        } 
    } 
}
