/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249642
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7770)) > (((/* implicit */int) (unsigned char)167))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 - 3])))) == (((/* implicit */int) ((((((/* implicit */int) (unsigned char)88)) << (((/* implicit */int) arr_5 [i_2] [i_0] [i_0] [i_0])))) == (((/* implicit */int) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 3] [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (short)17257))))) : (max((min((var_10), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) && (((/* implicit */_Bool) 3296838264U)))))))));
                                arr_11 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0]);
                                var_19 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_1] [i_4]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((min((arr_4 [i_0 - 4] [i_1 + 4] [i_1 + 3]), (arr_4 [i_0 - 1] [i_1 + 3] [i_1 + 3]))), (((/* implicit */unsigned int) (!(((((/* implicit */int) (short)-29418)) == (arr_10 [i_0]))))))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [5U] [i_1 + 2] [i_1 - 3])) ? (4294967295U) : (arr_9 [i_0] [i_0] [i_0 - 4] [i_0] [i_0] [i_1]))), (((/* implicit */unsigned int) (unsigned short)37538))));
                    var_21 = (~(((/* implicit */int) (short)29411)));
                }
            } 
        } 
    } 
}
