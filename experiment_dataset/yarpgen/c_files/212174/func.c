/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212174
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [(short)15])))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) max((arr_3 [i_0]), (arr_3 [i_1 - 1]))))));
                    var_12 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)25105)))))));
                }
                for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_0)))), ((((~(-840455743))) >= (((/* implicit */int) arr_14 [i_1] [i_1 - 3] [i_1] [i_3 - 3] [i_5 + 3]))))));
                                arr_17 [i_5] [10U] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) var_8)) : (var_0)))))));
                                arr_18 [7] [i_4] [i_5] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]);
                                var_14 ^= -1658599555;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [i_1 + 3]);
                        arr_22 [i_6] [i_6] [i_3] [i_1 + 3] [i_0] = ((/* implicit */_Bool) var_9);
                    }
                }
                var_16 ^= ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (~(var_6)));
}
